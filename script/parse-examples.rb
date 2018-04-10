#!/usr/bin/env ruby

require 'set'
require 'open3'

known_errors = Set.new(File.read('script/known-errors.txt').split(/\n/))

remaining_files = `find examples -name '*.java'`.split(/\n/)
remaining_files.reject! {|file| known_errors.include?(file)}
lines_with_errors = []

until remaining_files.empty?
  batch_of_files = remaining_files.slice!(0...2000)

  output, status = Open3.capture2("tree-sitter", "parse", *batch_of_files, "--quiet", "--time")

  lines_with_errors += output
    .split(/\n/)
    .grep(/ERROR|MISSING/)
end

unless lines_with_errors.empty?
  lines_with_errors.each {|line| puts line}
  exit 1
end
