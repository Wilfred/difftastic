require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "YAML.load_file" do
  after :each do
    rm_r $test_file
  end

  it "returns a hash" do
    File.open($test_file,'w' ){|io| YAML.dump( {"bar"=>2, "car"=>1}, io ) }
    YAML.load_file($test_file).should == {"bar"=>2, "car"=>1}
  end
end
