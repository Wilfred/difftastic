describe :yaml_each_document, shared: true do
  it "calls the block on each succesive document" do
    documents = []
    YAML.send(@method, $multidocument) do |doc|
      documents << doc
    end
    documents.should == [["Mark McGwire", "Sammy Sosa", "Ken Griffey"],
                         ["Chicago Cubs", "St Louis Cardinals"]]
  end

  it "works on files" do
    File.open($test_parse_file, "r") do |file|
      YAML.send(@method, file) do |doc|
        doc.should == {"project"=>{"name"=>"RubySpec"}}
      end
    end
  end
end
