#!/usr/bin/env ruby

require 'open3'

remaining_files = `find examples -name '*.java'`.split(/\n/)
files_with_errors = []

until remaining_files.empty?
  batch_of_files = remaining_files.slice!(0...1000)

  output, status = Open3.capture2("tree-sitter", "parse", *batch_of_files, "--quiet", "--time")

  puts output

  files_with_errors += output
    .split(/\n/)
    .grep(/ERROR|MISSING/)
    .map { |line| line.split(/\s/)[0] }
end

File.write('script/known-errors.txt', files_with_errors.join("\n"))
