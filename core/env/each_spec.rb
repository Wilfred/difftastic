require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/each.rb', __FILE__)

describe "ENV.each" do
  it_behaves_like(:env_each, :each)
end
