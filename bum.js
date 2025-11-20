let fs = require('fs');

fs.open("message.txt", "w", function (error, fd) {
    if (error) {
        console.log('Error while opening');
}else {
    console.log("New FIle createdd");
}
});