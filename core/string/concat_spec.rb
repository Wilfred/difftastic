require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/concat', __FILE__)

describe "String#concat" do
  it_behaves_like :string_concat, :concat
  it_behaves_like :string_concat_encoding, :concat

  ruby_version_is "2.4" do
    it "takes multiple arguments" do
      str = "hello "
      str.concat "wo", "", "rld"
      str.should == "hello world"
    end

    it "concatenates the initial value when given arguments contain 2 self" do
      str = "hello"
      str.concat str, str
      str.should == "hellohellohello"
    end

    it "returns self when given no arguments" do
      str = "hello"
      str.concat.should equal(str)
      str.should == "hello"
    end
  end
end
