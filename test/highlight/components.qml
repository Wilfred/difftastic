import QtQuick

Item {
    id: root

    component MyItem : Item {}
    // <- keyword
    //        ^ type   ^ type

    Component {
        // <- type
        id: component
        //  ^ variable
        Item {}
    }

    function foo() {
        let component = null;
        //  ^ variable
    }
}
