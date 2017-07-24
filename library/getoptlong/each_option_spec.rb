require File.expand_path('../../../spec_helper', __FILE__)
require 'getoptlong'
require File.expand_path('../shared/each', __FILE__)

describe "GetoptLong#each_option" do
  it_behaves_like(:getoptlong_each, :each_option)
end
