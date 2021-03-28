use Data::Dumper;

my $ls_args = '-a';
my $ls_command = qx /ls $ls_args/;


# print Dumper $ls_command;

my @array = qw / s6df 32 DF /;

# print Dumper \@array;

