# -*- encoding: us-ascii -*-

describe :set_visibility, shared: true do
  it "is a private method" do
    Module.should have_private_instance_method(@method, false)
  end

  describe "without arguments" do
    it "sets visibility to following method definitions" do
      visibility = @method
      mod = Module.new {
        send visibility

        def test1() end
        def test2() end
      }

      mod.should send(:"have_#{@method}_instance_method", :test1, false)
      mod.should send(:"have_#{@method}_instance_method", :test2, false)
    end

    it "stops setting visibility if the body encounters other visibility setters without arguments" do
      visibility = @method
      new_visibility = nil
      mod = Module.new {
        send visibility
        new_visibility = [:protected, :private].find {|vis| vis != visibility }
        send new_visibility
        def test1() end
      }

      mod.should send(:"have_#{new_visibility}_instance_method", :test1, false)
    end

    it "continues setting visibility if the body encounters other visibility setters with arguments" do
      visibility = @method
      mod = Module.new {
        send visibility
        def test1() end
        send([:protected, :private].find {|vis| vis != visibility }, :test1)
        def test2() end
      }

      mod.should send(:"have_#{@method}_instance_method", :test2, false)
    end

    it "does not affect module_evaled method definitions when itself is outside the eval" do
      visibility = @method
      mod = Module.new {
        send visibility

        module_eval { def test1() end }
        module_eval " def test2() end "
      }

      mod.should have_public_instance_method(:test1, false)
      mod.should have_public_instance_method(:test2, false)
    end

    it "does not affect outside method definitions when itself is inside a module_eval" do
      visibility = @method
      mod = Module.new {
        module_eval { send visibility }

        def test1() end
      }

      mod.should have_public_instance_method(:test1, false)
    end

    it "affects normally if itself and method definitions are inside a module_eval" do
      visibility = @method
      mod = Module.new {
        module_eval {
          send visibility

          def test1() end
        }
      }

      mod.should send(:"have_#{@method}_instance_method", :test1, false)
    end

    it "does not affect method definitions when itself is inside an eval and method definitions are outside" do
      visibility = @method
      initialized_visibility = [:public, :protected, :private].find {|sym| sym != visibility }
      mod = Module.new {
        send initialized_visibility
        eval visibility.to_s

        def test1() end
      }

      mod.should send(:"have_#{initialized_visibility}_instance_method", :test1, false)
    end

    it "affects evaled method definitions when itself is outside the eval" do
      visibility = @method
      mod = Module.new {
        send visibility

        eval "def test1() end"
      }

      mod.should send(:"have_#{@method}_instance_method", :test1, false)
    end

    it "affects normally if itself and following method definitions are inside a eval" do
      visibility = @method
      mod = Module.new {
        eval <<-CODE
          #{visibility}

          def test1() end
        CODE
      }

      mod.should send(:"have_#{@method}_instance_method", :test1, false)
    end

    describe "within a closure" do
      it "sets the visibility outside the closure" do
        visibility = @method
        mod = Module.new {
          1.times {
            send visibility
          }
          def test1() end
        }

        mod.should send(:"have_#{@method}_instance_method", :test1, false)
      end
    end
  end
end
