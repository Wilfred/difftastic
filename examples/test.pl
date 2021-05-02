use strict 'refs';
use warnings;
use Data::Dumper;

my $args = {
  MESSAGETYPE => 'heehaw',
  MESSAGESUBTYPE => 'meow',
};
my $dbh;

# my $result = GetSalesforceTemplateInfo($dbh)->{$args->{MESSAGETYPE}}->{$args->{MESSAGESUBTYPE}};

# my $heelsdf = (2*3)->{DSF};

# print Dumper $heelsdf;

my $array = [3, 324, 3];

print Dumper %{$args};