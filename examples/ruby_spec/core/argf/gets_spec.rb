require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/gets', __FILE__)

describe "ARGF.gets" do
  it_behaves_like :argf_gets, :gets
end

describe "ARGF.gets" do
  it_behaves_like :argf_gets_inplace_edit, :gets
end

describe "ARGF.gets" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @file1 = File.readlines @file1_name
    @file2 = File.readlines @file2_name
  end

  it "returns nil when reaching end of files" do
    argf [@file1_name, @file2_name] do
      total = @file1.size + @file2.size
      total.times { @argf.gets }
      @argf.gets.should == nil
    end
  end

  with_feature :encoding do
    before :each do
      @external = Encoding.default_external
      @internal = Encoding.default_internal

      Encoding.default_external = Encoding::UTF_8
      Encoding.default_internal = nil
    end

    after :each do
      Encoding.default_external = @external
      Encoding.default_internal = @internal
    end

    it "reads the contents of the file with default encoding" do
      Encoding.default_external = Encoding::US_ASCII
      argf [@file1_name, @file2_name] do
        @argf.gets.encoding.should == Encoding::US_ASCII
      end
    end
  end

end
