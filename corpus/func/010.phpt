==========
function with many parameters
==========

<?php

// the stack size + some random constant
$boundary = 16*1024-16;
$limit    = $boundary+42;


function test($a,$b)
{
	var_dump($a === $b);
	test2($a,$b);
}

function test2($a, $b)
{
	if ($a !== $b) {
		var_dump("something went wrong: $a !== $b");
	}
}


// generate the function
$str = "<?php\nfunction x(";

for($i=0; $i < $limit; ++$i) {
	$str .= '$v'.dechex($i).($i===($limit-1) ? '' : ',');
}

$str .= ') {
	test($v42, \'42\');
	test(\'4000\', $v4000);
	test2($v300, \'300\');
	test($v0, \'0\'); // first
	test($v'.dechex($limit-1).", '".dechex($limit-1).'\'); // last
	test($v'.dechex($boundary).", '".dechex($boundary).'\'); //boundary
	test($v'.dechex($boundary+1).", '".dechex($boundary+1).'\'); //boundary+1
	test($v'.dechex($boundary-1).", '".dechex($boundary-1).'\'); //boundary-1
}';

// generate the function call
$str .= "\n\nx(";

for($i=0; $i< $limit; ++$i) {
	$str .= "'".dechex($i)."'".($i===($limit-1) ? '' : ',');
}

$str .= ");\n";

$filename = dirname(__FILE__).'/010-file.php';
file_put_contents(dirname(__FILE__).'/010-file.php', $str);
unset($str);

include($filename);

echo "Done\n";

?>
--CLEAN--
<?php
@unlink(dirname(__FILE__).'/010-file.php');
?>

---

(program
  (comment)
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (binary_expression
        (binary_expression
          (integer)
          (integer))
        (integer))))
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (binary_expression
        (variable_name
          (name))
        (integer))))
  (function_definition
    (name)
    (formal_parameters
      (simple_parameter
        (variable_name
          (name)))
      (simple_parameter
        (variable_name
          (name))))
    (compound_statement
      (expression_statement
        (function_call_expression
          (qualified_name
            (name))
          (arguments
            (binary_expression
              (variable_name
                (name))
              (variable_name
                (name))))))
      (expression_statement
        (function_call_expression
          (qualified_name
            (name))
          (arguments
            (variable_name
              (name))
            (variable_name
              (name)))))))
  (function_definition
    (name)
    (formal_parameters
      (simple_parameter
        (variable_name
          (name)))
      (simple_parameter
        (variable_name
          (name))))
    (compound_statement
      (if_statement
        (binary_expression
          (variable_name
            (name))
          (variable_name
            (name)))
        (compound_statement
          (expression_statement
            (function_call_expression
              (qualified_name
                (name))
              (arguments
                (string))))))))
  (comment)
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (string)))
  (for_statement
    (assignment_expression
      (variable_name
        (name))
      (integer))
    (binary_expression
      (variable_name
        (name))
      (variable_name
        (name)))
    (update_expression
      (variable_name
        (name)))
    (compound_statement
      (expression_statement
        (binary_expression
          (binary_expression
            (augmented_assignment_expression
              (variable_name
                (name))
              (string))
            (function_call_expression
              (qualified_name
                (name))
              (arguments
                (variable_name
                  (name)))))
          (parenthesized_expression
            (binary_expression
              (variable_name
                (name))
              (conditional_expression
                (parenthesized_expression
                  (binary_expression
                    (variable_name
                      (name))
                    (integer)))
                (string)
                (string))))))))
  (expression_statement
    (binary_expression
      (binary_expression
        (binary_expression
          (binary_expression
            (binary_expression
              (binary_expression
                (binary_expression
                  (binary_expression
                    (binary_expression
                      (binary_expression
                        (binary_expression
                          (binary_expression
                            (binary_expression
                              (binary_expression
                                (binary_expression
                                  (binary_expression
                                    (augmented_assignment_expression
                                      (variable_name
                                        (name))
                                      (string))
                                    (function_call_expression
                                      (qualified_name
                                        (name))
                                      (arguments
                                        (binary_expression
                                          (variable_name
                                            (name))
                                          (integer)))))
                                  (string))
                                (function_call_expression
                                  (qualified_name
                                    (name))
                                  (arguments
                                    (binary_expression
                                      (variable_name
                                        (name))
                                      (integer)))))
                              (string))
                            (function_call_expression
                              (qualified_name
                                (name))
                              (arguments
                                (variable_name
                                  (name)))))
                          (string))
                        (function_call_expression
                          (qualified_name
                            (name))
                          (arguments
                            (variable_name
                              (name)))))
                      (string))
                    (function_call_expression
                      (qualified_name
                        (name))
                      (arguments
                        (binary_expression
                          (variable_name
                            (name))
                          (integer)))))
                  (string))
                (function_call_expression
                  (qualified_name
                    (name))
                  (arguments
                    (binary_expression
                      (variable_name
                        (name))
                      (integer)))))
              (string))
            (function_call_expression
              (qualified_name
                (name))
              (arguments
                (binary_expression
                  (variable_name
                    (name))
                  (integer)))))
          (string))
        (function_call_expression
          (qualified_name
            (name))
          (arguments
            (binary_expression
              (variable_name
                (name))
              (integer)))))
      (string)))
  (comment)
  (expression_statement
    (augmented_assignment_expression
      (variable_name
        (name))
      (string)))
  (for_statement
    (assignment_expression
      (variable_name
        (name))
      (integer))
    (binary_expression
      (variable_name
        (name))
      (variable_name
        (name)))
    (update_expression
      (variable_name
        (name)))
    (compound_statement
      (expression_statement
        (binary_expression
          (binary_expression
            (binary_expression
              (augmented_assignment_expression
                (variable_name
                  (name))
                (string))
              (function_call_expression
                (qualified_name
                  (name))
                (arguments
                  (variable_name
                    (name)))))
            (string))
          (parenthesized_expression
            (binary_expression
              (variable_name
                (name))
              (conditional_expression
                (parenthesized_expression
                  (binary_expression
                    (variable_name
                      (name))
                    (integer)))
                (string)
                (string))))))))
  (expression_statement
    (augmented_assignment_expression
      (variable_name
        (name))
      (string)))
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (binary_expression
        (function_call_expression
          (qualified_name
            (name))
          (arguments
            (qualified_name
              (name))))
        (string))))
  (expression_statement
    (function_call_expression
      (qualified_name
        (name))
      (arguments
        (binary_expression
          (function_call_expression
            (qualified_name
              (name))
            (arguments
              (qualified_name
                (name))))
          (string))
        (variable_name
          (name)))))
  (unset_statement
    (variable_name
      (name)))
  (expression_statement
    (include_expression
      (parenthesized_expression
        (variable_name
          (name)))))
  (echo_statement
    (string))
  (text_interpolation)
  (expression_statement
    (unary_op_expression
      (function_call_expression
        (qualified_name
          (name))
        (arguments
          (binary_expression
            (function_call_expression
              (qualified_name
                (name))
              (arguments
                (qualified_name
                  (name))))
            (string)))))))
