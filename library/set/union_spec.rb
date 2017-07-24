require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/union', __FILE__)
require 'set'

describe "Set#union" do
  it_behaves_like :set_union, :union
end

describe "Set#|" do
  it_behaves_like :set_union, :|
end
