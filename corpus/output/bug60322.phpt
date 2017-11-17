<?php
ob_start();
while(@ob_end_clean());
var_dump(ob_get_clean());
