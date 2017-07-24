case ARGV[0]
when "process"
  which = Process::PRIO_PROCESS
when "group"
  Process.setpgrp
  which = Process::PRIO_PGRP
end

priority = Process.getpriority(which, 0)
p priority
p Process.setpriority(which, 0, priority + 1)
p Process.getpriority(which, 0)
