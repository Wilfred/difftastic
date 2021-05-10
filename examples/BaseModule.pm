package BaseModule::YeaThis;

use parent 'PerlModule';

BaseModule::YeaThis->new->hello();

my $simple = SimpleModule->new();


my $event = {
  user_id => Data::UUID->new->Something($dbh, {}),
};


my $output = {
  some_property => BaseModule::AtSomeWhere::GetSomething(121, {
      KEY => $var->{there},
  }),
};