require 'rake'
require 'rake/clean'

input = "#{$cwd}/#{$ext_name}.c"
common = "-I shotgun/lib/subtend -g #{input}"

case PLATFORM
when /darwin/
  output = "#{$cwd}/#{$ext_name}.bundle"
  build_cmd = "cc -bundle -undefined suppress -flat_namespace #{common} -o #{output}"
else
  output = "#{$cwd}/#{$ext_name}.so"
  build_cmd = "cc -shared #{common} -o #{output}"
end

CLOBBER.include(output)

task default: [output]

file output => [input] do
  sh build_cmd
end

