require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :string_equal_value, shared: true do
  it "returns false if obj does not respond to to_str" do
    'hello'.send(@method, 5).should be_false
    not_supported_on :opal do
      'hello'.send(@method, :hello).should be_false
    end
    'hello'.send(@method, mock('x')).should be_false
  end

  it "returns obj == self if obj responds to to_str" do
    obj = Object.new

    # String#== merely checks if #to_str is defined. It does
    # not call it.
    obj.stub!(:to_str)

    # Don't use @method for :== in `obj.should_recerive(:==)`
    obj.should_receive(:==).and_return(true)

    'hello'.send(@method, obj).should be_true
  end

  it "is not fooled by NUL characters" do
    "abc\0def".send(@method, "abc\0xyz").should be_false
  end
end
