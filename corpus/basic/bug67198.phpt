==========
php://input is empty when enable_post_data_reading=Off
==========

<?php
require __DIR__."/../../sapi/cli/tests/php_cli_server.inc";

$code =
<<<'FL'
 if(!ini_get('enable_post_data_reading')){
  if($_SERVER['REQUEST_METHOD']=='POST'){
   exit(file_get_contents('php://input'));
  }
 }else{
  exit('Please SET php.ini: enable_post_data_reading = Off');
 }
FL;

$postdata = "PASS";

$opts = array('http' =>
    array(
        'method'  => 'POST',
        'header'  => 'Content-type: application/x-www-form-urlencoded',
        'content' => $postdata
    )
);

$context  = stream_context_create($opts);

php_cli_server_start("exit(file_get_contents('php://input'));", false, "-d enable_post_data_reading=Off");

var_dump(file_get_contents("http://" . PHP_CLI_SERVER_ADDRESS, false, $context));
var_dump(file_get_contents("http://" . PHP_CLI_SERVER_ADDRESS, false, $context));

---
