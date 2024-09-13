---
UID: 20231112141102
dtype: Area
status: 进行中
cover: 
created time: 2023-11-12 HH:mm:ss
updated time: 2024-04-20 17:10:33
---

## 目标描述
- [ ] 学会使用插件
- [ ] 配置快捷键
- [x] 设置主题
### 配置路径
- **核心插件**
	- [x] 日记
	- [x] 模板
	- [ ] 白板
- **社区插件**
	- [x] Calendar
	- [ ] Dynamic Highlights
	- [ ] Excalidraw
	- [ ] Fuzzy Chinese Pinyin


### 可行性调查
可行

## 问题解决
```dataview
table without id file.link as 项目名,type as 类别,status as 状态,time as 时间
from ""
where contains(dtype, "Project") and contains(type, "教程")
```

## 插件学习

```dataview
table without id file.link as 项目名,type as 类别,status as 状态,time as 时间
from ""   
where contains(dtype, "Project") and contains(tags, "Obsidian")
```

---

## 笔记
### 电脑安装插件 
#### 编辑增强
- [x] [[Obsidian 插件：Latex suite 通过片段、文本扩展和编辑器增强功能]]
- [x] [[Obsidian 插件：Hover Editor 通过将悬停弹窗变成一个功能齐全的编辑器]]
- [ ] [[Obsidian 插件：Global Search And Replace 给 Obsidian 全库进行文本替换]]
- [ ] [[Obsidian 插件：Code Tab 不止于混合代码块]]
- [ ] [[Obsidian 插件：Remember cursor position 记住上次阅读的位置]]
- [ ] [[Obsidian 插件：Typewrite scroll 像打字机一样写笔记]]
#### 格式化
- [x] [[Obsidian 插件：Easy Tpying 自动格式化你的中英文标点输入格式]]
#### 文字样式
- [x] [[Obsidian 插件：Editing Toolbar 必装的可视化编辑工具]] 
#### 图像
- [x] [[Obsidian 插件：Local image plus 将网络图片自动变为本地]]
#### 目录和大纲类
- [x] [[Obsidian 插件：Quiet Outline 强化大纲展示管理]]
- [ ] [[Obsidian 插件：Number Headings 给笔记中的标题自动编号，以及动态目录]] 
- [x] [[Obsidian 插件：Floating TOC 为你添加悬浮的笔记目录]]
- [ ] [[Obsidian 插件：Any Block 一个简易而又强大的块编辑器]] #困难 
- [x] [[Obsidian 插件：Zoom 通过快捷键，快速聚焦到大纲]]
#### 任务类&提醒
- [x] [[Obsidian 插件：Calendar 简单使用的阅历和任务管理方式]]
- [x] [[Obsidian 插件：Projects 提供笔记多视图的管理能力]]
- [x] [[Obsidian 插件：Checklist 自动提取各个笔记中的代办清单]] 
- [x] [[Obsidian 插件：Day Planner]]
#### 搜索 
- [x] [[Obsidian 插件：Fuzzy Chinese Pinyin 基于汉语拼音进行模糊搜索]]
- [ ] [[Obsidian 插件：Better Command Palette 更好更易用的命令面板]]
- [ ] [[Obsidian 插件：smart-connections 用 AI 查询本地库]]
#### 阅读和PDF
- [ ] [[Obsidian 插件：Weread 让 Obsidian 和你的微信阅读联动]]
- [ ] [[Obsidian 插件：BookNote 让你在 Obsidian 中阅读标注 PDF]]
#### 标签类
- [x] [[Obsidian 插件：Tag Wrangler 增强标签的管理体验]]
#### 白板（canvas）和脑图
- [x] [[Obsidian 插件：Canvas Presentation 实现 Canvas 画布演示效果]]
- [x] [[Obsidian 插件：Optimize Canvas Connections 优化 Canvas 中的连接线]]
- [x] [[Obsidian 插件：Obsidian markmind 绘制思维导图、大纲和 PDF 文件标注工具]]
#### 窗口&视图模式
- [x] [[Obsidian 插件：Workspaces Plus 快速管理不同工作区不同布局对应不同工作流]]
- [ ] [[Obsidian 插件：Force note view mode 自定义每个笔记的视图]]
- [ ] [[Obsidian 插件：Focus Mode 增加专注模式让你聚焦书写]]
- [ ] [[Obsidian 插件：Easy toggle sidebars 便捷的控制侧边栏]]
- [x] [[Opener 插件默认在新标签页打开笔记]]
#### Property&Front-matterpsp
ace
- [ ] [[Obsidian 插件：Metaedit 不可多得的 YAML 管理器]] #困难
#### 自动化&效率
- [ ] [[Obsidian 插件：Templater 可以替代核心模板插件的效率神器]]
- [x] [[Obsidian 插件：QuickAdd 自动化操作的编辑器]]
- [x] [[Obsidian 插件：Dataview]]
- [x] [[Obsidian 插件：Various Complements 强大自动补全快捷输入工具]]
- [x] [[Obsidian 插件：Completr 自动联想补全插件]]
#### 文件管理/文件夹管理
- [x] [[Obsidian 插件：Recent Files 添加最近浏览过的文件列表]]
#### 学习&语言
- [x] [[Obsidian 插件：Language Learner 事半功倍学习英文单词]]
- [ ] [[外语书阅读工作流]]
#### 标签页管理
- [ ] [[Obsidian 插件：Close Similar Tabs 防止打开重复的笔记]]
#### 插入预览
- [x] [[Obsidian 插件：surfing -- 让 Obsidian 成为网络浏览器]]
- [x] [[Obsidian 插件：Convert url to preview (iframe) 将 URL 转化为嵌入的页面]]
- [x] [[Obsidian 插件：Custom Frames 集成更多网页应用到笔记中]]
### 手机安装插件
- [x]  [[Obsidian 插件：Various Complements 强大自动补全快捷输入工具]] ---

---
## 资料收集

```dataview
table source,date
from ""   
where contains(tags, "Obsidian")
sort file.ctime
```
