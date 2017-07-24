require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'
require File.expand_path('../shared/each_byte', __FILE__)

describe "StringIO#each_byte" do
  it_behaves_like :stringio_each_byte, :each_byte
end

describe "StringIO#each_byte when self is not readable" do
  it_behaves_like :stringio_each_byte_not_readable, :each_byte
end
