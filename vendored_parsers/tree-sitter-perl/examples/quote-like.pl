use Data::Dumper;
use strict;
use warnings;

my $ls_args = '-a';
my $ls_command = qx /ls $ls_args/;


# print Dumper $ls_command;

my @array = qw / s6df 32 DF /;

# print Dumper \@array;

my $string = 'a simple string';
$string = 'string with # in it';
$string = 'string with escape \' sequence';
$string =~ m/Simple/is;
my $baa = 'bbb';
$_ = "AAA bbb AAA";
print "Found bbb\n" if m/$baa/;

# Printing the String
print "Before: $`\n";
print "Matched: $&\n";
print "After: $'\n";


my $rex = qr/my.STRING/is;

print "rex..\n" . $rex;

my $subs = 'my here string';
$subs =~ s/my.STRING/foo/is;

print "\n substitute is.. \n" . $subs;

my $trans = "hello";
$trans =~ tr/h-l/H-L/c;

print "\n tr is.. \n" . $trans;