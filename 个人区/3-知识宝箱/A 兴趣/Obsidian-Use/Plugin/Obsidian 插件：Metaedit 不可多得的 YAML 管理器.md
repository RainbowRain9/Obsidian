---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/metaedit/
title: Obsidian 插件：Metaedit 不可多得的 YAML 管理器
date: 2023-11-12 23:48:30
tags:
  - 400兴趣类/笔记软件/Obsidian/Plugin
host: pkmer.cn
source: Pkmer
type: 插件
banner: "/img/pkmer-avatar.png"
banner_icon: 🔖
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

**插件名片**

*   插件名称：MetaEdit
*   插件作者：Christian B. B. Houmann
*   插件说明：帮你快捷管理 Obsidian 的元数据，可以预设 YAML 区域的值。
*   插件分类：编辑工具, 效率
*   插件项目地址：[点我访问](https://github.com/chhoumann/MetaEdit)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?metaedit)

## 概述

Metaedit 是 Obsidian 为数不多的管理 Obsidian 元数据的，所谓元数据就是指 Obsidian`---` 包裹的前置区域部分，这部分语法使用的是 yaml 格式所以也称为 yaml 区域。

有时候我们的笔记很多元数据都是固定的，虽然通过模板插件 [template-plugin](https://pkmer.cn/Pkmer-Docslugin) 预设一些固定的 yaml 值，但有时候我们需要一些可选项的值，比如 tags，分类等。这时候 metaedit 就可以提前把可选择项的值维护进去，这样笔记里直接选择就可以了。当然这个插件真正的魅力并不局限于此，它最大的价值就是跟 dataview 联动，弥补 [dataview](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview) 不能更改查询结果的缺陷。

![](https://cdn.pkmer.cn/images/202305160840263.gif!pkmer)

## 特性

*   通过命令添加或更新 Yaml 属性和数据视图字段
*   忽略属性以将其从菜单中隐藏
*   可以提前定义属性的值，并给出选择框选择
*   多值模式，允许您根据值检测和矢量化 / 创建数组
*   进度 自动更新属性 / 字段的属性
    *   可以统计 checkbox 的总任务数、已完成任务数和未完成任务计数。将任务标记为已完成，文件将使用新计数进行更新。
*   在 YAML 和数据视图之间转换属性
*   轻松删除属性
*   跟看板插件联动，拖动看板会更新对应属性的值
*   通过文件菜单编辑元数据
*   编辑标签中的最后一个值 。
*   提供 API 跟其他插件和模板程序联动。

## 相关设置项

*   进度属性
    
    ![](https://cdn.pkmer.cn/images/202305160914645.png!pkmer)
    
    如果笔记中有任务勾选，yaml 区域写上 `Total` `Completed` `Incomplete` 字段，会自动更新这些字段对应的值，代表任务总数，已完成任务数，未完成任务数。
    
    ![](https://cdn.pkmer.cn/images/202305160921040.png!pkmer)
    
*   自动属性
    
    ![](https://cdn.pkmer.cn/images/202305160922182.png!pkmer)
    

如果 yaml 区域有这些字段，`ctrl+p` → `run metaedit` 选择 `当前进度`，就会给出选择框显示预设的值，跟 dv 联动的时候，主要就是维护这个里面的值。

![](https://cdn.pkmer.cn/images/202305160923380.png!pkmer)

![](https://cdn.pkmer.cn/images/202305160948232.gif!pkmer)

## 高级用法

跟其他插件联动，用来修改 yaml 数据的值，比如跟 [dataview](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview) 和 [buttons](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/buttons)

```
```dataviewjs
//定义调用metaedit的更新字段和自动属性的api
const {update,autoprop} = this.app.plugins.plugins["metaedit"].api;
//定义调用buttons插件的api
const {createButton} = app.plugins.plugins["buttons"]
//定义一个下拉函数，指定要更新的属性，属性对应的值和要更新的文件
// 其中属性对应的值通过metaedit autoprop 中提前维护"当前属性"的内容中读取
const dropdown = async(file, key) => {
		const newtext = await autoprop("当前属性")
        await update(key, newtext, file);
}
// 选择包含movie 标签的文章
const pages = dv.pages("#movie")
    .map(t =>  [t.file.link, 
    //当前容器创建一个名称为“状态”的按钮，点击这个按钮执行下拉函数，并选择"status"属性对应的选项。
    createButton({app, el: this.container, args: {name:'状态'}, clickOverride: {click: dropdown, params: [t.file.path, 'status']}})
    ])
   
dv.table(["name", "status"], pages)

```

```

buttonsfrontmatter-alias-displaymetaeditobsidian-kanbanobsidian-meta-bind-pluginobsidian-metatableobsidian-view-mode-by-frontmatterObsidian 社区插件 dataviewmetaedit[Readme]template-plugin