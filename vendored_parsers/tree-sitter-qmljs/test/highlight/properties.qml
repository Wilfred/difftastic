import QtQuick

Item {
    id: root
    // <- property
    //  ^ variable.parameter

    property MyItem myItem: MyItem {}
    // <- keyword
    //       ^ type
    //              ^ property
    //                      ^ type

    readonly property int someNumber: 123
    // <- keyword
    //       ^ keyword
    //                ^ type
    //                    ^ property  ^ number

    required property var requiredData
    // <- keyword
    //       ^ keyword
    //                ^ type
    //                    ^ property

    property list<MyItem> myItems: [MyItem {}]
    // <- keyword
    //       ^ type ^ type
    //           ^ punctuation.bracket
    //                  ^ punctuation.bracket
    //                    ^ property
    //                              ^ type
    //                             ^ punctuation.bracket
    //                                       ^ punctuation.bracket

    default property list<QtObject> defaultProp
    // <- keyword
    //      ^ keyword
    //               ^ type
    //                   ^ punctuation.bracket
    //                            ^ punctuation.bracket
    //                    ^ type    ^ property

    component MyItem : Item {
        Behavior on x {
            // <- type
            //   ^ keyword
            //      ^ property
        }
    }

    component MyAnimation: NumberAnimation {
        required property
        // <- keyword
        //       ^ property
    }

    x: 123
    // ^ number

    Rectangle {
        anchors.fill: root
        //            ^ variable.parameter
    }
}
