# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :kernel_chop, shared: true do
  it "removes the final character of $_" do
    KernelSpecs.chop("abc", @method).should == "ab"
  end

  it "removes the final carriage return, newline of $_" do
    KernelSpecs.chop("abc\r\n", @method).should == "abc"
  end
end

describe :kernel_chop_private, shared: true do
  it "is a private method" do
    KernelSpecs.has_private_method(@method).should be_true
  end
end

describe "Kernel.chop" do
  it_behaves_like :kernel_chop, "Kernel.chop"
end

describe "Kernel#chop" do
  it_behaves_like :kernel_chop_private, :chop

  it_behaves_like :kernel_chop, "chop"
end

with_feature :encoding do
  describe :kernel_chop_encoded, shared: true do
    before :each do
      @external = Encoding.default_external
      Encoding.default_external = Encoding::UTF_8
    end

    after :each do
      Encoding.default_external = @external
    end

    it "removes the final multi-byte character from $_" do
      script = fixture __FILE__, "#{@method}.rb"
      KernelSpecs.run_with_dash_n(script).should == "あ"
    end
  end

  describe "Kernel.chop" do
    it_behaves_like :kernel_chop_encoded, "chop"
  end

  describe "Kernel#chop" do
    it_behaves_like :kernel_chop_encoded, "chop_f"
  end
end
