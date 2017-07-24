require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/trace', __FILE__)
require 'matrix'

describe "Matrix#tr" do
  it_behaves_like(:trace, :tr)
end
