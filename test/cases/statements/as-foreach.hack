/**
 * This test captures that without parenthesis, you might expect this test's code to
 * parse like this
 *
 *     foreach (($array as vec[]) as $item) {}
 *
 * but ends up parsing like this (which makes it a parse error).
 *
 *     foreach ($array as (vec[] as $item)) {}
 */

foreach (($array as vec[]) as $item) {}

// Our expectation test for the code below intentionally includes an ERROR.
foreach ($array as vec[] as $item) {}
