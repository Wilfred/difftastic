require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/each', __FILE__)

describe "StringIO#each when passed a separator" do
  it_behaves_like :stringio_each_separator, :each
end

describe "StringIO#each when passed no arguments" do
  it_behaves_like :stringio_each_no_arguments, :each
end

describe "StringIO#each when self is not readable" do
  it_behaves_like :stringio_each_not_readable, :each
end
