use strict 'refs';
use warnings;
use Data::Dumper;

# my $args = {
#   MESSAGETYPE => 'heehaw',
#   MESSAGESUBTYPE => 'meow',
# };
# my $dbh;

my %email;
my $messagehashes = [];

my $buildmasterinput = HashAntiSlice($args, [qw(EMAILTEMPLATEID USEWHISKERS REPLACEWORDS PRACTICESETTINGS)]);
%email = _BuildMasterEmail($dbh, {
    EMAILMESSAGE => {
        %$buildmasterinput,
        CONTEXTDATA => $args->{PRACTICESETTINGS},
        DATAFORMESSAGE => $args->{REPLACEWORDS},
        DEEPLINKHASH => shift @$messagehashes,
    },
    PRACT1ICEID => 32,
});

my $sdf = 'sfds';
my %hash = (
  hello => 'sdfs',
  (3*4) => 'vs',
  $sdf => 'vsdfdsf',
);

print Dumper \%hash;


