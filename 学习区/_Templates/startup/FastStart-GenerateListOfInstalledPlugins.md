---
created: 2023-11-22T20:29
updated: 2023-11-24T16:57
---
<% Object.values(app.plugins.manifests).map(p=>p.id).sort((a,b)=>a.localeCompare(b)).join('\n') %>