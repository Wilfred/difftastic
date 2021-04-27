use strict 'refs';
use warnings;
use Data::Dumper;


my $class = 1;
my $self = [];
my @array = (1, 2, 5);

bless({ }, $class);

print Dumper($self);

my $a = (1, 2, 3);

