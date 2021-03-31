# use strict;
# use warnings;
use feature 'signatures';

sub simple {
  # my @args = @_;
  print "this is simple\n";
  # return;
}

print "hello world!\n";

simple;
simple();
simple('hola');

sub foo : Expose ($left, $right) {
  return $left + $right;
}

