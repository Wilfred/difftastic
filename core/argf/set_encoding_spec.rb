require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.set_encoding" do
  before :each do
    @file = fixture __FILE__, "file1.txt"
  end

  it "sets the external encoding when passed an encoding instance" do
    argf [@file] do
      @argf.set_encoding(Encoding::US_ASCII)
      @argf.external_encoding.should == Encoding::US_ASCII
      @argf.gets.encoding.should == Encoding::US_ASCII
    end
  end

  it "sets the external encoding when passed an encoding name" do
    argf [@file] do
      @argf.set_encoding("us-ascii")
      @argf.external_encoding.should == Encoding::US_ASCII
      @argf.gets.encoding.should == Encoding::US_ASCII
    end
  end

  it "sets the external, internal encoding when passed two encoding instances" do
    argf [@file] do
      @argf.set_encoding(Encoding::US_ASCII, Encoding::EUC_JP)
      @argf.external_encoding.should == Encoding::US_ASCII
      @argf.internal_encoding.should == Encoding::EUC_JP
      @argf.gets.encoding.should == Encoding::EUC_JP
    end
  end

  it "sets the external, internal encoding when passed 'ext:int' String" do
    argf [@file] do
      @argf.set_encoding("us-ascii:euc-jp")
      @argf.external_encoding.should == Encoding::US_ASCII
      @argf.internal_encoding.should == Encoding::EUC_JP
      @argf.gets.encoding.should == Encoding::EUC_JP
    end
  end
end
