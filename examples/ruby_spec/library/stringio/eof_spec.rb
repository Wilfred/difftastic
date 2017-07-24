require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/eof', __FILE__)

describe "StringIO#eof?" do
  it_behaves_like :stringio_eof, :eof?
end

describe "StringIO#eof" do
  it_behaves_like :stringio_eof, :eof
end
