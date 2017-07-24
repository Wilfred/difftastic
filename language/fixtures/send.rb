module LangSendSpecs
  module_function

  def fooM0; 100 end
  def fooM1(a); [a]; end
  def fooM2(a,b); [a,b]; end
  def fooM3(a,b,c); [a,b,c]; end
  def fooM4(a,b,c,d); [a,b,c,d]; end
  def fooM5(a,b,c,d,e); [a,b,c,d,e]; end
  def fooM0O1(a=1); [a]; end
  def fooM1O1(a,b=1); [a,b]; end
  def fooM2O1(a,b,c=1); [a,b,c]; end
  def fooM3O1(a,b,c,d=1); [a,b,c,d]; end
  def fooM4O1(a,b,c,d,e=1); [a,b,c,d,e]; end
  def fooM0O2(a=1,b=2); [a,b]; end
  def fooM0R(*r); r; end
  def fooM1R(a, *r); [a, r]; end
  def fooM0O1R(a=1, *r); [a, r]; end
  def fooM1O1R(a, b=1, *r); [a, b, r]; end

  def one(a); a; end
  def oneb(a,&b); [a,yield(b)]; end
  def twob(a,b,&c); [a,b,yield(c)]; end
  def makeproc(&b) b end

  def yield_now; yield; end

  def double(x); x * 2 end
  def weird_parens
    # means double((5).to_s)
    # NOT   (double(5)).to_s
    double (5).to_s
  end

  def rest_len(*a); a.size; end

  def self.twos(a,b,*c)
    [c.size, c.last]
  end

  class PrivateSetter
    attr_reader :foo
    attr_writer :foo
    private :foo=

      def call_self_foo_equals(value)
        self.foo = value
      end

    def call_self_foo_equals_masgn(value)
      a, self.foo = 1, value
    end
  end

  class PrivateGetter
    attr_reader :foo
    private :foo

    def call_self_foo
      self.foo
    end

    def call_self_foo_or_equals(value)
      self.foo ||= 6
    end
  end

  class AttrSet
    attr_reader :result
    def []=(a, b, c, d); @result = [a,b,c,d]; end
  end

  class ToProc
    def initialize(val)
      @val = val
    end

    def to_proc
      Proc.new { @val }
    end
  end

  class ToAry
    def initialize(obj)
      @obj = obj
    end

    def to_ary
      @obj
    end
  end

  class MethodMissing
    def initialize
      @message = nil
      @args = nil
    end

    attr_reader :message, :args

    def method_missing(m, *a)
      @message = m
      @args = a
    end
  end

  class Attr19Set
    attr_reader :result
    def []=(*args); @result = args; end
  end

  module_function

  def fooR(*r); r; end
  def fooM0RQ1(*r, q); [r, q]; end
  def fooM0RQ2(*r, s, q); [r, s, q]; end
  def fooM1RQ1(a, *r, q); [a, r, q]; end
  def fooM1O1RQ1(a, b=9, *r, q); [a, b, r, q]; end
  def fooM1O1RQ2(a, b=9, *r, q, t); [a, b, r, q, t]; end

  def fooO1Q1(a=1, b); [a,b]; end
  def fooM1O1Q1(a,b=2,c); [a,b,c]; end
  def fooM2O1Q1(a,b,c=3,d); [a,b,c,d]; end
  def fooM2O2Q1(a,b,c=3,d=4,e); [a,b,c,d,e]; end
  def fooO4Q1(a=1,b=2,c=3,d=4,e); [a,b,c,d,e]; end
  def fooO4Q2(a=1,b=2,c=3,d=4,e,f); [a,b,c,d,e,f]; end

  def destructure2((a,b)); a+b; end
  def destructure2b((a,b)); [a,b]; end
  def destructure4r((a,b,*c,d,e)); [a,b,c,d,e]; end
  def destructure4o(a=1,(b,c),d,&e); [a,b,c,d]; end
  def destructure5o(a=1, f=2, (b,c),d,&e); [a,f,b,c,d]; end
  def destructure7o(a=1, f=2, (b,c),(d,e), &g); [a,f,b,c,d,e]; end
  def destructure7b(a=1, f=2, (b,c),(d,e), &g); g.call([a,f,b,c,d,e]); end
  def destructure4os(a=1,(b,*c)); [a,b,c]; end
end

def lang_send_rest_len(*a)
  a.size
end
