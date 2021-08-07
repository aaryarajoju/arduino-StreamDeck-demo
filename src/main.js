
// importing robot.js library for automation
const robot = require("robotjs");

// importing the library for executing shell commands
const exec = require('child_process').exec;

// importing node-serialport for serial communication
const SerialPort = require('serialport')
const Readline = require('@serialport/parser-readline')
const port = new SerialPort('COM3')
const parser = port.pipe(new Readline({ delimiter: '\r\n' }))

let count = 0;


// function to read the serial port
parser.on('data', (command) => {
    let action = Number(command);
    doSomething(action);
})


// function to execute the actions
function doSomething(action) {

    count++;

    if (count % 2 == 0) {
        return;
    }

    // checking the command and executing the corresponding action
    switch (action) {
        case 0:
            console.log("connection started");
            break;

        case 1:
            console.log("locking windows");
            robot.keyTap("l", "command");
            break;
    
        case 2:
            console.log("mute/unmute the volume");
            robot.keyTap("audio_mute");
            break;

        case 3:
            console.log("mute/unmute audio in zoom");
            robot.keyTap("a", "alt");
            break;

        case 4:
            console.log("previous song");
            robot.keyTap("audio_prev");
            break;

        case 5:
            console.log("turn on/off video in zoom");
            robot.keyTap("v", "alt");
            break;

        case 6:
            console.log("play/pause");
            robot.keyTap("audio_play");
            break;
            
        case 7:
            console.log("open chrome");
            exec('start chrome');
            break;
        
        case 8:
            console.log("next song");
            robot.keyTap("audio_next");
            break;
        
        case 9:
            console.log("open vs code");
            exec('code');
            break;

        case 10:
            console.log("taking a screenshot");
            robot.keyTap("printscreen", "command");
            break;
        
        default:
            console.log("ERROR: NO ACTION FOUND");
            break;
    }
}

