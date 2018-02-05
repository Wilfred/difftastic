==========
General function test
==========

<?php

echo "Before function declaration...\n";

function print_something_multiple_times($something,$times)
{
  echo "----\nIn function, printing the string \"$something\" $times times\n";
  for ($i=0; $i<$times; $i++) {
    echo "$i) $something\n";
  }
  echo "Done with function...\n-----\n";
}

function some_other_function()
{
  echo "This is some other function, to ensure more than just one function works fine...\n";
}


echo "After function declaration...\n";

echo "Calling function for the first time...\n";
print_something_multiple_times("This works!",10);
echo "Returned from function call...\n";

echo "Calling the function for the second time...\n";
print_something_multiple_times("This like, really works and stuff...",3);
echo "Returned from function call...\n";

some_other_function();

?>

---

(program  (echo_statement (string)) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)) (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (variable_name (name))) (update_expression (variable_name (name))) (compound_statement (echo_statement (string)))) (echo_statement (string)))) (function_definition (name) (compound_statement (echo_statement (string)))) (echo_statement (string)) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (echo_statement (string)) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))
