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
  user_id => Data::UUID->new->create_b64($dbh, {}),
};


# my $communicatorbrandid = PatientCycle::Enterprise::CommunicatorBrandIDFromPatientID($dbh, {
#     PATIENTID => $message->{REPLACEWORDS}{PATIENTID},
# });


