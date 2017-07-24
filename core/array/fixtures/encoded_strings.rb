# encoding: utf-8
module ArraySpecs
  def self.array_with_usascii_and_7bit_utf8_strings
    [
      'foo'.force_encoding('US-ASCII'),
      'bar'
    ]
  end

  def self.array_with_usascii_and_utf8_strings
    [
      'foo'.force_encoding('US-ASCII'),
      'báz'
    ]
  end

  def self.array_with_7bit_utf8_and_usascii_strings
    [
      'bar',
      'foo'.force_encoding('US-ASCII')
    ]
  end

  def self.array_with_utf8_and_usascii_strings
    [
      'báz',
      'bar',
      'foo'.force_encoding('US-ASCII')
    ]
  end

  def self.array_with_usascii_and_utf8_strings
    [
      'foo'.force_encoding('US-ASCII'),
      'bar',
      'báz'
    ]
  end

  def self.array_with_utf8_and_7bit_ascii8bit_strings
    [
      'bar',
      'báz',
      'foo'.force_encoding('ASCII-8BIT')
    ]
  end

  def self.array_with_utf8_and_ascii8bit_strings
    [
      'bar',
      'báz',
      [255].pack('C').force_encoding('ASCII-8BIT')
    ]
  end

  def self.array_with_usascii_and_7bit_ascii8bit_strings
    [
      'bar'.force_encoding('US-ASCII'),
      'foo'.force_encoding('ASCII-8BIT')
    ]
  end

  def self.array_with_usascii_and_ascii8bit_strings
    [
      'bar'.force_encoding('US-ASCII'),
      [255].pack('C').force_encoding('ASCII-8BIT')
    ]
  end
end
