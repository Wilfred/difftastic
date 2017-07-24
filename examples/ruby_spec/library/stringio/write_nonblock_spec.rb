require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/write', __FILE__)

describe "StringIO#write_nonblock when passed [Object]" do
  it_behaves_like :stringio_write, :write_nonblock
end

describe "StringIO#write_nonblock when passed [String]" do
  it_behaves_like :stringio_write_string, :write_nonblock
end

describe "StringIO#write_nonblock when self is not writable" do
  it_behaves_like :stringio_write_not_writable, :write_nonblock
end

describe "StringIO#write_nonblock when in append mode" do
  it_behaves_like :stringio_write_append, :write_nonblock
end
