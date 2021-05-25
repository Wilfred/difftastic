package BaseModule::YeaThis;

use parent 'PerlModule';

$foo::bar = 1;

BaseModule::YeaThis->new->hello();

my $simple = SimpleModule->new();

my $parent_call = $self->SUPER::Something($string);


my $event = {
  user_id => Data::UUID->new->Something($dbh, {}),
};


my $output = {
  some_property => BaseModule::AtSomeWhere::GetSomething(121, {
      KEY => $var->{there},
  }),
};

my $object_return = BaseModule::AtSomeWhere::GetSomething(121, {
    KEY => $var->{there}->{here},
})->SomeOtherSub('hahaha');

=pod
=head1 Heading Text
=head2 Heading Text
=head3 Heading Text
=head4 Heading Text
=over indentlevel
=item stuff
=back
=begin format
=end format
=for format text...
=encoding type
=end

print "Well hello beautiful";
