require File.expand_path('../../../spec_helper', __FILE__)
require "stringio"
require File.expand_path('../shared/read', __FILE__)
require File.expand_path('../shared/sysread', __FILE__)

describe "StringIO#read_nonblock when passed length, buffer" do
  it_behaves_like :stringio_read, :read_nonblock
end

describe "StringIO#read_nonblock when passed length" do
  it_behaves_like :stringio_read_length, :read_nonblock
end

describe "StringIO#read_nonblock when passed nil" do
  it_behaves_like :stringio_read_nil, :read_nonblock
end

describe "StringIO#read_nonblock when passed length" do
  it_behaves_like :stringio_sysread_length, :read_nonblock
end
