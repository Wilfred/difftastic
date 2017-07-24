require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/write', __FILE__)

describe "StringIO#write when passed [Object]" do
  it_behaves_like :stringio_write, :write
end

describe "StringIO#write when passed [String]" do
  it_behaves_like :stringio_write_string, :write
end

describe "StringIO#write when self is not writable" do
  it_behaves_like :stringio_write_not_writable, :write
end

describe "StringIO#write when in append mode" do
  it_behaves_like :stringio_write_append, :write
end
