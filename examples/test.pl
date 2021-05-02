use strict 'refs';
use warnings;
use Data::Dumper;

my $string = 'aloha';
my @array = ("singleone", "senco");

print Dumper \@array;

my $hash = {
  'cat' => 'meow',
  "cow" => 'moo',
  dog => 'woof',
};

print Dumper $hash;
