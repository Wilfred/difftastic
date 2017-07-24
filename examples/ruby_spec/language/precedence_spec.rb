require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/precedence', __FILE__)

# Specifying the behavior of operators in combination could
# lead to combinatorial explosion. A better way seems to be
# to use a technique from formal proofs that involve a set of
# equivalent statements. Suppose you have statements A, B, C.
# If they are claimed to be equivalent, this can be shown by
# proving that A implies B, B implies C, and C implies A.
# (Actually any closed circuit of implications.)
#
# Here, we can use a similar technique where we show starting
# at the top that each level of operator has precedence over
# the level below (as well as showing associativity within
# the precedence level).

=begin
Excerpted from 'Programming Ruby: The Pragmatic Programmer's Guide'
Second Edition by Dave Thomas, Chad Fowler, and Andy Hunt, page 324

Table 22.4. Ruby operators (high to low precedence)
Method   Operator                  Description
-----------------------------------------------------------------------
         :: .
 x*      [ ] [ ]=                  Element reference, element set
 x       **                        Exponentiation
 x       ! ~ + -                   Not, complement, unary plus and minus
                                   (method names for the last two are +@ and -@)
 x       * / %                     Multiply, divide, and modulo
 x       + -                       Plus and minus
 x       >> <<                     Right and left shift
 x       &                         “And” (bitwise for integers)
 x       ^ |                       Exclusive “or” and regular “or” (bitwise for integers)
 x       <= < > >=                 Comparison operators
 x       <=> == === != =~ !~       Equality and pattern match operators (!=
                                   and !~ may not be defined as methods)
         &&                        Logical “and”
         ||                        Logical “or”
         .. ...                    Range (inclusive and exclusive)
         ? :                       Ternary if-then-else
         = %= /= -= += |= &=       Assignment
         >>= <<= *= &&= ||= **=
         defined?                  Check if symbol defined
         not                       Logical negation
         or and                    Logical composition
         if unless while until     Expression modifiers
         begin/end                 Block expression
-----------------------------------------------------------------------

* Operators marked with 'x' in the Method column are implemented as methods
and can be overridden (except != and !~ as noted). (But see the specs
below for implementations that define != and !~ as methods.)

** These are not included in the excerpted table but are shown here for
completeness.
=end

# -----------------------------------------------------------------------
# It seems that this table is not correct anymore
# The correct table derived from MRI's parse.y is as follows:
#
# Operator              Assoc    Description
#---------------------------------------------------------------
# ! ~ +                   >      Not, complement, unary plus
# **                      >      Exponentiation
# -                       >      Unary minus
# * / %                   <      Multiply, divide, and modulo
# + -                     <      Plus and minus
# >> <<                   <      Right and left shift
# &                       <      “And” (bitwise for integers)
# ^ |                     <      Exclusive “or” and regular “or” (bitwise for integers)
# <= < > >=               <      Comparison operators
# <=> == === != =~ !~     no     Equality and pattern match operators (!=
#                                and !~ may not be defined as methods)
# &&                      <      Logical “and”
# ||                      <      Logical “or”
# .. ...                  no     Range (inclusive and exclusive)
# ? :                     >      Ternary if-then-else
# rescue                  <      Rescue modifier
# = %= /= -= += |= &=     >      Assignment
# >>= <<= *= &&= ||= **=
# defined?                no     Check if symbol defined
# not                     >      Logical negation
# or and                  <      Logical composition
# if unless while until   no     Expression modifiers
# -----------------------------------------------------------------------
#
# [] and []= seem to fall out of here, as well as begin/end
#

# TODO: Resolve these two tables with actual specs. As the comment at the
# top suggests, these specs need to be reorganized into a single describe
# block for each operator. The describe block should include an example
# for associativity (if relevant), an example for any short circuit behavior
# (e.g. &&, ||, etc.) and an example block for each operator over which the
# instant operator has immediately higher precedence.

describe "Operators" do
  it "! ~ + is right-associative" do
    (!!true).should == true
    (~~0).should == 0
    (++2).should == 2
  end

  it "** is right-associative" do
    (2**2**3).should == 256
  end

  it "** has higher precedence than unary minus" do
    (-2**2).should == -4
  end

  it "unary minus is right-associative" do
    (--2).should == 2
  end

  it "unary minus has higher precedence than * / %" do
    class UnaryMinusTest; def -@; 50; end; end
    b = UnaryMinusTest.new

    (-b * 5).should == 250
    (-b / 5).should == 10
    (-b % 7).should == 1
  end

  it "treats +/- as a regular send if the arguments are known locals or block locals" do
    a = PrecedenceSpecs::NonUnaryOpTest.new
    a.add_num(1).should == [3]
    a.sub_num(1).should == [1]
    a.add_str.should == ['11']
    a.add_var.should == [2]
  end

  it "* / % are left-associative" do
    (2*1/2).should == (2*1)/2
    # Guard against the Mathn library
    # TODO: Make these specs not rely on specific behaviour / result values
    # by using mocks.
    conflicts_with :Prime do
      (2*1/2).should_not == 2*(1/2)
    end

    (10/7/5).should == (10/7)/5
    (10/7/5).should_not == 10/(7/5)

    (101 % 55 % 7).should == (101 % 55) % 7
    (101 % 55 % 7).should_not == 101 % (55 % 7)

    (50*20/7%42).should == ((50*20)/7)%42
    (50*20/7%42).should_not == 50*(20/(7%42))
  end

  it "* / % have higher precedence than + -" do
    (2+2*2).should == 6
    (1+10/5).should == 3
    (2+10%5).should == 2

    (2-2*2).should == -2
    (1-10/5).should == -1
    (10-10%4).should == 8
  end

  it "+ - are left-associative" do
    (2-3-4).should == -5
    (4-3+2).should == 3

    binary_plus = Class.new(String) do
      alias_method :plus, :+
      def +(a)
        plus(a) + "!"
      end
    end
    s = binary_plus.new("a")

    (s+s+s).should == (s+s)+s
    (s+s+s).should_not == s+(s+s)
  end

  it "+ - have higher precedence than >> <<" do
    (2<<1+2).should == 16
    (8>>1+2).should == 1
    (4<<1-3).should == 1
    (2>>1-3).should == 8
  end

  it ">> << are left-associative" do
    (1 << 2 << 3).should == 32
    (10 >> 1 >> 1).should == 2
    (10 << 4 >> 1).should == 80
  end

  it ">> << have higher precedence than &" do
    (4 & 2 << 1).should == 4
    (2 & 4 >> 1).should == 2
  end

  it "& is left-associative" do
    class BitwiseAndTest; def &(a); a+1; end; end
    c = BitwiseAndTest.new

    (c & 5 & 2).should == (c & 5) & 2
    (c & 5 & 2).should_not == c & (5 & 2)
  end

  it "& has higher precedence than ^ |" do
    (8 ^ 16 & 16).should == 24
    (8 | 16 & 16).should == 24
  end

  it "^ | are left-associative" do
    class OrAndXorTest; def ^(a); a+10; end; def |(a); a-10; end; end
    d = OrAndXorTest.new

    (d ^ 13 ^ 16).should == (d ^ 13) ^ 16
    (d ^ 13 ^ 16).should_not == d ^ (13 ^ 16)

    (d | 13 | 4).should == (d | 13) | 4
    (d | 13 | 4).should_not == d | (13 | 4)
  end

  it "^ | have higher precedence than <= < > >=" do
    (10 <= 7 ^ 7).should == false
    (10 < 7 ^ 7).should == false
    (10 > 7 ^ 7).should == true
    (10 >= 7 ^ 7).should == true
    (10 <= 7 | 7).should == false
    (10 < 7 | 7).should == false
    (10 > 7 | 7).should == true
    (10 >= 7 | 7).should == true
  end

  it "<= < > >= are left-associative" do
    class ComparisonTest
      def <=(a); 0; end;
      def <(a);  0; end;
      def >(a);  0; end;
      def >=(a); 0; end;
    end

    e = ComparisonTest.new

    (e <= 0 <= 1).should == (e <= 0) <= 1
    (e <= 0 <= 1).should_not == e <= (0 <= 1)

    (e < 0 < 1).should == (e < 0) < 1
    (e < 0 < 1).should_not == e < (0 < 1)

    (e >= 0 >= 1).should == (e >= 0) >= 1
    (e >= 0 >= 1).should_not == e >= (0 >= 1)

    (e > 0 > 1).should == (e > 0) > 1
    (e > 0 > 1).should_not == e > (0 > 1)
  end

  it "<=> == === != =~ !~ are non-associative" do
    lambda { eval("1 <=> 2 <=> 3")  }.should raise_error(SyntaxError)
    lambda { eval("1 == 2 == 3")  }.should raise_error(SyntaxError)
    lambda { eval("1 === 2 === 3")  }.should raise_error(SyntaxError)
    lambda { eval("1 != 2 != 3")  }.should raise_error(SyntaxError)
    lambda { eval("1 =~ 2 =~ 3")  }.should raise_error(SyntaxError)
    lambda { eval("1 !~ 2 !~ 3")  }.should raise_error(SyntaxError)
  end

  it "<=> == === != =~ !~ have higher precedence than &&" do
    (false && 2 <=> 3).should == false
    (false && 3 == false).should == false
    (false && 3 === false).should == false
    (false && 3 != true).should == false

    class FalseClass; def =~(o); o == false; end; end
    (false && true =~ false).should == (false && (true =~ false))
    (false && true =~ false).should_not == ((false && true) =~ false)
    class FalseClass; undef_method :=~; end

    (false && true !~ true).should == false
  end

  # XXX: figure out how to test it
  # (a && b) && c equals to a && (b && c) for all a,b,c values I can imagine so far
  it "&& is left-associative"

  it "&& has higher precedence than ||" do
    (true || false && false).should == true
  end

  # XXX: figure out how to test it
  it "|| is left-associative"

  it "|| has higher precedence than .. ..." do
    (1..false||10).should == (1..10)
    (1...false||10).should == (1...10)
  end

  it ".. ... are non-associative" do
    lambda { eval("1..2..3")  }.should raise_error(SyntaxError)
    lambda { eval("1...2...3")  }.should raise_error(SyntaxError)
  end

# XXX: this is commented now due to a bug in compiler, which cannot
# distinguish between range and flip-flop operator so far. zenspider is
# currently working on a new lexer, which will be able to do that.
# As soon as it's done, these piece should be reenabled.
#
#  it ".. ... have higher precedence than ? :" do
#    (1..2 ? 3 : 4).should == 3
#    (1...2 ? 3 : 4).should == 3
#  end

  it "? : is right-associative" do
    (true ? 2 : 3 ? 4 : 5).should == 2
  end

  def oops; raise end

  it "? : has higher precedence than rescue" do
    (true ? oops : 0 rescue 10).should == 10
  end

  # XXX: figure how to test it (problem similar to || associativity)
  it "rescue is left-associative"

  it "rescue has higher precedence than =" do
    a = oops rescue 10
    a.should == 10

    # rescue doesn't have the same sense for %= /= and friends
  end

  it "= %= /= -= += |= &= >>= <<= *= &&= ||= **= are right-associative" do
    a = b = 10
    a.should == 10
    b.should == 10

    a = b = 10
    a %= b %= 3
    a.should == 0
    b.should == 1

    a = b = 10
    a /= b /= 2
    a.should == 2
    b.should == 5

    a = b = 10
    a -= b -= 2
    a.should == 2
    b.should == 8

    a = b = 10
    a += b += 2
    a.should == 22
    b.should == 12

    a,b = 32,64
    a |= b |= 2
    a.should == 98
    b.should == 66

    a,b = 25,13
    a &= b &= 7
    a.should == 1
    b.should == 5

    a,b=8,2
    a >>= b >>= 1
    a.should == 4
    b.should == 1

    a,b=8,2
    a <<= b <<= 1
    a.should == 128
    b.should == 4

    a,b=8,2
    a *= b *= 2
    a.should == 32
    b.should == 4

    a,b=10,20
    a &&= b &&= false
    a.should == false
    b.should == false

    a,b=nil,nil
    a ||= b ||= 10
    a.should == 10
    b.should == 10

    a,b=2,3
    a **= b **= 2
    a.should == 512
    b.should == 9
  end

  it "= %= /= -= += |= &= >>= <<= *= &&= ||= **= have higher precedence than defined? operator" do
    (defined? a =   10).should == "assignment"
    (defined? a %=  10).should == "assignment"
    (defined? a /=  10).should == "assignment"
    (defined? a -=  10).should == "assignment"
    (defined? a +=  10).should == "assignment"
    (defined? a |=  10).should == "assignment"
    (defined? a &=  10).should == "assignment"
    (defined? a >>= 10).should == "assignment"
    (defined? a <<= 10).should == "assignment"
    (defined? a *=  10).should == "assignment"
    (defined? a &&= 10).should == "assignment"
    (defined? a ||= 10).should == "assignment"
    (defined? a **= 10).should == "assignment"
  end

  # XXX: figure out how to test it
  it "defined? is non-associative"

  it "defined? has higher precedence than not" do
    # does it have sense?
    (not defined? qqq).should == true
  end

  it "not is right-associative" do
    (not not false).should == false
    (not not 10).should == true
  end

  it "not has higher precedence than or/and" do
    (not false and false).should == false
    (not false or true).should == true
  end

  # XXX: figure out how to test it
  it "or/and are left-associative"

  it "or/and have higher precedence than if unless while until modifiers" do
    (1 if 2 and 3).should == 1
    (1 if 2 or 3).should == 1

    (1 unless false and true).should == 1
    (1 unless false or false).should == 1

    (1 while true and false).should == nil    # would hang upon error
    (1 while false or false).should == nil

    ((raise until true and false) rescue 10).should == 10
    (1 until false or true).should == nil    # would hang upon error
  end

  # XXX: it seems to me they are right-associative
  it "if unless while until are non-associative"
end
