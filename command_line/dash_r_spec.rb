require File.expand_path('../../spec_helper', __FILE__)

describe "The -r command line option" do
  before :each do
    @script = fixture __FILE__, "require.rb"
    @test_file = fixture __FILE__, "test_file"
  end

  it "requires the specified file" do
    result = ruby_exe(@script, options: "-r #{@test_file}")
    result.should include(@test_file + ".rb")
  end
end
