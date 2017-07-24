require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/tell', __FILE__)

describe "StringIO#tell" do
  it_behaves_like :stringio_tell, :tell
end
