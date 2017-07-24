require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'
require File.expand_path('../shared/each_char', __FILE__)

describe "StringIO#each_char" do
  it_behaves_like :stringio_each_char, :each_char
end

describe "StringIO#each_char when self is not readable" do
  it_behaves_like :stringio_each_char_not_readable, :chars
end
