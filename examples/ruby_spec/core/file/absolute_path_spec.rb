require File.expand_path('../../../spec_helper', __FILE__)

describe "File.absolute_path" do
  before :each do
    @abs = File.expand_path(__FILE__)
  end

  it "returns the argument if it's an absolute pathname" do
    File.absolute_path(@abs).should == @abs
  end

  it "resolves paths relative to the current working directory" do
    path = File.dirname(@abs)
    Dir.chdir(path) do
      File.absolute_path('hello.txt').should == File.join(Dir.pwd, 'hello.txt')
    end
  end

  it "does not expand '~' to a home directory." do
    File.absolute_path('~').should_not == File.expand_path('~')
  end

  it "does not expand '~user' to a home directory." do
    path = File.dirname(@abs)
    Dir.chdir(path) do
      File.absolute_path('~user').should == File.join(Dir.pwd, '~user')
    end
  end

  it "accepts a second argument of a directory from which to resolve the path" do
    File.absolute_path(__FILE__, File.dirname(__FILE__)).should == @abs
  end

  it "calls #to_path on its argument" do
    File.absolute_path(mock_to_path(@abs)).should == @abs
  end
end
