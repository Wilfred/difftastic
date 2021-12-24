import QtQuick

Item {
    id: root
    // <- property

    property MyItem myItem: MyItem {}
    // <- keyword
    //       ^ type
    //              ^ property

    component MyItem : Item {}
}
