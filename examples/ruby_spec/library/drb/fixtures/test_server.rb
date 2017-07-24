class TestServer
  def add(*args)
    args.inject {|n,v| n+v}
  end
  def add_yield(x)
    return (yield x)+1
  end
end
