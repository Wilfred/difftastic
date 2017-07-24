require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'
require File.expand_path('../shared/each', __FILE__)

describe "StringIO#lines when passed a separator" do
  it_behaves_like :stringio_each_separator, :lines
end

describe "StringIO#lines when passed no arguments" do
  it_behaves_like :stringio_each_no_arguments, :lines
end

describe "StringIO#lines when self is not readable" do
  it_behaves_like :stringio_each_not_readable, :lines
end
