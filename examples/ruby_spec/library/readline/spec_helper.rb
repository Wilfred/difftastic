require File.expand_path('../../../spec_helper', __FILE__)

begin
  require 'readline'
rescue LoadError
else
  # rb-readline behaves quite differently
  unless defined?(RbReadline)
    MSpec.enable_feature :readline
  end
end
