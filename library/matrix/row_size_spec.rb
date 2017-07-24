require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#row_size" do
  it "returns the number rows" do
    Matrix[ [1,2], [3, 4], [5, 6] ].row_size.should == 3
  end

  it "returns the number rows even for some empty matrices" do
    Matrix[ [], [], [] ].row_size.should == 3
  end

end
