module BigDecimalSpecs
  # helper method to sure that the global limit is reset back
  def self.with_limit(l)
    old = BigDecimal.limit(l)
    yield
  ensure
    BigDecimal.limit(old)
  end

  def self.with_rounding(r)
    old = BigDecimal.mode(BigDecimal::ROUND_MODE)
    BigDecimal.mode(BigDecimal::ROUND_MODE, r)
    yield
  ensure
    BigDecimal.mode(BigDecimal::ROUND_MODE, old)
  end
end
