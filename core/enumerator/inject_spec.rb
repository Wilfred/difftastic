require File.expand_path('../../../shared/enumerator/each', __FILE__)

describe "Enumerator#inject" do
  it_behaves_like(:enum_each, :each)

  it "works when chained against each_with_index" do
    passed_values = []
    [:a].each_with_index.inject(0) do |accumulator,value|
      passed_values << value
      accumulator + 1
    end.should == 1
    passed_values.should == [[:a,0]]
  end

end
