require File.expand_path('../../../shared/complex/minus', __FILE__)

describe "Complex#-" do
  it_behaves_like :complex_minus, :-
end
