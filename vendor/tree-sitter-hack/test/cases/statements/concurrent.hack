concurrent {
  await func1();
  await func2();
}

concurrent {
  await func1();
  await async {
    await func2();
  };
}
