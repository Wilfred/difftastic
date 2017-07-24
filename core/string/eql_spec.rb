require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/eql', __FILE__)

describe "String#eql?" do
  it_behaves_like(:string_eql_value, :eql?)

  describe "when given a non-String" do
    it "returns false" do
      'hello'.should_not eql(5)
      not_supported_on :opal do
        'hello'.should_not eql(:hello)
      end
      'hello'.should_not eql(mock('x'))
    end

    it "does not try to call #to_str on the given argument" do
      (obj = mock('x')).should_not_receive(:to_str)
      'hello'.should_not eql(obj)
    end
  end
end
