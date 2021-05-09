use strict 'refs';
use warnings;
use Data::Dumper;

my $var = {
  what => 'im here heyyy'
};
$var->{'there'} = 'yes';

# print qq{hello $var->{'what'} meow meow};


SQL::Select->new()->Select($dbh, {});

my $event = {
  user_id => Data::UUID->new()->Something($dbh, {}),
};


# myy $event = {
#             user_properties => PatientCycle::PortalUtils::GetEmailOpenTrackingProperties($dbh, {
#                 MESSAGETYPE => $args->{MESSAGETYPE},
#             }),
# };

