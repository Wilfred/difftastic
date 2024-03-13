use strict;
use warnings;
use base qw/Catalyst::Controller/;

=head1 METHODS

=head2 test1                      

Test

=cut

sub test1 : Path('/') {
}

=head2 test2

Looks good. But now...

=cut

sub test2 : Path('/') Args(0) {
}

=head3 test3

Hmmm, this is looks odd now

=cut

sub test3 {
}

1;
