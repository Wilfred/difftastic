use feature 'switch';
use v5.14;
use Try::Tiny;


try {
  my $a = 1;
}
catch {
  print "catch block";
};