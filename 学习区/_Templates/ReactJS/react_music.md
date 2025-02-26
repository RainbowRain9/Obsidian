---
defines-react-components: true
created: 2023-11-13T23:19
updated: 2023-11-15T01:42
---

```jsx:component:Musicbar
const musicid = props.src.trim(" ");
const musicsrc='https://music.163.com/outchain/player?type=0&id='+musicid+'&auto=0&height=240';
return (
	<>
		<iframe
      title="iframe"
      src={musicsrc}
      style={{ width: 270, border: 0, height: 240 }}
      sandbox="allow-same-origin allow-scripts allow-popups allow-forms"
      scrolling="no"
    ></iframe>
	</>
)
```



```jsx::Musicbar
6894168416
```