require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#square?" do

  it "returns true when the Matrix is square" do
    Matrix[ [1,2], [2,4] ].square?.should be_true
    Matrix[ [100,3,5], [9.5, 4.9, 8], [2,0,77] ].square?.should be_true
  end

  it "returns true when the Matrix has only one element" do
    Matrix[ [9] ].square?.should be_true
  end

  it "returns false when the Matrix is rectangular" do
    Matrix[ [1, 2] ].square?.should be_false
  end

  it "returns false when the Matrix is rectangular" do
    Matrix[ [1], [2] ].square?.should be_false
  end

  it "returns handles empty matrices" do
    Matrix[].square?.should be_true
    Matrix[[]].square?.should be_false
    Matrix.columns([[]]).square?.should be_false
  end
end
