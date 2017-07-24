require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#relative_path_from" do
  def relative_path_str(dest, base)
    Pathname.new(dest).relative_path_from(Pathname.new(base)).to_s
  end

  it "raises an error when the two paths do not share a common prefix" do
    lambda { relative_path_str('/usr', 'foo') }.should raise_error(ArgumentError)
  end

  it "raises an error when the base directory has .." do
    lambda { relative_path_str('a', '..') }.should raise_error(ArgumentError)
  end

  it "retuns a path relative from root" do
    relative_path_str('/usr', '/').should == 'usr'
  end

  it 'returns 1 level up when both paths are relative' do
    relative_path_str('a', 'b').should == '../a'
    relative_path_str('a', 'b/').should == '../a'
  end

  it 'returns a relative path when both are absolute' do
    relative_path_str('/a', '/b').should == '../a'
  end

  it "returns a path relative to the current directory" do
    relative_path_str('/usr/bin/ls', '/usr').should == 'bin/ls'
  end

  it 'returns a . when base and dest are the same' do
    relative_path_str('/usr', '/usr').should == '.'
  end

  it 'returns the same directory with a non clean base that matches the current dir' do
    relative_path_str('/usr', '/stuff/..').should == 'usr'
  end

  it 'returns a relative path with a non clean base that matches a different dir' do
    relative_path_str('/usr', '/stuff/../foo').should == '../usr'
  end

  it 'returns current and pattern when only those patterns are used' do
    relative_path_str('.', '.').should == '.'
    relative_path_str('..', '..').should == '.'
    relative_path_str('..', '.').should == '..'
  end
end
