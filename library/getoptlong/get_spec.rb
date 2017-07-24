require File.expand_path('../../../spec_helper', __FILE__)
require 'getoptlong'
require File.expand_path('../shared/get', __FILE__)

describe "GetoptLong#get" do
  it_behaves_like(:getoptlong_get, :get)
end
