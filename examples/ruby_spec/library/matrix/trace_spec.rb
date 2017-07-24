require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/trace', __FILE__)
require 'matrix'

describe "Matrix#trace" do
  it_behaves_like(:trace, :trace)
end
