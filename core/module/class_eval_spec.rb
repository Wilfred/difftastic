require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/class_eval', __FILE__)

describe "Module#class_eval" do
  it_behaves_like :module_class_eval, :class_eval
end
