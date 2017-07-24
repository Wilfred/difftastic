require File.expand_path('../../../shared/complex/rect', __FILE__)

describe "Complex#rectangular" do
  it_behaves_like(:complex_rect, :rectangular)
end

describe "Complex.rectangular" do
  it_behaves_like(:complex_rect_class, :rectangular)
end
