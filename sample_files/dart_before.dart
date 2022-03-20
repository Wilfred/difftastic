void test() {
    if (x) {
        Object().a().b();
    }

    expect(a.b(c.d()).x);
}
