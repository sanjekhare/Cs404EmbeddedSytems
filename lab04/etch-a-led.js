#!/usr/bin/env node

var b = require('bonescript');
var port = '/dev/i2c-2'
var matrix = 0x70;
var time = 1000;

var smile =
[0x00, 0x3c, 0x00,0x42, 0x28, 0x89, 0x04, 0x85,
0x04, 0x85, 0x28,  0x89, 0x00, 0x42, 0x00, 0x3c];

var frown =
[0x3c, 0x00, 0x42,0x00, 0x85, 0x20, 0x89, 0x00,
0x89, 0x00, 0x85,0x20, 0x42, 0x00, 0x3c, 0x00];

var neutral =
[0x3c, 0x3c, 0x42,0x42, 0xa9, 0xa9, 0x89, 0x89,
0x89, 0x89, 0xa9,0xa9, 0x42, 0x42, 0x3c, 0x3c];

var blank = [0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];

var port = '/dev/i2c-2'
var matrix = 0x70;
b.i2cOpen(port, matrix);
b.i2cWriteByte(port,0x21);
b.i2cWriteByte(port,0x81);
b.i2cWriteByte(port,0xe7); 


doFrown();
function doFrown() {
b.i2cWriteBytes(port,0x00, frown);
}



function doNeutral() {
b.i2cWriteBytes(port, 0x00, neutral);
}


function doSmile() {
b.i2cWriteBytes(port, 0x00, smile);
}


var fade = 0xef;
function doFadeDown() {
b.i2cWriteByte(port, fade);
    fade--;
    if(fade >= 0xe0) {
    setTimeout(doFadeDown, time/10);
    } else {
    setTimeout(doFadeUp);
    }
}

function doFadeUp() {
b.i2cWriteByte(port, fade);
fade++;
if(fade <= 0xef) {
setTimeout(doFadeUp, time/10);
    }
}

setInterval(doNeutral, 3*time);
setInterval(doSmile, 4*time);
setInterval(doFadeDown, 5*time);
