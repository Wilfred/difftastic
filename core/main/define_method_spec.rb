require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

script_binding = binding

describe "main#define_method" do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end

  after :each do
    Object.send :remove_method, :boom
  end

  it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end

  it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end

  it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end
