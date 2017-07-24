require File.expand_path('../../../spec_helper', __FILE__)
require 'set'
require File.expand_path('../shared/add', __FILE__)

describe "Set#<<" do
  it_behaves_like :set_add, :<<
end
