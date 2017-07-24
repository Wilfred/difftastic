require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/tty', __FILE__)

describe "IO#isatty" do
  it_behaves_like :io_tty, :isatty
end
