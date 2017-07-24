require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/transpose', __FILE__)

describe "Matrix#transpose" do
  it_behaves_like(:matrix_transpose, :t)
end
