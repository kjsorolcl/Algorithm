const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
 
let inputs = [];
 
rl.on('line', (line) => {
    inputs = line.split(' ').map((el) => Number(el));
}).on('close', ()=> {
    let hour = inputs[0];
    if(hour == 0) hour = 24;
    let min = inputs[1];
    let min2 = hour * 60 + min - 45;
    
    let resultHour = parseInt(min2 / 60);
    let resultMin = min2 % 60;
    
    console.log(''+resultHour+' '+resultMin);
    
    process.exit();
});
