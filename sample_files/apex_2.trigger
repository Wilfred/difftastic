/**
 * @description diffstatic test file
 */
public with sharing class MyClass extends OtherClass implements MyInterface {
    private static final Integer A_CONSTANT = 0;

    public void doSomething(Object param1, Object param2) {
        System.debug('Hello world!');
    }
}
