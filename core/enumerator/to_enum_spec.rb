require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/enumerator/enum_for', __FILE__)

describe "Enumerator#to_enum" do
  it_behaves_like :enum_for, :enum_for
end
