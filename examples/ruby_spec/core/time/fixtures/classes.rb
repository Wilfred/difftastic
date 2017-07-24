module TimeSpecs

  class SubTime < Time; end

  class MethodHolder
    class << self
      define_method(:now, &Time.method(:now))
      define_method(:new, &Time.method(:new))
    end
  end

end
