require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../fixtures/code_loading', __FILE__)
require File.expand_path('../shared/load', __FILE__)
require File.expand_path('../shared/require', __FILE__)

describe "Kernel#load" do
  before :each do
    CodeLoadingSpecs.spec_setup
  end

  after :each do
    CodeLoadingSpecs.spec_cleanup
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:load)
  end

  it_behaves_like :kernel_require_basic, :load, CodeLoadingSpecs::Method.new
end

describe "Kernel#load" do
  it_behaves_like :kernel_load, :load, CodeLoadingSpecs::Method.new
end

describe "Kernel.load" do
  before :each do
    CodeLoadingSpecs.spec_setup
  end

  after :each do
    CodeLoadingSpecs.spec_cleanup
  end

  it_behaves_like :kernel_require_basic, :load, Kernel
end

describe "Kernel.load" do
  it_behaves_like :kernel_load, :load, Kernel
end
