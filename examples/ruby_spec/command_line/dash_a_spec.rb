describe "The -a command line option" do
  before :each do
    @names  = fixture __FILE__, "full_names.txt"
  end

  it "runs the code in loop conditional on Kernel.gets()" do
    ruby_exe("puts $F.last", options: "-n -a", escape: true,
                             args: " < #{@names}").should ==
      "jones\nfield\ngrey\n"
  end

  it "sets $-a" do
    ruby_exe("puts $-a", options: "-n -a", escape: true,
                         args: " < #{@names}").should ==
      "true\ntrue\ntrue\n"
  end
end
