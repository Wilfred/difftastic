use strict 'refs';
use warnings;
use if $] < 5.008, "utf8";
use if WANT_WARNINGS, warnings => qw(all);

use constant PI    => 4 * atan2(1, 1);
use constant DEBUG , 0; # comma (,) is also used instead of '=>'

print "Pi equals ", PI, "...\n";

use constant {
  SEC   => 0, # foo
  MIN   => 1,
  HOUR  => 2,
  MDAY  => 3,
  MON   => 4,
  YEAR  => 5,
  WDAY  => 6,
  YDAY  => 7,
  ISDST => 10,
};

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

use constant WEEKDAYS => qw(
  Sunday Monday Tuesday Wednesday Thursday Friday Saturday
);

$f =~ s/foo/abc/g;
