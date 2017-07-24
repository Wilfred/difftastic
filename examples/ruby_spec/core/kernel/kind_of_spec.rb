require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/kind_of', __FILE__)

describe "Kernel#kind_of?" do
  it_behaves_like(:kernel_kind_of , :kind_of?)
end
