require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length.rb', __FILE__)

describe "ENV.length" do
 it_behaves_like(:env_length, :length)
end
