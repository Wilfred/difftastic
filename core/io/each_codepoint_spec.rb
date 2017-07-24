require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/codepoints', __FILE__)

# See redmine #1667
describe "IO#each_codepoint" do
  it_behaves_like(:io_codepoints, :codepoints)
end

describe "IO#each_codepoint" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "calls the given block" do
    r = []
    @io.each_codepoint { |c| r << c }
    r[24].should == 232
    r.last.should == 10
  end

  it "returns self" do
    @io.each_codepoint { |l| l }.should equal(@io)
  end
end

describe "IO#each_codepoint" do
  before :each do
    @io = IOSpecs.io_fixture("incomplete.txt")
  end

  after :each do
    @io.close if @io
  end

  ruby_version_is "2.3" do # earlier versions stay blocked
    it "raises an exception at incomplete character before EOF when conversion takes place" do
      lambda { @io.each_codepoint {} }.should raise_error(ArgumentError)
    end
  end
end
