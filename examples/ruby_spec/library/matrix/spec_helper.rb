class BeCloseToMatrixMatcher
  def initialize(expected, tolerance = TOLERANCE)
    SpecExpectation.matcher! rescue "Used with the balance_should_and_match branch of mspec"
    @expected = Matrix[*expected]
    @tolerance = tolerance
  end

  def matches?(actual)
    @actual = actual
    return false unless @actual.is_a? Matrix
    return false unless @actual.row_size == @expected.row_size
    @actual.row_size.times do |i|
      a, e = @actual.row(i), @expected.row(i)
      return false unless a.size == e.size
      a.size.times do |j|
        return false unless (a[j] - e[j]).abs < @tolerance
      end
    end
    true
  end

  def failure_message
    ["Expected #{@expected}", "to be within +/- #{@tolerance} of #{@actual}"]
  end

  def negative_failure_message
    ["Expected #{@expected}", "not to be within +/- #{@tolerance} of #{@actual}"]
  end
end

class Object
  def be_close_to_matrix(expected, tolerance = TOLERANCE)
    BeCloseToMatrixMatcher.new(expected, tolerance)
  end
end
