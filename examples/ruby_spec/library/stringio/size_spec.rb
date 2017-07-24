require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/length', __FILE__)

describe "StringIO#size" do
  it_behaves_like :stringio_length, :size
end
