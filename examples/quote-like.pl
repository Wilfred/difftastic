use Data::Dumper;

my $ls_args = '-a';
my $ls_command = qx /ls $ls_args/;


# print Dumper $ls_command;

my @array = qw / s6df 32 DF /;

# print Dumper \@array;

my $string = 'a simple string';

$string =~ m/Simple/is;

# Printing the String
print "Before: $`\n";
print "Matched: $&\n";
print "After: $'\n";


my $rex = qr/[my.STRING]is/;

print "rex..\n" . $rex;

