const fs = require("fs");
let text = fs.readFileSync("mytext", "utf-8");
text = text.replace("studying","studied");
console.log("The content of file is");
console.log(text);


console.log('creating new file')
fs.writeFileSync("vikky.txt",text)