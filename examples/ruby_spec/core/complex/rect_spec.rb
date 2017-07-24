require File.expand_path('../../../shared/complex/rect', __FILE__)

describe "Complex#rect" do
  it_behaves_like(:complex_rect, :rect)
end

describe "Complex.rect" do
  it_behaves_like(:complex_rect_class, :rect)
end
