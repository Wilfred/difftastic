import QtQuick

Item {
    signal foo(int name0, name1: MyType)
    // <- keyword
    //     ^ function.signal
    //         ^ type
    //             ^ variable.parameter
    //                    ^ variable.parameter
    //                           ^ type

    function bar(name: string) : MyType {
        // <- keyword
        //   ^ function
        //       ^ variable.parameter
        //             ^ type.builtin
        //                       ^ type
    }
}
