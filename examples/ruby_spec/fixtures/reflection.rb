# These modules and classes are fixtures used by the Ruby reflection specs.
# These include specs for methods:
#
# Module:
#   instance_methods
#   public_instance_methods
#   protected_instance_methods
#   private_instance_methods
#
# Kernel:
#   methods
#   public_methods
#   protected_methods
#   private_methods
#   singleton_methods
#
# The following naming scheme is used to keep the method names short and still
# communicate the relevant facts about the methods:
#
#   X[s]_VIS
#
# where
#
#   X is the name of the module or class in lower case
#   s is the literal character 's' for singleton methods
#   VIS is the first three letters of the corresponding visibility
#   pub(lic), pro(tected), pri(vate)
#
# For example:
#
#   l_pub is a public method on module L
#   ls_pri is a private singleton method on module L

module ReflectSpecs
  # An object with no singleton methods.
  def self.o
    mock("Object with no singleton methods")
  end

  # An object with singleton methods.
  def self.os
    obj = mock("Object with singleton methods")
    class << obj
      def os_pub; :os_pub; end

      def os_pro; :os_pro; end
      protected :os_pro

      def os_pri; :os_pri; end
      private :os_pri
    end
    obj
  end

  # An object extended with a module.
  def self.oe
    obj = mock("Object extended")
    obj.extend M
    obj
  end

  # An object with duplicate methods extended with a module.
  def self.oed
    obj = mock("Object extended")
    obj.extend M

    class << obj
      def pub; :pub; end

      def pro; :pro; end
      protected :pro

      def pri; :pri; end
      private :pri
    end

    obj
  end

  # An object extended with two modules.
  def self.oee
    obj = mock("Object extended twice")
    obj.extend M
    obj.extend N
    obj
  end

  # An object extended with a module including a module.
  def self.oei
    obj = mock("Object extended, included")
    obj.extend N
    obj
  end

  # A simple module.
  module L
    class << self
      def ls_pub; :ls_pub; end

      def ls_pro; :ls_pro; end
      protected :ls_pro

      def ls_pri; :ls_pri; end
      private :ls_pri
    end

    def l_pub; :l_pub; end

    def l_pro; :l_pro; end
    protected :l_pro

    def l_pri; :l_pri; end
    private :l_pri
  end

  # A module with no singleton methods.
  module K
  end

  # A simple module.
  module M
    class << self
      def ms_pub; :ms_pub; end

      def ms_pro; :ms_pro; end
      protected :ms_pro

      def ms_pri; :ms_pri; end
      private :ms_pri
    end

    def m_pub; :m_pub; end

    def m_pro; :m_pro; end
    protected :m_pro

    def m_pri; :m_pri; end
    private :m_pri

    def pub; :pub; end

    def pro; :pro; end
    protected :pro

    def pri; :pri; end
    private :pri
  end

  # A module including a module
  module N
    include M

    class << self
      def ns_pub; :ns_pub; end

      def ns_pro; :ns_pro; end
      protected :ns_pro

      def ns_pri; :ns_pri; end
      private :ns_pri
    end

    def n_pub; :n_pub; end

    def n_pro; :n_pro; end
    protected :n_pro

    def n_pri; :n_pri; end
    private :n_pri
  end

  # A simple class.
  class A
    class << self
      def as_pub; :as_pub; end

      def as_pro; :as_pro; end
      protected :as_pro

      def as_pri; :as_pri; end
      private :as_pri

      def pub; :pub; end

      def pro; :pro; end
      protected :pro

      def pri; :pri; end
      private :pri
    end

    def a_pub; :a_pub; end

    def a_pro; :a_pro; end
    protected :a_pro

    def a_pri; :a_pri; end
    private :a_pri
  end

  # A simple subclass.
  class B < A
    class << self
      def bs_pub; :bs_pub; end

      def bs_pro; :bs_pro; end
      protected :bs_pro

      def bs_pri; :bs_pri; end
      private :bs_pri

      def pub; :pub; end

      def pro; :pro; end
      protected :pro

      def pri; :pri; end
      private :pri
    end

    def b_pub; :b_pub; end

    def b_pro; :b_pro; end
    protected :b_pro

    def b_pri; :b_pri; end
    private :b_pri
  end

  # A subclass including a module.
  class C < A
    include M

    class << self
      def cs_pub; :cs_pub; end

      def cs_pro; :cs_pro; end
      protected :cs_pro

      def cs_pri; :cs_pri; end
      private :cs_pri

      def pub; :pub; end

      def pro; :pro; end
      protected :pro

      def pri; :pri; end
      private :pri
    end

    def c_pub; :c_pub; end

    def c_pro; :c_pro; end
    protected :c_pro

    def c_pri; :c_pri; end
    private :c_pri
  end

  # A simple class including a module
  class D
    include M

    class << self
      def ds_pub; :ds_pub; end

      def ds_pro; :ds_pro; end
      protected :ds_pro

      def ds_pri; :ds_pri; end
      private :ds_pri
    end

    def d_pub; :d_pub; end

    def d_pro; :d_pro; end
    protected :d_pro

    def d_pri; :d_pri; end
    private :d_pri

    def pub; :pub; end

    def pro; :pro; end
    protected :pro

    def pri; :pri; end
    private :pri
  end

  # A subclass of a class including a module.
  class E < D
    class << self
      def es_pub; :es_pub; end

      def es_pro; :es_pro; end
      protected :es_pro

      def es_pri; :es_pri; end
      private :es_pri
    end

    def e_pub; :e_pub; end

    def e_pro; :e_pro; end
    protected :e_pro

    def e_pri; :e_pri; end
    private :e_pri

    def pub; :pub; end

    def pro; :pro; end
    protected :pro

    def pri; :pri; end
    private :pri
  end

  # A subclass that includes a module of a class including a module.
  class F < D
    include L

    class << self
      def fs_pub; :fs_pub; end

      def fs_pro; :fs_pro; end
      protected :fs_pro

      def fs_pri; :fs_pri; end
      private :fs_pri
    end

    def f_pub; :f_pub; end

    def f_pro; :f_pro; end
    protected :f_pro

    def f_pri; :f_pri; end
    private :f_pri
  end

  # Class with no singleton methods.
  class O
  end

  # Class extended with a module.
  class P
  end
  P.extend M
end
