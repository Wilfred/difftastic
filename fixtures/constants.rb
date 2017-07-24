# Contains all static code examples of all constants behavior in language and
# library specs. The specs include language/constants_spec.rb and the specs
# for Module#const_defined?, Module#const_get, Module#const_set,
# Module#remove_const, Module#const_missing and Module#constants.
#
# Rather than defining a class structure for each example, a canonical set of
# classes is used along with numerous constants, in most cases, a unique
# constant for each facet of behavior. This potentially leads to some
# redundancy but hopefully the minimal redundancy that includes reasonable
# variety in class and module configurations, including hierarchy,
# containment, inclusion, singletons and toplevel.
#
# Constants are numbered for for uniqueness. The CS_ prefix is uniformly used
# and is to minimize clashes with other toplevel constants (see e.g. ModuleA
# which is included in Object). Constant values are symbols. A numbered suffix
# is used to distinguish constants with the same name defined in different
# areas (e.g. CS_CONST10 has values :const10_1, :const10_2, etc.).
#
# Methods are named after the constants they reference (e.g. ClassA.const10
# references CS_CONST10). Where it is reasonable to do so, both class and
# instance methods are defined. This is an instance of redundancy (class
# methods should behave no differently than instance methods) but is useful
# for ensuring compliance in implementations.


# This constant breaks the rule of defining all constants, classes, modules
# inside a module namespace for the particular specs, however, it is needed
# for completeness. No other constant of this name should be defined in the
# specs.
CS_CONST1 = :const1   # only defined here

module ConstantSpecs

  # Included at toplevel
  module ModuleA
    CS_CONST10 = :const10_1
    CS_CONST12 = :const12_2
    CS_CONST13 = :const13
    CS_CONST21 = :const21_2
  end

  # Included in ParentA
  module ModuleB
    CS_CONST10 = :const10_9
    CS_CONST11 = :const11_2
    CS_CONST12 = :const12_1
  end

  # Included in ChildA
  module ModuleC
    CS_CONST10 = :const10_4
    CS_CONST15 = :const15_1
  end

  # Included in ChildA metaclass
  module ModuleH
    CS_CONST10 = :const10_7
  end

  # Included in ModuleD
  module ModuleM
    CS_CONST10 = :const10_11
    CS_CONST24 = :const24
  end

  # Included in ContainerA
  module ModuleD
    include ModuleM

    CS_CONST10 = :const10_8
  end

  # The following classes/modules have all the constants set "statically".
  # Contrast with the classes below where the constants are set as the specs
  # are run.

  class ClassA
    CS_CONST10 = :const10_10
    CS_CONST16 = :const16
    CS_CONST17 = :const17_2
    CS_CONST22 = :const22_1

    def self.const_missing(const)
      const
    end

    def self.constx;  CS_CONSTX;       end
    def self.const10; CS_CONST10;      end
    def self.const16; ParentA.const16; end
    def self.const22; ParentA.const22 { CS_CONST22 }; end

    def const10; CS_CONST10; end
    def constx;  CS_CONSTX;  end
  end

  class ParentA
    include ModuleB

    CS_CONST4 = :const4
    CS_CONST10 = :const10_5
    CS_CONST11 = :const11_1
    CS_CONST15 = :const15_2
    CS_CONST20 = :const20_2
    CS_CONST21 = :const21_1
    CS_CONST22 = :const22_2

    def self.constx;  CS_CONSTX;  end
    def self.const10; CS_CONST10; end
    def self.const16; CS_CONST16; end
    def self.const22; yield;      end

    def const10; CS_CONST10; end
    def constx;  CS_CONSTX;  end
  end

  class ContainerA
    include ModuleD

    CS_CONST5 = :const5
    CS_CONST10 = :const10_2
    CS_CONST23 = :const23

    class ChildA < ParentA
      include ModuleC

      class << self
        include ModuleH

        CS_CONST10 = :const10_6
        CS_CONST14 = :const14_1
        CS_CONST19 = :const19_1

        def const19; CS_CONST19; end
      end

      CS_CONST6 = :const6
      CS_CONST10 = :const10_3
      CS_CONST19 = :const19_2

      def self.const10; CS_CONST10; end
      def self.const11; CS_CONST11; end
      def self.const12; CS_CONST12; end
      def self.const13; CS_CONST13; end
      def self.const15; CS_CONST15; end
      def self.const21; CS_CONST21; end

      def const10; CS_CONST10; end
      def const11; CS_CONST11; end
      def const12; CS_CONST12; end
      def const13; CS_CONST13; end
      def const15; CS_CONST15; end
    end

    def self.const10; CS_CONST10; end

    def const10; CS_CONST10; end
  end

  class ContainerA::ChildA
    def self.const23; CS_CONST23; end
  end

  class ::Object
    CS_CONST20 = :const20_1

    module ConstantSpecs
      class ContainerA
        class ChildA
          def self.const20; CS_CONST20; end
        end
      end
    end
  end

  # Included in ParentB
  module ModuleE
  end

  # Included in ChildB
  module ModuleF
  end

  # Included in ContainerB
  module ModuleG
  end

  # The following classes/modules have the same structure as the ones above
  # but the constants are set as the specs are run.

  class ClassB
    def self.const201; CS_CONST201; end
    def self.const209; ParentB.const209; end
    def self.const210; ParentB.const210 { CS_CONST210 }; end

    def const201; CS_CONST201; end
  end

  class ParentB
    include ModuleE

    def self.const201; CS_CONST201; end
    def self.const209; CS_CONST209; end
    def self.const210; yield;       end

    def const201; CS_CONST201; end
  end

  class ContainerB
    include ModuleG

    class ChildB < ParentB
      include ModuleF

      class << self
        def const206; CS_CONST206; end
      end

      def self.const201; CS_CONST201; end
      def self.const202; CS_CONST202; end
      def self.const203; CS_CONST203; end
      def self.const204; CS_CONST204; end
      def self.const205; CS_CONST205; end
      def self.const212; CS_CONST212; end
      def self.const213; CS_CONST213; end

      def const201; CS_CONST201; end
      def const202; CS_CONST202; end
      def const203; CS_CONST203; end
      def const204; CS_CONST204; end
      def const205; CS_CONST205; end
      def const213; CS_CONST213; end
    end

    def self.const201; CS_CONST201; end
  end

  class ContainerB::ChildB
    def self.const214; CS_CONST214; end
  end

  class ::Object
    module ConstantSpecs
      class ContainerB
        class ChildB
          def self.const211; CS_CONST211; end
        end
      end
    end
  end

  # Constants
  CS_CONST2 = :const2   # only defined here
  CS_CONST17 = :const17_1

  class << self
    CS_CONST14 = :const14_2
  end

  # Singleton
  a = ClassA.new
  def a.const17; CS_CONST17; end
  CS_CONST18 = a

  b = ClassB.new
  def b.const207; CS_CONST207; end
  CS_CONST208 = b

  # Methods
  def self.get_const; self; end

  def const10; CS_CONST10; end

  class ClassC
    CS_CONST1 = 1

    class ClassE
      CS_CONST2 = 2
    end
  end

  class ClassD < ClassC
  end

  CS_PRIVATE = :cs_private
  private_constant :CS_PRIVATE
end

include ConstantSpecs::ModuleA
