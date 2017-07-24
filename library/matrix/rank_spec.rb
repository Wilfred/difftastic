require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#rank" do
  it "returns the rank of the Matrix" do
    Matrix[ [7,6], [3,9] ].rank.should == 2
  end

  it "doesn't loop forever" do
    Matrix[ [1,2,3], [4,5,6], [7,8,9] ].rank.should == 2
    Matrix[ [1, 2, 0, 3], [1, -2, 3, 0], [0, 0, 4, 8], [2, 4, 0, 6] ].rank.
    should == 3
  end

  it "works for some easy rectangular matrices" do
    Matrix[[0,0],[0,0],[1,0]].rank.should == 1
    Matrix[[0,1],[0,0],[1,0]].rank.should == 2
  end
end
