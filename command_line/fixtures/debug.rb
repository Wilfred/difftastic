which = ARGV.first.to_i

case which
when 0
  puts "$DEBUG #{$DEBUG}"
when 1
  puts "$VERBOSE #{$VERBOSE}"
when 2
  puts "$-d #{$-d}"
end
