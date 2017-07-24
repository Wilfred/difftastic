require File.expand_path('../../spec_helper', __FILE__)

describe "The retry statement" do
  it "re-executes the closest block" do
    retry_first = true
    retry_second = true
    results = []
    begin
      results << 1
      raise
    rescue
      results << 2
      if retry_first
        results << 3
        retry_first = false
        retry
      end
      begin
        results << 4
        raise
      rescue
        results << 5
        if retry_second
          results << 6
          retry_second = false
          retry
        end
      end
    end

    results.should == [1, 2, 3, 1, 2, 4, 5, 6, 4, 5]
  end

  it "raises a SyntaxError when used outside of a begin statement" do
    lambda { eval 'retry' }.should raise_error(SyntaxError)
  end
end

describe "The retry keyword inside a begin block's rescue block" do
  it "causes the begin block to be executed again" do
    counter = 0

    begin
      counter += 1
      raise "An exception"
    rescue
      retry unless counter == 7
    end

    counter.should == 7
  end
end
