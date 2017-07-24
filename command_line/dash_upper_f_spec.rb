describe "the -F command line option" do
  before :each do
    @passwd  = fixture __FILE__, "passwd_file.txt"
  end

  it "specifies the field separator pattern for -a" do
    ruby_exe("puts $F[0]", options: "-naF:", escape: true,
                           args: " < #{@passwd}").should ==
      "nobody\nroot\ndaemon\n"
  end
end
