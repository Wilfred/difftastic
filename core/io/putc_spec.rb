require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/io/putc', __FILE__)

describe "IO#putc" do
  before :each do
    @name = tmp("io_putc.txt")
    @io_object = @io = new_io(@name)
  end

  it_behaves_like :io_putc, :putc
end
