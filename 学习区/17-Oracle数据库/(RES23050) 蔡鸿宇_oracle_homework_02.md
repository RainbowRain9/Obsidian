---
命名: __函数与日期（单行函数 / 聚合分组 / 日期）
课程:
  - Oracle 数据库技术  
执行人: 蔡鸿宇
created: 2025-09-16T15:16
updated: 2025-09-16T15:49
---

# 函数与日期（单行函数 / 聚合分组 / 日期）
## 0. 环境与表说明（可选）

- 会话时间与时区：

```sql
SQL> SELECT SYSDATE AS now FROM dual;

NOW
--------------
16-9月 -25
```

**输出：** 现在的时间

- 若涉及日期文字常量，建议统一使用 `TO_DATE(..., 'YYYY-MM-DD')` 或 `DATE 'YYYY-MM-DD'` 字面量，避免 NLS 差异引发错误。

---

## 1. 单行函数（字符 / 数值 / 转换 / 正则）

### 1.1 字符函数

```sql
-- 大小写
SQL> SELECT UPPER(first_name) AS first_up, LOWER(last_name) AS last_low FROM customers;

FIRST_UP             LAST_LOW
-------------------- --------------------
JOHN                 brown
CYNTHIA              green
STEVE                white
GAIL                 black
DOREEN               blue

-- 长度与子串
SQL> SELECT LENGTH('Database Systems') AS len FROM dual;

       LEN
----------
        16

SQL> SELECT SUBSTR('Mary had a little lamb', 12, 6) AS piece FROM dual;

PIECE
------------
little

-- 定位与填充
SQL> SELECT INSTR(name, 'e') AS pos_e FROM products WHERE product_id = 1;

     POS_E
----------
         4

SQL> SELECT RPAD(name, 30, '.') AS name_rpad, LPAD(price, 8, '*') AS price_lpad
  2  FROM products WHERE product_id < 4;

NAME_RPAD
--------------------------------------------------------------------------------
PRICE_LPAD
----------------------------------------------------------------
Modern Science................
***19.95

Chemistry.....................
******30

Supernova.....................
***25.99

-- 去除与替换
SQL> SELECT LTRIM('   Hello Kathy Lindsey!') AS ltrimmed FROM dual;

LTRIMMED
----------------------------------------
Hello Kathy Lindsey!

SQL> SELECT REPLACE(name, 'Science', 'Physics') FROM products WHERE product_id = 1;

REPLACE(NAME,'SCIENCE','PHYSICS')
--------------------------------------------------------------------------------
Modern Physics

-- NVL / NVL2
SQL> SELECT customer_id, NVL(phone, 'Unknown Phone Number') AS phone_or_unknown FROM customers;

CUSTOMER_ID PHONE_OR_UNKNOWN
----------- ----------------------------------------
          1 800-555-1211
          2 800-555-1212
          3 800-555-1213
          4 800-555-1214
          5 Unknown Phone Number

SQL> SELECT customer_id, NVL2(phone, 'Known', 'Unknown') AS phone_flag FROM customers;

CUSTOMER_ID PHONE_FLAG
----------- --------------
          1 Known
          2 Known
          3 Known
          4 Known
          5 Unknown
```

**说明：**
`UPPER/LOWER` 用来统一大小写；
`LENGTH` 返回字符串长度；
`SUBSTR` 截取子串；
`NVL`/`NVL2` 处理缺失值，避免 `NULL` 影响结果。

---

### 1.2 数值函数

```sql
SQL> SELECT ABS(-10) AS abs_v, CEIL(5.8) AS ceil_pos, CEIL(-5.2) AS ceil_neg FROM dual;

     ABS_V   CEIL_POS   CEIL_NEG
---------- ---------- ----------
        10          6         -5

SQL> SELECT FLOOR(5.8) AS floor_pos, FLOOR(-5.2) AS floor_neg FROM dual;

 FLOOR_POS  FLOOR_NEG
---------- ----------
         5         -6

SQL> SELECT ROUND(5.75) AS r0, ROUND(5.75, 1) AS r1, ROUND(5.75, -1) AS r_10 FROM dual;

        R0         R1       R_10
---------- ---------- ----------
         6        5.8         10

SQL> SELECT TRUNC(5.75) AS t0, TRUNC(5.75, 1) AS t1, TRUNC(5.75, -1) AS t_10 FROM dual;

        T0         T1       T_10
---------- ---------- ----------
         5        5.7          0
```

**说明：**
`ABS` 取绝对值；
`CEIL/FLOOR` 向上或向下取整；
`ROUND` / `TRUNC` 可以精确到某一位或十位。

---

### 1.3 转换函数

```sql
-- 数字与格式
SQL> SELECT TO_CHAR(12345.67, '99,999.99') AS formatted FROM dual;

FORMATTED
--------------------
 12,345.67

SQL> SELECT TO_NUMBER('970.13') + 25.5 AS sum_num FROM dual;

   SUM_NUM
----------
    995.63

-- 日期与格式
SQL> SELECT TO_CHAR(SYSDATE, 'YYYY-MM-DD HH24:MI:SS') AS now_fmt FROM dual;

NOW_FMT
--------------------------------------
2025-09-16 15:32:06

SQL> SELECT TO_DATE('2025-09-16 18:30', 'YYYY-MM-DD HH24:MI') AS ts FROM dual;

TS
--------------
16-9月 -25
```

**说明：**

---

### 1.4 正则表达式函数（REGEXP_ 系列）

```sql
-- 1965-1968 年出生
SQL> SELECT customer_id, first_name, last_name, dob
  2  FROM customers
  3  WHERE REGEXP_LIKE(TO_CHAR(dob, 'YYYY'), '^196[5-8]$');

CUSTOMER_ID FIRST_NAME           LAST_NAME            DOB
----------- -------------------- -------------------- --------------
          1 John                 Brown                01-1月 -65
          2 Cynthia              Green                05-2月 -68


-- 定位 / 提取 / 替换 / 计数
SQL> SELECT REGEXP_INSTR('But, soft! What light through yonder window breaks?', 'l[[:alpha:]]{4}') AS pos FROM dual;

       POS
----------
        17

SQL> SELECT REGEXP_SUBSTR('But, soft! What light through yonder window breaks?', 'l[[:alpha:]]{4}') AS sub FROM dual;

SUB
----------
light

SQL> SELECT REGEXP_REPLACE('But, soft! What light through yonder window breaks?', 'l[[:alpha:]]{4}', 'sound') AS rep FROM dual;

REP
--------------------------------------------------------------------------------
But, soft! What sound through yonder window breaks?

SQL> SELECT REGEXP_COUNT('But, soft! What light through yonder window softly breaks?', 's[[:alpha:]]{3}') AS cnt FROM dual;

       CNT
----------
         2
```

**说明：**

---

## 2. 聚合函数与分组

### 2.1 基本聚合

```sql
SQL> SELECT AVG(price) AS avg_price FROM products;

 AVG_PRICE
----------
19.7308333

SQL> SELECT AVG(DISTINCT price) AS avg_distinct_price FROM products;

AVG_DISTINCT_PRICE
------------------
        20.2981818

SQL> SELECT COUNT(product_id) AS cnt_id, COUNT(ROWID) AS cnt_rowid FROM products;

    CNT_ID  CNT_ROWID
---------- ----------
        12         12

SQL> SELECT MAX(price) AS max_p, MIN(price) AS min_p FROM products;

     MAX_P      MIN_P
---------- ----------
     49.99      10.99

SQL> SELECT MAX(dob) AS newest_dob, MIN(dob) AS oldest_dob FROM customers;

NEWEST_DOB     OLDEST_DOB
-------------- --------------
16-3月 -71     01-1月 -65

SQL> SELECT SUM(price) AS total FROM products;

     TOTAL
----------
    236.77

SQL> -- 标准差/方差（可选）
SQL> SELECT STDDEV(price) AS std_p, VARIANCE(price) AS var_p FROM products;

     STD_P      VAR_P
---------- ----------
11.0896303 122.979899
```

**说明：**
聚合函数会自动忽略 `NULL`，比如 `AVG` 只会对非空值求平均。

---

### 2.2 GROUP BY 与 HAVING

```sql
-- 每类商品计数
SQL> SELECT product_type_id, COUNT(ROWID) AS cnt
  2  FROM products
  3  GROUP BY product_type_id;

PRODUCT_TYPE_ID        CNT
--------------- ----------
              1          2
                         1
              2          4
              4          3
              3          2

-- 每类商品平均价，并基于平均价过滤
SQL> SELECT product_type_id, AVG(price) AS avg_price
  2  FROM products
  3  GROUP BY product_type_id
  4  HAVING AVG(price) > 20;

PRODUCT_TYPE_ID  AVG_PRICE
--------------- ----------
              1     24.975
              2      26.22
```

**说明：**

---

## 3. 日期与时间

### 3.1 插入与显示 DATE

```sql
-- 推荐 1：DATE 字面量（不依赖会话格式）
SQL> INSERT INTO customers (customer_id, first_name, last_name, dob, phone)
  2  VALUES (7, 'Steve', 'Purple', DATE '1972-10-25', '800-555-1215');
INSERT INTO customers (customer_id, first_name, last_name, dob, phone)
*
第 1 行出现错误:
ORA-00001: 违反唯一约束条件 (STORE.CUSTOMERS_PK)

-- 推荐 2：TO_DATE + 明确格式
SQL> INSERT INTO customers (customer_id, first_name, last_name, dob, phone)
  2  VALUES (6, 'Fred', 'Brown', TO_DATE('05-FEB-1968','DD-MON-YYYY'), '800-555-1215');
VALUES (6, 'Fred', 'Brown', TO_DATE('05-FEB-1968','DD-MON-YYYY'), '800-555-1215')
                                    *
第 2 行出现错误:
ORA-01843: 无效的月份

-- 查看当前日期与默认显示格式受 NLS 影响
SQL> SELECT SYSDATE FROM dual;

SYSDATE
--------------
16-9月 -25
```

**说明：**
`NLS_DATE_FORMAT` 会影响显示，不影响内部存储

---

### 3.2 常用日期函数

```sql
-- ADD_MONTHS
SQL> SELECT ADD_MONTHS('01-JAN-2012', 13) FROM dual;
SELECT ADD_MONTHS('01-JAN-2012', 13) FROM dual
                  *
第 1 行出现错误:
ORA-01843: 无效的月份


SQL> SELECT ADD_MONTHS('01-JAN-2012', -13) FROM dual;
SELECT ADD_MONTHS('01-JAN-2012', -13) FROM dual
                  *
第 1 行出现错误:
ORA-01843: 无效的月份

-- LAST_DAY
SELECT LAST_DAY('01-JAN-2012') FROM dual;

-- MONTHS_BETWEEN
SELECT MONTHS_BETWEEN('25-MAY-2012', '15-JAN-2012') FROM dual;

-- NEXT_DAY
SELECT NEXT_DAY('01-JAN-2012', 'SATURDAY') FROM dual;

-- ROUND
SELECT ROUND(TO_DATE('25-OCT-2012'), 'YYYY') FROM dual;
SELECT ROUND(TO_DATE('25-MAY-2012'), 'MM') FROM dual;

-- TRUNC
SELECT TRUNC(TO_DATE('25-MAY-2012'), 'YYYY') FROM dual;
SELECT TRUNC(TO_DATE('25-MAY-2012'), 'MM') FROM dual;

-- SYSDATE
SELECT SYSDATE FROM dual;
```

**说明：**
`ADD_MONTHS` 加减月份，`LAST_DAY` 求月末，`MONTHS_BETWEEN` 计算间隔月数。

---

## 4. 常见错误与修正

> 参考补充材料中示例错误，**先复现错误再给出修正**，体现你对 NLS/格式的理解。

**A：把 `SYSDATE` 写成 `sys.date`**

```sql
-- 错误复现
SELECT sys.date FROM dual;  -- 预期：ORA-01747
-- 正确写法
SELECT SYSDATE FROM dual;
```

**B：`LAST_DAY` 直接喂字符串导致无效月份**

```sql
-- 错误复现
SELECT LAST_DAY('01-JAN-2012') FROM dual;  -- 预期：ORA-01843
-- 修正 1：明确格式
SELECT LAST_DAY(TO_DATE('01-JAN-2012','DD-MON-YYYY')) FROM dual;
-- 修正 2：按本地语言月份名（如中文环境）
SELECT LAST_DAY(TO_DATE('01-1月-2012','DD-MON-YYYY')) FROM dual;
```

**C:插入日期时报错**
```sql
-- 错误复现
TO_DATE('05-2月-1968','DD-MON-YYYY')
-- 正确写法
DATE '1968-02-05'
```
- 中文环境下 `MON` 识别不了

---

## 5. 小结（2–5 行）

本次实验涵盖了 Oracle 的单行函数、聚合函数和日期函数。实验表明，**函数对字符串和数值处理非常灵活**，聚合函数能快速统计分组信息，而日期函数使用时需要注意 **NLS 格式**。通过本次作业，我掌握了 PL/SQL Developer 的基本用法以及函数的常见错误与修正方法。

---
