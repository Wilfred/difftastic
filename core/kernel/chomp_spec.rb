# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :kernel_chomp, shared: true do
  it "removes the final newline of $_" do
    KernelSpecs.chomp("abc\n", @method).should == "abc"
  end

  it "removes the final carriage return of $_" do
    KernelSpecs.chomp("abc\r", @method).should == "abc"
  end

  it "removes the final carriage return, newline of $_" do
    KernelSpecs.chomp("abc\r\n", @method).should == "abc"
  end

  it "removes only the final newline of $_" do
    KernelSpecs.chomp("abc\n\n", @method).should == "abc\n"
  end

  it "removes the value of $/ from the end of $_" do
    KernelSpecs.chomp("abcde", @method, "cde").should == "ab"
  end
end

describe :kernel_chomp_private, shared: true do
  it "is a private method" do
    KernelSpecs.has_private_method(@method).should be_true
  end
end

describe "Kernel.chomp" do
  it_behaves_like :kernel_chomp, "Kernel.chomp"
end

describe "Kernel#chomp" do
  it_behaves_like :kernel_chomp, "chomp"

  it_behaves_like :kernel_chomp_private, :chomp
end

with_feature :encoding do
  describe :kernel_chomp_encoded, shared: true do
    before :each do
      @external = Encoding.default_external
      Encoding.default_external = Encoding::UTF_8
    end

    after :each do
      Encoding.default_external = @external
    end

    it "removes the final carriage return, newline from a multi-byte $_" do
      script = fixture __FILE__, "#{@method}.rb"
      KernelSpecs.run_with_dash_n(script).should == "あれ"
    end
  end

  describe "Kernel.chomp" do
    it_behaves_like :kernel_chomp_encoded, "chomp"
  end

  describe "Kernel#chomp" do
    it_behaves_like :kernel_chomp_encoded, "chomp_f"
  end
end
