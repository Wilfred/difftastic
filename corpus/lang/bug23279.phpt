<?php
ob_start();
set_exception_handler('redirect_on_error');
echo "Hello World\n";
throw new Exception;

function redirect_on_error($e) {
    ob_end_clean();
    echo "Goodbye Cruel World\n";
}
?>
