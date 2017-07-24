require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)
require 'set'

describe "Set#size" do
  it_behaves_like :set_length, :size
end
