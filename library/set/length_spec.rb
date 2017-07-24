require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)
require 'set'

describe "Set#length" do
  it_behaves_like :set_length, :length
end
