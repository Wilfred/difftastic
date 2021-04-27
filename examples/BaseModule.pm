package BaseModule::YeaThis;

use parent 'PerlModule';

my $base = BaseModule::YeaThis->new();

sub new {
  print "new is called\n";

  return bless {}, "BaseModule::YeaThis";
}

$base->hello();

sub hello {
  my ($self) = @_;

  print "hello base class\n";
}


1;