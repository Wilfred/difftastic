require 'delegate'
module DelegateSpecs
  class Simple
    def pub
      :foo
    end

    def respond_to_missing?(method, priv=false)
      method == :pub_too ||
        (priv && method == :priv_too)
    end

    def method_missing(method, *args)
      super unless respond_to_missing?(method, true)
      method
    end

    def priv(arg=nil)
      yield arg if block_given?
      [:priv, arg]
    end
    private :priv

    def prot
      :protected
    end
    protected :prot
  end

  module Extra
    def extra
      :cheese
    end

    def extra_private
      :bar
    end
    private :extra_private

    def extra_protected
      :baz
    end
    protected :extra_protected
  end

  class Delegator < ::Delegator
    attr_accessor :data

    attr_reader :__getobj__
    def __setobj__(o)
      @__getobj__ = o
    end

    include Extra
  end

  class DelegateClass < DelegateClass(Simple)
    include Extra
  end
end
