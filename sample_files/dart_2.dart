void test() {
    Object()..a()..b();

    expect(a.b.c.d()!.x);
}
