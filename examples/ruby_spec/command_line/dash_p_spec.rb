describe "The -p command line option" do
  before :each do
    @names  = fixture __FILE__, "names.txt"
  end

  it "runs the code in loop conditional on Kernel.gets() and prints $_" do
    ruby_exe("$_ = $_.upcase", options: "-p", escape: true,
                               args: " < #{@names}").should ==
      "ALICE\nBOB\nJAMES\n"
  end

  it "sets $-p" do
    ruby_exe("$_ = $-p", options: "-p", escape: true,
                         args: " < #{@names}").should ==
      "truetruetrue"
  end
end
