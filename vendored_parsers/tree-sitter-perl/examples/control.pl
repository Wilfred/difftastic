use strict;
use warnings;

# sub hello {
#   if (1) {
#     return true;
#   }
# }

# hello();

if (1) {
  print "if condition\n";
}
# comments comments everywhere
# comments comments everywhere
elsif(1) {
  print "meow\n";
}
# comments comments everywhere
# comments comments everywhere
elsif(1) {
  print "another one\n";
}
# comments comments everywhere
# comments comments everywhere
else {
  print "else print this\n";
}

unless(0) {
  print "unless\n";
}
elsif(1) {
  print "meow\n";
}
elsif(1) {
  print "another one\n";
}
else {
  print "else print this\n";
}

# my $num = rand();
 
# given ($num) {
#    when (1) {
#        say "is larger than 0.7";
#    }
#    when ($_ > 0.4) {
#        say "$_ is larger than 0.4";
#    }
#    default {
#        say "$_ is something else";
#    }
# }

# my $i = 0;
# MEOW: while ($i < 10) {
#   print "hello $i";
  
#   next MEOW;

#   $i++;
# }

# standalone blocks
{
  print "hello";
} continue {
  print "con\n";
}

my @array = ("dsf");

my $tern_out = (1 == 1) ? ("terry") : ((2 * 28) + 1);

print $tern_out;
