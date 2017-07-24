require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Dir.foreach" do
  before :all do
    DirSpecs.create_mock_dirs
  end

  after :all do
    DirSpecs.delete_mock_dirs
  end

  it "yields all names in an existing directory to the provided block" do
    a, b = [], []

    Dir.foreach(DirSpecs.mock_dir) {|f| a << f}
    Dir.foreach("#{DirSpecs.mock_dir}/deeply/nested") {|f| b << f}

    a.sort.should == DirSpecs.expected_paths
    b.sort.should == %w|. .. .dotfile.ext directory|
  end

  it "returns nil when successful" do
    Dir.foreach(DirSpecs.mock_dir) {|f| f}.should == nil
  end

  it "calls #to_path on non-String arguments" do
    p = mock('path')
    p.should_receive(:to_path).and_return(DirSpecs.mock_dir)
    Dir.foreach(p).to_a
  end

  it "raises a SystemCallError if passed a nonexistent directory" do
    lambda { Dir.foreach(DirSpecs.nonexistent) {} }.should raise_error(SystemCallError)
  end

  it "returns an Enumerator if no block given" do
    Dir.foreach(DirSpecs.mock_dir).should be_an_instance_of(Enumerator)
    Dir.foreach(DirSpecs.mock_dir).to_a.sort.should == DirSpecs.expected_paths
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      Dir.foreach(DirSpecs.mock_dir).should be_an_instance_of(Enumerator)
      Dir.foreach(DirSpecs.mock_dir).to_a.sort.should == DirSpecs.expected_paths
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          Dir.foreach(DirSpecs.mock_dir).size.should == nil
        end
      end
    end
  end
end
