require File.expand_path('../../spec_helper', __FILE__)

describe 'The -C command line option' do
  before :all do
    @script  = fixture(__FILE__, 'dash_upper_c_script.rb')
    @tempdir = File.dirname(@script)
  end

  it 'changes the PWD when using a file' do
    output = ruby_exe(@script, options: "-C #{@tempdir}")
    output.should == @tempdir
  end

  it 'changes the PWD when using -e' do
    output = ruby_exe(nil, options: "-C #{@tempdir} -e 'print Dir.pwd'")
    output.should == @tempdir
  end
end
