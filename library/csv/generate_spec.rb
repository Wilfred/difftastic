require File.expand_path('../../../spec_helper', __FILE__)
require 'csv'
require 'tempfile'

describe "CSV.generate" do

  it "returns CSV string" do
    csv_str = CSV.generate do |csv|
      csv.add_row [1, 2, 3]
      csv << [4, 5, 6]
    end
    csv_str.should == "1,2,3\n4,5,6\n"
  end

  it "accepts a col separator" do
    csv_str = CSV.generate(col_sep: ";") do |csv|
      csv.add_row [1, 2, 3]
      csv << [4, 5, 6]
    end
    csv_str.should == "1;2;3\n4;5;6\n"
  end

  it "appends and returns the argument itself" do
    str = ""
    csv_str = CSV.generate(str) do |csv|
      csv.add_row [1, 2, 3]
      csv << [4, 5, 6]
    end
    csv_str.object_id.should == str.object_id
    str.should == "1,2,3\n4,5,6\n"
  end
end
