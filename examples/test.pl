use strict 'refs';
use warnings;
use Data::Dumper;


my $class = 1;
my $self = 'sdfd';
my @array = (1, 2, 5);

bless({ \$self }, $class);

# print Dumper($self);

# my $sub = sub {
#   my $a;
# };

# sub hello {};

# sub meow {
#   ${hello()};
# }

