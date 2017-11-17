<?php 

error_reporting(0);

$message = "echo \"hey\n\";";

for ($i=0; $i<10; $i++) {
  eval($message);
  echo $i."\n";
}
