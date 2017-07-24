require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/tty', __FILE__)

describe "IO#tty?" do
  it_behaves_like :io_tty, :tty?
end
