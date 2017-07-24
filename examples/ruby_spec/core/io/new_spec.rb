require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/new', __FILE__)

describe "IO.new" do
  it_behaves_like :io_new, :new
end

describe "IO.new" do
  it_behaves_like :io_new_errors, :new
end
