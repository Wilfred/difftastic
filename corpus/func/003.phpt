==========
General function test
==========

<?php

function a()
{
  echo "hey\n";
}

function b($i)
{
  echo "$i\n";
}


function c($i,$j)
{
  echo "Counting from $i to $j\n";
  for ($k=$i; $k<=$j; $k++) {
    echo "$k\n";
  }
}



a();
b("blah");
a();
b("blah","blah");
c(7,14);

a();


function factorial($n)
{
  if ($n==0 || $n==1) {
    return 1;
  } else {
    return factorial($n-1)*$n;
  }
}


function factorial2($start, $n)
{
  if ($n<=$start) {
    return $start;
  } else {
    return factorial2($start,$n-1)*$n;
  }
}


for ($k=0; $k<10; $k++) {
  for ($i=0; $i<=10; $i++) {
    $n=factorial($i);
    echo "factorial($i) = $n\n";
  }
}


echo "and now, from a function...\n";

function call_fact()
{
  echo "(it should break at 5...)\n";
  for ($i=0; $i<=10; $i++) {
    if ($i == 5) break;
    $n=factorial($i);
    echo "factorial($i) = $n\n";
  }
}

function return4() { return 4; }
function return7() { return 7; }

for ($k=0; $k<10; $k++) {
  call_fact();
}

echo "------\n";
$result = factorial(factorial(3));
echo "$result\n";

$result=factorial2(return4(),return7());
echo "$result\n";

function andi($i, $j)
{
	for ($k=$i ; $k<=$j ; $k++) {
		if ($k >5) continue;
		echo "$k\n";
	}
}

andi (3,10);

---

(program  (function_definition (name) (compound_statement (echo_statement (string)))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)) (for_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (update_expression (simple_variable (variable_name (name)))) (compound_statement (echo_statement (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (if_statement (binary_expression (binary_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (float))) (compound_statement (return_statement (float))) (else_clause (compound_statement (return_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (binary_expression (simple_variable (variable_name (name))) (float)))) (simple_variable (variable_name (name)))))))))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (compound_statement (return_statement (simple_variable (variable_name (name))))) (else_clause (compound_statement (return_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (float)))) (simple_variable (variable_name (name)))))))))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (echo_statement (string)))))) (echo_statement (string)) (function_definition (name) (compound_statement (echo_statement (string)) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (break_statement)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (echo_statement (string)))))) (function_definition (name) (compound_statement (return_statement (float)))) (function_definition (name) (compound_statement (return_statement (float)))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (float))))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments)) (function_call_expression (qualified_name (name)) (arguments)))))) (echo_statement (string)) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (for_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (update_expression (simple_variable (variable_name (name)))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (continue_statement)) (echo_statement (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float) (integer)))))
