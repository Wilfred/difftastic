use strict;
use warnings;
use Data::Dumper;

foreach my $value (qw( cat dog bird flight superman )) {
  print $value . "\n";
}

my $setting = {
  open => 1,
  close => 2,
  run => 3,
  awesome => 'yes',
};
my %final;
foreach my $key (woof()) {
  $final{IRONMAN}{$key} = $setting->{$key};

  print Dumper \%final;
  
}

sub woof {}