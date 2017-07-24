# encoding: utf-8

require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Dir.entries" do
  before :all do
    DirSpecs.create_mock_dirs
  end

  before :each do
    @internal = Encoding.default_internal
  end

  after :all do
    DirSpecs.delete_mock_dirs
  end

  after :each do
    Encoding.default_internal = @internal
  end

  it "returns an Array of filenames in an existing directory including dotfiles" do
    a = Dir.entries(DirSpecs.mock_dir).sort

    a.should == DirSpecs.expected_paths

    a = Dir.entries("#{DirSpecs.mock_dir}/deeply/nested").sort
    a.should == %w|. .. .dotfile.ext directory|
  end

  it "calls #to_path on non-String arguments" do
    p = mock('path')
    p.should_receive(:to_path).and_return(DirSpecs.mock_dir)
    Dir.entries(p)
  end

  it "accepts an options Hash" do
    a = Dir.entries("#{DirSpecs.mock_dir}/deeply/nested", encoding: "utf-8").sort
    a.should == %w|. .. .dotfile.ext directory|
  end

  it "returns entries encoded with the filesystem encoding by default" do
    # This spec depends on the locale not being US-ASCII because if it is, the
    # entries that are not ascii_only? will be ASCII-8BIT encoded.
    entries = Dir.entries(File.join(DirSpecs.mock_dir, 'special')).sort
    encoding = Encoding.find("filesystem")
    encoding = Encoding::ASCII_8BIT if encoding == Encoding::US_ASCII
    platform_is_not :windows do
      entries.should include("こんにちは.txt".force_encoding(encoding))
    end
    entries.first.encoding.should equal(Encoding.find("filesystem"))
  end

  it "returns entries encoded with the specified encoding" do
    dir = File.join(DirSpecs.mock_dir, 'special')
    entries = Dir.entries(dir, encoding: "euc-jp").sort
    entries.first.encoding.should equal(Encoding::EUC_JP)
  end

  it "returns entries transcoded to the default internal encoding" do
    Encoding.default_internal = Encoding::EUC_KR
    entries = Dir.entries(File.join(DirSpecs.mock_dir, 'special')).sort
    entries.first.encoding.should equal(Encoding::EUC_KR)
  end

  it "raises a SystemCallError if called with a nonexistent diretory" do
    lambda { Dir.entries DirSpecs.nonexistent }.should raise_error(SystemCallError)
  end
end
