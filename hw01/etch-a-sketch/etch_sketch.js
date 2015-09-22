#! usr/bin/env node

var b = require("bonescript");
var port  = '/dev/i2c-2';
var pinA1 = 'P8_7';
	pinB1 = 'P8_8';
	pinA2 = 'P8_12';
	pinB2 = 'P8_14';

var util = require('util');

function detach() {
	b.detachInterrupt(pinA1);
	b.detachInterrupt(pinB1);
	console.log('Interrupt detached!');
}

var xMax = 8;
	yMax = 8;

var grid = new Array(yMax);
var x = 0, y =0;

var blank = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];



}
