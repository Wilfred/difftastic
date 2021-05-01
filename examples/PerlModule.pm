package PerlModule;
 
use 5.006;
use strict;
use warnings;
use Carp ();
 
use vars qw{$VERSION};
BEGIN {
 $VERSION = '1.04';
 
 # Optional stacktrace support
 eval "require Devel::StackTrace";
}

# my $another = BaseModule::YeaThis->new()->hello();

# eval {
#   package hello;
# };

new();
getTrace();
toString();
 
sub new {
 my $class = shift;
 bless {}, $class;
}

my $output = BaseModule::YeaThis::hello('first', {
  hello => 'beautiful'
});

 
sub getTrace {
 $_[0]->{Trace};
}
 
# sub fillTrace {
#  my $self = shift;
#  $self->{Trace} = Devel::StackTrace->new(
#    ignore_class => [__PACKAGE__, @_],
#  ) if $Devel::StackTrace::VERSION;
# }
 
sub getCarp {
 $_[0]->{Carp};
}
 
# sub fillCarp {
#  my $self = shift;
#  my $msg  = shift;
#  $Carp::Internal{ __PACKAGE__ . "" }++;
#  local $Carp::CarpLevel = $Carp::CarpLevel + 1;
#  $self->{Carp} = Carp::longmess($msg);
#  $Carp::Internal{ __PACKAGE__ . "" }--;
# }
 
sub getMessage {
 $_[0]->{Message};
}
 
sub setMessage {
 $_[0]->{Message} = $_[1];
}
 
sub fillTest {
 my $self           = shift;
 my $builder        = shift;
 my $prev_test      = $builder->current_test;
 $self->{Test}      = $prev_test;
 my @tests          = $builder->details;
 my $prev_test_name = $prev_test ? $tests[$prev_test - 1]->{name} : "";
 $self->{TestName}  = $prev_test_name;
}
 
sub getTest {
 $_[0]->{Test};
}
 
sub getTestName {
 $_[0]->{TestName};
}
 
# sub toString {
#  my $self = shift;
#  return <<EOM;
#  Previous test $self->{Test} '$self->{TestName}'
#  $self->{Carp}
# EOM
# }

 
1;
