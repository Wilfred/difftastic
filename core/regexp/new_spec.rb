require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/new_ascii', __FILE__)
require File.expand_path('../shared/new_ascii_8bit', __FILE__)

describe "Regexp.new" do
  it_behaves_like :regexp_new_ascii, :new
  it_behaves_like :regexp_new_ascii_8bit, :new
end

describe "Regexp.new given a String" do
  it_behaves_like :regexp_new_string_ascii, :new
  it_behaves_like :regexp_new_string_ascii_8bit, :new
end

describe "Regexp.new given a Regexp" do
  it_behaves_like :regexp_new_regexp_ascii, :new
  it_behaves_like :regexp_new_regexp_ascii_8bit, :new
end

describe "Regexp.new given a Fixnum" do
  it "raises a TypeError" do
    lambda { Regexp.new(1) }.should raise_error(TypeError)
  end
end

describe "Regexp.new given a Float" do
  it "raises a TypeError" do
    lambda { Regexp.new(1.0) }.should raise_error(TypeError)
  end
end
