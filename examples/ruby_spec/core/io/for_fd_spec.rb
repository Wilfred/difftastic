require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/new', __FILE__)

describe "IO.for_fd" do
  it_behaves_like :io_new, :for_fd
end

describe "IO.for_fd" do
  it_behaves_like :io_new_errors, :for_fd
end
