require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../fixtures/code_loading', __FILE__)
require File.expand_path('../shared/require', __FILE__)

describe "Kernel#require" do
  before :each do
    CodeLoadingSpecs.spec_setup
  end

  after :each do
    CodeLoadingSpecs.spec_cleanup
  end

  # if this fails, update your rubygems
  it "is a private method" do
    Kernel.should have_private_instance_method(:require)
  end

  it_behaves_like :kernel_require_basic, :require, CodeLoadingSpecs::Method.new

  it_behaves_like :kernel_require, :require, CodeLoadingSpecs::Method.new
end

describe "Kernel.require" do
  before :each do
    CodeLoadingSpecs.spec_setup
  end

  after :each do
    CodeLoadingSpecs.spec_cleanup
  end

  it_behaves_like :kernel_require_basic, :require, Kernel

  it_behaves_like :kernel_require, :require, Kernel
end
