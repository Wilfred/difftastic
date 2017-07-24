require File.expand_path('../../spec_helper', __FILE__)

describe 'Optional variable assignments' do
  describe 'using ||=' do
    describe 'using a single variable' do
      it 'assigns a new variable' do
        a ||= 10

        a.should == 10
      end

      it 're-assigns an existing variable set to false' do
        a = false
        a ||= 10

        a.should == 10
      end

      it 're-assigns an existing variable set to nil' do
        a = nil
        a ||= 10

        a.should == 10
      end

      it 'does not re-assign a variable with a truthy value' do
        a = 10
        a ||= 20

        a.should == 10
      end

      it 'does not evaluate the right side when not needed' do
        a = 10
        a ||= raise('should not be executed')
        a.should == 10
      end

      it 'does not re-assign a variable with a truthy value when using an inline rescue' do
        a = 10
        a ||= 20 rescue 30

        a.should == 10
      end
    end

    describe 'using a accessor' do
      before do
        klass = Class.new { attr_accessor :b }
        @a    = klass.new
      end

      it 'assigns a new variable' do
        @a.b ||= 10

        @a.b.should == 10
      end

      it 're-assigns an existing variable set to false' do
        @a.b = false
        @a.b ||= 10

        @a.b.should == 10
      end

      it 're-assigns an existing variable set to nil' do
        @a.b = nil
        @a.b ||= 10

        @a.b.should == 10
      end

      it 'does not re-assign a variable with a truthy value' do
        @a.b = 10
        @a.b ||= 20

        @a.b.should == 10
      end

      it 'does not evaluate the right side when not needed' do
        @a.b = 10
        @a.b ||= raise('should not be executed')
        @a.b.should == 10
      end

      it 'does not re-assign a variable with a truthy value when using an inline rescue' do
        @a.b = 10
        @a.b ||= 20 rescue 30

        @a.b.should == 10
      end
    end
  end

  describe 'using &&=' do
    describe 'using a single variable' do
      it 'leaves new variable unassigned' do
        a &&= 10

        a.should == nil
      end

      it 'leaves false' do
        a = false
        a &&= 10

        a.should == false
      end

      it 'leaves nil' do
        a = nil
        a &&= 10

        a.should == nil
      end

      it 'does not evaluate the right side when not needed' do
        a = nil
        a &&= raise('should not be executed')
        a.should == nil
      end

      it 'does re-assign a variable with a truthy value' do
        a = 10
        a &&= 20

        a.should == 20
      end

      it 'does re-assign a variable with a truthy value when using an inline rescue' do
        a = 10
        a &&= 20 rescue 30

        a.should == 20
      end
    end

    describe 'using a single variable' do
      before do
        klass = Class.new { attr_accessor :b }
        @a    = klass.new
      end

      it 'leaves new variable unassigned' do
        @a.b &&= 10

        @a.b.should == nil
      end

      it 'leaves false' do
        @a.b = false
        @a.b &&= 10

        @a.b.should == false
      end

      it 'leaves nil' do
        @a.b = nil
        @a.b &&= 10

        @a.b.should == nil
      end

      it 'does not evaluate the right side when not needed' do
        @a.b = nil
        @a.b &&= raise('should not be executed')
        @a.b.should == nil
      end

      it 'does re-assign a variable with a truthy value' do
        @a.b = 10
        @a.b &&= 20

        @a.b.should == 20
      end

      it 'does re-assign a variable with a truthy value when using an inline rescue' do
        @a.b = 10
        @a.b &&= 20 rescue 30

        @a.b.should == 20
      end
    end
  end

  describe 'using compunded constants' do
    before do
      Object.send(:remove_const, :A) if defined? Object::A
    end

    it 'with ||= assignments' do
      Object::A ||= 10
      Object::A.should == 10
    end

    it 'with ||= do not reassign' do
      Object::A = 20
      Object::A ||= 10
      Object::A.should == 20
    end

    it 'with &&= assignments' do
      Object::A = 20
      -> {
        Object::A &&= 10
      }.should complain(/already initialized constant/)
      Object::A.should == 10
    end

    it 'with &&= assignments will fail with non-existant constants' do
      lambda { Object::A &&= 10 }.should raise_error(NameError)
    end

    it 'with operator assignments' do
      Object::A = 20
      -> {
        Object::A += 10
      }.should complain(/already initialized constant/)
      Object::A.should == 30
    end

    it 'with operator assignments will fail with non-existant constants' do
      lambda { Object::A += 10 }.should raise_error(NameError)
    end
  end
end
