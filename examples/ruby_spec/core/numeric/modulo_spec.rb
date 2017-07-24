require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :numeric_modulo_19, shared: true do
  it "returns self - other * self.div(other)" do
    s = mock_numeric('self')
    o = mock_numeric('other')
    n3 = mock_numeric('n3')
    n4 = mock_numeric('n4')
    n5 = mock_numeric('n5')
    s.should_receive(:div).with(o).and_return(n3)
    o.should_receive(:*).with(n3).and_return(n4)
    s.should_receive(:-).with(n4).and_return(n5)
    s.send(@method, o).should == n5
  end
end

describe "Numeric#modulo" do
  it_behaves_like :numeric_modulo_19, :modulo
end

describe "Numeric#%" do
  it_behaves_like :numeric_modulo_19, :%
end
