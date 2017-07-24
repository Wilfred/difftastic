describe "The -n command line option" do
  before :each do
    @names  = fixture __FILE__, "names.txt"
  end

  it "runs the code in loop conditional on Kernel.gets()" do
    ruby_exe("puts $_", options: "-n", escape: true,
                        args: " < #{@names}").should ==
      "alice\nbob\njames\n"
  end

  it "only evaluates BEGIN blocks once" do
    ruby_exe("BEGIN { puts \"hi\" }; puts $_", options: "-n", escape: true,
                                               args: " < #{@names}").should ==
      "hi\nalice\nbob\njames\n"
  end

  it "only evaluates END blocks once" do
    ruby_exe("puts $_; END {puts \"bye\"}", options: "-n", escape: true,
                                            args: " < #{@names}").should ==
      "alice\nbob\njames\nbye\n"
  end

  it "allows summing over a whole file" do
    script = <<-script
    BEGIN { $total = 0 }
    $total += 1
    END { puts $total }
    script
    ruby_exe(script, options: "-n", escape: true,
                     args: " < #{@names}").should ==
      "3\n"
  end
end
