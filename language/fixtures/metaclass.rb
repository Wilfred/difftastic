module MetaClassSpecs

  def self.metaclass_of obj
    class << obj
      self
    end
  end

  class A
    def self.cheese
      'edam'
    end
  end

  class B < A
    def self.cheese
      'stilton'
    end
  end

  class C
    class << self
      class << self
        def ham
          'iberico'
        end
      end
    end
  end

  class D < C; end

end

