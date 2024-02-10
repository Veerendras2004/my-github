


// syncronous or blocking 
// line by line executionAsyncId

// asyncronous or non-blcking
// line byline by execution is not guaranteed
// call back will fire

const fs = require("fs");
let text = fs.readFile("mytext", "utf-8", (err,data)=>{
    console.log(data)
})
console.log("This is a message")