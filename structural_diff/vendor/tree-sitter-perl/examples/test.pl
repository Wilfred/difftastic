use strict 'refs';
use warnings;
use Data::Dumper;
use Try::Tiny;

my $var = 'some string';

# my $hashref = {
#   someThing => 'hey hey',
# };

# my %hash = (
#   makes => 'sense',
# );


print 'one\'s true \\love';

print "\na simple string $var and $hash->{someThing}, haha\n";

print qq /jkj/;

print qq {\n {df {fsdf {dsf }}} ( im on vacation};

print qq {sdf $hashref->{someThing} im on vacation};

print qq{$var is better than no string\n};

print qq{\nDoes this make $hash{makes}, really?};

print qq {hello{ dsf {ds {\}}}}};
