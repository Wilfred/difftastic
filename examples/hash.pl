# hash needs its own sweet example file
use strict;
use warnings;
use Data::Dumper;

# my $simple = SimpleModule->new();


# my $event = {
#   user_id => Data::UUID->new->Something($dbh, {}),
# };


# my $output = {
#   some_property => BaseModule::AtSomeWhere::GetSomething(121, {
#       KEY => $var->{there},
#   }),
# };

my $ter = {
  first => 'something here',
  1 == 2 ? (second => 1) : (third => 'ternary false'),
};

# print Dumper $ter;
