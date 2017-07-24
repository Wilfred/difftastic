require File.expand_path('../../../spec_helper', __FILE__)
require 'getoptlong'
require File.expand_path('../shared/each', __FILE__)

describe "GetoptLong#each" do
  it_behaves_like(:getoptlong_each, :each)
end
