==========
Test sapi_windows_vt100_support on older Windows versions with redirected STDIN/STDOUT
==========

<?php
require dirname(__FILE__).'/sapi_windows_vt100_support.inc';
testToStdOut();
?>
--EXPECTF--
STDIN (constant):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
STDIN (fopen):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
STDIN (php://fd/0):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
STDOUT (constant):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
STDOUT (fopen):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
STDOUT (php://fd/1):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
STDERR (constant):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(true)
- current value  : bool(false)
STDERR (fopen):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(true)
- current value  : bool(false)
STDERR (php://fd/2):
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(true)
- current value  : bool(false)
Not a stream:
- current value  : 
Warning: sapi_windows_vt100_support() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
- enabling VT100 : 
Warning: sapi_windows_vt100_support() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
- disabling VT100: 
Warning: sapi_windows_vt100_support() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
Invalid stream (php://temp):
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- enabling VT100 : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- disabling VT100: 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
Invalid stream (php://input):
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- enabling VT100 : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- disabling VT100: 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
Invalid stream (php://memory):
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- enabling VT100 : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- disabling VT100: 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
- current value  : 
Warning: sapi_windows_vt100_support() was not able to analyze the specified stream in %s on line %d
bool(false)
File stream:
- current value  : bool(false)
- enabling VT100 : bool(false)
- current value  : bool(false)
- disabling VT100: bool(false)
- current value  : bool(false)
