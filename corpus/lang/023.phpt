PHP Regression Test

<?php 

include("023-1.inc");

$wedding_timestamp = mktime(20,0,0,8,31,1997);
$time_left=$wedding_timestamp-time();

if ($time_left>0) {
  $days = $time_left/(24*3600);
  $time_left -= $days*24*3600;
  $hours = $time_left/3600;
  $time_left -= $hours*3600;
  $minutes = $time_left/60;
  echo "Limor Ullmann is getting married on ".($wedding_date=date("l, F dS, Y",$wedding_timestamp)).",\nwhich is $days days, $hours hours and $minutes minutes from now.\n";
  echo "Her hashed wedding date is $wedding_date.\n";
} else {
  echo "Limor Ullmann is now Limor Baruch :I\n";
}
?>
