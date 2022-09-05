use strict;
use warnings;
use Data::Dumper;

sub hello {
  return 'hello';
}

# single declaration and initialization
my $a;

my @array;

my $number = 3010; # number

my $negative_number = -18;

my $floating_number = 5.5;

my $floating_negative_number = -7.455;

my $string = 'hello'; # single quoted string
my $empty_string = '';

my $double_quoted_string = "meow";

my $scientific_notation = 16.12E14;

my $hexa_decimal = 0xffff;

my $octal = 0577;


my @array2 = ('m\'eow', 'woof', 'burp',);

my @number_array = ( 1, 2, 3, 8 );

my @mixed_array = ($octal, 4, 'dog', 4 * 7);

print "mixed". Dumper(\@mixed_array);

my @empty_array = ();


# multi declarations and initialization

# my ($b, $c) = ();

my $array_ref = ['string', 123, "double string"];

my $hash = {
  'cat' => 'meow',
  "cow" => 'moo',
  dog => 'woof',
};

my %hash = (
  believer => 'i am',
  at => 'important things',
  first_things => 1,
  seconds_things => 2,
);

my $hash2 = {
  name => 'dog',
  sound => 'woof',
};

$hash->{ wag } = 'tail';
$hash->{inner}->{prop1} = 'secret';
$hash->{inner}->{prop2}->[0.3] = 'secret2';

# type glob
local *something = \$hash;
*somethingelse = *something;
print Dumper *somethingelse;


print Dumper $hash;


my @array5 = (1, 3, 6);

$array5[5] = 23;

my $prev_test = 10;
$array5[$prev_test - 1]->{name} = 1;


print Dumper(\@array5);
