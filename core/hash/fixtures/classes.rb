module HashSpecs
  class MyHash < Hash; end

  class MyInitializerHash < Hash

    def initialize
      raise "Constructor called"
    end

  end

  class NewHash < Hash
    def initialize(*args)
      args.each_with_index do |val, index|
        self[index] = val
      end
    end
  end

  class DefaultHash < Hash
    def default(key)
      100
    end
  end

  class ToHashHash < Hash
    def to_hash
      { "to_hash" => "was", "called!" => "duh." }
    end
  end

  class KeyWithPrivateHash
    private :hash
  end

  class ByIdentityKey
    def hash
      fail("#hash should not be called on compare_by_identity Hash")
    end
  end

  class ByValueKey
    attr_reader :n
    def initialize(n)
      @n = n
    end

    def hash
      n
    end

    def eql? other
      ByValueKey === other and @n == other.n
    end
  end

  def self.empty_frozen_hash
    @empty ||= {}
    @empty.freeze
    @empty
  end

  def self.frozen_hash
    @hash ||= { 1 => 2, 3 => 4 }
    @hash.freeze
    @hash
  end
end
