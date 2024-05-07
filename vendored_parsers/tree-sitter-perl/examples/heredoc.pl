print (<<THIS, <<THAT);
this is the text 
THIS
that that that hat
THAT

print <<EOF;
fdsfsd
EOF

print << `EOC`;
echo hi there
EOC

print <<\EOF;
hello from the other side
EOF

print <<~\EOF;
hello from the other side
EOF

# intended heredoc

        print <<~EOF;
            this is intended
EOF
