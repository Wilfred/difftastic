# use strict;
# use warnings;
use feature 'signatures';

sub simple {
  # my @args = @_;
  print "this is simple\n";
  my $variable = 1;

  print $variable;
  return;
}

print "hello world!\n";

my $hello = "hello";

print $hello;

simple;
simple();
simple('hola');

sub foo : Expose ($left, $right) {
  return $left + $right;
}

foo();

