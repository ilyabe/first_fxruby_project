require 'test/unit'
require 'fox16'

include Fox

class TC_FXExtentd < Test::Unit::TestCase
  def test_lower_always_returns_same_instance
    e = FXExtentd.new(0, 1, 0, 1)
    assert_same e.lower, e.lower
  end
  
  def test_upper_always_returns_same_instance
    e = FXExtentd.new(0, 1, 0, 1)
    assert_same e.upper, e.upper
  end
  
  def test_index_always_returns_same_instance
    e = FXExtentd.new(0, 1, 0, 1)
    assert_same e[0], e[0]
  end
end
