class BasicObject
  remove_method :method_missing
end

begin
  Object.new.test_method
rescue NoMethodError => e
  puts e.class.name
end
