describe :struct_equal_value, shared: true do
  it "returns true if the other is the same object" do
    car = same_car = StructClasses::Car.new("Honda", "Accord", "1998")
    car.send(@method, same_car).should == true
  end

  it "returns true if the other has all the same fields" do
    car = StructClasses::Car.new("Honda", "Accord", "1998")
    similar_car = StructClasses::Car.new("Honda", "Accord", "1998")
    car.send(@method, similar_car).should == true
  end

  it "returns false if the other is a different object or has different fields" do
    car = StructClasses::Car.new("Honda", "Accord", "1998")
    different_car = StructClasses::Car.new("Honda", "Accord", "1995")
    car.send(@method, different_car).should == false
  end

  it "handles recursive structures by returning false if a difference can be found" do
    x = StructClasses::Car.new("Honda", "Accord", "1998")
    x[:make] = x
    stepping = StructClasses::Car.new("Honda", "Accord", "1998")
    stone = StructClasses::Car.new(stepping, "Accord", "1998")
    stepping[:make] = stone
    x.send(@method, stepping).should == true

    stone[:year] = "1999" # introduce a difference
    x.send(@method, stepping).should == false
  end
end
