---
defines-react-components: true
created: 2023-11-11T20:12
updated: 2023-11-13T16:33
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