---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/4
state: true
dtype: 插件
title: AnyBlock 插件系列教程之 --4_ 更多处理器（装饰处理器）
date: 2023-11-12 21:41:24
tags:
  - 400兴趣类/电脑软件/Obsidian/Plugin
host: pkmer.cn
source: Pkmer
type: 插件
banner:
  - /img/pkmer-avatar.png
banner_icon: 🔖
time: ""
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

前三章介绍了各种选择器，主要介绍的是列表文本转树形结构的图形

## 块名

**这个相当有用和高频**，所以我给了个语法糖，用 `#` 开头就行

给块一个名字，并且可以自动识别修饰的块的类型。可以很轻易地：

*   给表格添加 | 居中的表格标题
*   给代码添加 | 文件名

#### 表格标题

[2table|# 表格标题]

*   1| 2
*   3| 4

#### 代码标题

按道理这里的文件名应该和代码块同色，不同色的话自己先在 css 文件里调一下。

找 `--pre-background-color` ，在 css 文件的前五行，改个颜色值就行。

（尝试过用 js 获取代码块颜色再调的，但失败了）

[#main.cpp]

```
#include <stdio.h>
 
int main()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");
 
    return 0;
}


```

#### 其他标题

[# 引用块]

[# 列表块标题]

*   1
    *   2
        *   3
    *   2

## 折叠

这个是我在写 anyblock 之前，使用 dataviewjs 强行模拟 list2table 效果的代码，内容比较长所以拿过来演示

[fold]

```
const keyword = "%"+"toTable" // 不能合并
const files = app.vault.getMarkdownFiles()


const lines = files
	.filter((file) => {  // 本篇笔记
		return file.path == dv.current().file.path
	})
	.map(async (file) => {  // 转列表
		const content = await app.vault.cachedRead(file)  
		const lines = content.split("\n")
		return lines
	})
	
Promise.all(lines).then(linesTmp => {
	let lines = linesTmp.flat()

	// 先搜索关键词
	let index = 0
	for(let i=0; i<lines.length; i++){
		if(lines[i].contains(keyword)){
			index = i
			break
		}
	}
	
	// 获取参数
	const args = lines[index].replace(keyword, "").replace(/^|/, "").split("|")
	

	// 先不考虑异常缩进了
	let levelArr = []
	let contentArr = []
	for(let i=index+1; i<lines.length; i++){
		if(/^\s*?-\s(.*?)/.test(lines[i])){
			contentArr.push(lines[i].replace(/^\s*?-\s/, ""))
			levelArr.push(lines[i].replace(/-\s(.*?)$/, "").length/2)
		}
		else{
			break
		}
	}

	// 再弄成正确的层次关系，暂时先只考虑三层
	let tableData = []
	let lastArr = []
	let lastLevel = 0
	for(let i=0; i<levelArr.length; i++){
		if(levelArr[i]==0){
			if(lastArr.length!=0) {// 是否不为第一个数据
				tableData.push(lastArr)
				lastArr = []
			}
			lastLevel = 0
			lastArr.push(contentArr[i])
		}
		else if(levelArr[i]==1){
			if (lastLevel<1){ // 是否新起一行
				lastArr.push(contentArr[i])
				lastLevel = 1
			}
			else{
				tableData.push(lastArr)
				lastArr = []
				lastLevel = 1
				lastArr.push("^^")
				lastArr.push(contentArr[i])
			}
		}
		else if(levelArr[i]==2){
			if (lastLevel<2){ // 是否新起一行
				lastArr.push(contentArr[i])
				lastLevel = 2
			}
			else{
				tableData.push(lastArr)
				lastArr = []
				lastLevel = 2
				lastArr.push("^^")
				lastArr.push("^^")
				lastArr.push(contentArr[i])
			}
		}
	}
	tableData.push(lastArr)
	lastArr = []
	
	console.log(tableData)
	dv.table(args, tableData)
})  




```

## 溢出折叠

像很多博客都有代码块的溢出折叠。AnyBlock 也具备这种处理器，无论是代码块还是其他东西。

**用笔记记录长代码块时非常有用**

（@todo 这里没匹配亮色模式，而且不一定和用户的的代码块背景相匹配）

[overfold]

```
const keyword = "%"+"toTable" // 不能合并
const files = app.vault.getMarkdownFiles()


const lines = files
	.filter((file) => {  // 本篇笔记
		return file.path == dv.current().file.path
	})
	.map(async (file) => {  // 转列表
		const content = await app.vault.cachedRead(file)  
		const lines = content.split("\n")
		return lines
	})
	
Promise.all(lines).then(linesTmp => {
	let lines = linesTmp.flat()

	// 先搜索关键词
	let index = 0
	for(let i=0; i<lines.length; i++){
		if(lines[i].contains(keyword)){
			index = i
			break
		}
	}
	
	// 获取参数
	const args = lines[index].replace(keyword, "").replace(/^|/, "").split("|")
	

	// 先不考虑异常缩进了
	let levelArr = []
	let contentArr = []
	for(let i=index+1; i<lines.length; i++){
		if(/^\s*?-\s(.*?)/.test(lines[i])){
			contentArr.push(lines[i].replace(/^\s*?-\s/, ""))
			levelArr.push(lines[i].replace(/-\s(.*?)$/, "").length/2)
		}
		else{
			break
		}
	}

	// 再弄成正确的层次关系，暂时先只考虑三层
	let tableData = []
	let lastArr = []
	let lastLevel = 0
	for(let i=0; i<levelArr.length; i++){
		if(levelArr[i]==0){
			if(lastArr.length!=0) {// 是否不为第一个数据
				tableData.push(lastArr)
				lastArr = []
			}
			lastLevel = 0
			lastArr.push(contentArr[i])
		}
		else if(levelArr[i]==1){
			if (lastLevel<1){ // 是否新起一行
				lastArr.push(contentArr[i])
				lastLevel = 1
			}
			else{
				tableData.push(lastArr)
				lastArr = []
				lastLevel = 1
				lastArr.push("^^")
				lastArr.push(contentArr[i])
			}
		}
		else if(levelArr[i]==2){
			if (lastLevel<2){ // 是否新起一行
				lastArr.push(contentArr[i])
				lastLevel = 2
			}
			else{
				tableData.push(lastArr)
				lastArr = []
				lastLevel = 2
				lastArr.push("^^")
				lastArr.push("^^")
				lastArr.push(contentArr[i])
			}
		}
	}
	tableData.push(lastArr)
	lastArr = []
	
	console.log(tableData)
	dv.table(args, tableData)
})  


```

[list2table|overfold]

*   < 大类型 | 解析方法 | 解析方法 zh | 渲染方法 | 渲染方法 zh | 可转 md/html
*   tree
    *   ul-list| ul 树 （一叉多层树）
        *   2ut/2mdut | 转表格（规范） | md/html
    *   li-list| li 树 （一叉多层树）
        *   2lt/mdlt | 转列表格 | html
    *   ab-tree | 二层树 也叫 ” 消除最高级 ” （一叉二层树）
        *   2timeline | 转时间线 | mermaid
        *   2tab | 转标签栏 | html
        *   2chat | 转对话
    *   tree-list | 树列表 （多叉多层树）
        *   2table/2mdtable | 转树表格 | html
        *   2mermaid | 转流程图 | mermaid/html
        *   2mindmap | 转思维导图 | html
        *   2tree | 长得像树的树状图 | html
        *   2xuri | 旭日图 | html
        *   2brace | 括弧分类图 | html
*   other
    *   title | 标题级（语法糖）
        *   2list+list2xxx | (组合使用，下面提供了几种语法糖)
        *   2tab
        *   2table
        *   2mindmap
    *   code | 一定代码
        *   2doctable | 转表格（文档生成） | html
        *   json | 这个不能转树，只能说转可折叠渲染
    *   common | 通用
        *   text | 纯文本 | md
        *   md | md 渲染 | md
    *   render| 渲染 （理论上为 ” 渲染修饰器 ” 但该功能没做）
        *   flod | (折叠类) 可折叠 | md+
        *   hide | (折叠类) 默认折叠 | md+
        *   heimu| (折叠类) 黑幕遮挡 | html
        *   limit()/part() | (折叠类) 限高折叠 | html
        *   scroll()| (折叠类) 限高滚动 | html
        *   title()| 增加块标题（代码块可能会很常用）

## 滚动

默认是超出 460px 滚动，该处理器也可以接受参数，`scroll(超出多少变为滚动)`，参数不需要加 `px`

[scroll]

```
const keyword = "%"+"toTable" // 不能合并
const files = app.vault.getMarkdownFiles()


const lines = files
	.filter((file) => {  // 本篇笔记
		return file.path == dv.current().file.path
	})
	.map(async (file) => {  // 转列表
		const content = await app.vault.cachedRead(file)  
		const lines = content.split("\n")
		return lines
	})
	
Promise.all(lines).then(linesTmp => {
	let lines = linesTmp.flat()

	// 先搜索关键词
	let index = 0
	for(let i=0; i<lines.length; i++){
		if(lines[i].contains(keyword)){
			index = i
			break
		}
	}
	
	// 获取参数
	const args = lines[index].replace(keyword, "").replace(/^|/, "").split("|")
	

	// 先不考虑异常缩进了
	let levelArr = []
	let contentArr = []
	for(let i=index+1; i<lines.length; i++){
		if(/^\s*?-\s(.*?)/.test(lines[i])){
			contentArr.push(lines[i].replace(/^\s*?-\s/, ""))
			levelArr.push(lines[i].replace(/-\s(.*?)$/, "").length/2)
		}
		else{
			break
		}
	}

	// 再弄成正确的层次关系，暂时先只考虑三层
	let tableData = []
	let lastArr = []
	let lastLevel = 0
	for(let i=0; i<levelArr.length; i++){
		if(levelArr[i]==0){
			if(lastArr.length!=0) {// 是否不为第一个数据
				tableData.push(lastArr)
				lastArr = []
			}
			lastLevel = 0
			lastArr.push(contentArr[i])
		}
		else if(levelArr[i]==1){
			if (lastLevel<1){ // 是否新起一行
				lastArr.push(contentArr[i])
				lastLevel = 1
			}
			else{
				tableData.push(lastArr)
				lastArr = []
				lastLevel = 1
				lastArr.push("^^")
				lastArr.push(contentArr[i])
			}
		}
		else if(levelArr[i]==2){
			if (lastLevel<2){ // 是否新起一行
				lastArr.push(contentArr[i])
				lastLevel = 2
			}
			else{
				tableData.push(lastArr)
				lastArr = []
				lastLevel = 2
				lastArr.push("^^")
				lastArr.push("^^")
				lastArr.push(contentArr[i])
			}
		}
	}
	tableData.push(lastArr)
	lastArr = []
	
	console.log(tableData)
	dv.table(args, tableData)
})  




```

## 黑幕

和萌娘百科的黑幕效果类似

[X|addClass(ab-deco-heimu)]

这是一段不能被直接看到的内容  
…  
…  
（你看到了？你知道太多了！ [猫猫刀口舔血. jpg]）

## 增加 class

`addClass` (将当前块增加一个类名)、`addDiv` (增加一个父元素，并给父元素增加一个类名)

这个可以用来让块增添一个自定义样式（像 ad 插件那样），可供会 CSS 的用户扩展

推荐几个处理器配置就知道怎么用。

id 和 name 都是随便填，下面给个演示

[2table]

*   注册器匹配名（可以是中文名）| 注册器替换为
*   引用 | add([!quote])|quote
*   折叠 | add([!note]-|qutoe)
*   `/导图(.*?)/`| rootlist(%1)|mindmap 其中，`%n` 表示将正则中的第 n 个匹配项替换到该位置 例如上面的导图例子中，`导图(主题名)` 就会变成 `rootlist(主题名)|mindmap`

功能比较简单，和用代码来增加处理器比起来功能不足。但通过组合注册器，依然能够做出不错的自定义效果

* * *

3 - 使用示例 - 全局选择器 4 - 使用示例 - 更多处理器 any-block10-Obsidian/Obsidian 社区插件 / any-block/any-block