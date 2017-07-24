Object.freeze

begin
  autoload :ANY_CONSTANT, "no_autoload.rb"
rescue Exception => e
  print e.class, " - ", defined?(ANY_CONSTANT).inspect
end
