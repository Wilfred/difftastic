require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/pos', __FILE__)

describe "IO#tell" do
  it_behaves_like(:io_pos, :tell)
end
