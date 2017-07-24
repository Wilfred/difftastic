STDOUT.reopen ARGV[0]
system "echo from system"
exec "echo from exec"
