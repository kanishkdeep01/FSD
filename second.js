const mongose = require("mongose");

mongose.connect("mongodb://localhost:27017/")
 .then(() => console.log("Connected"))
 .catch(err => console.log(err));



 const User = mongose.model("test",{name: String});

 const u = new User ({ name: "Sourav"});
 u.save().then(() =>{
    console.log("User Saved");
    mongose.disconnect();
 });