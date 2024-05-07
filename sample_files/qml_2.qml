// Taken from https://doc.qt.io/qt-6/qmlapplications.html
import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    width: 400
    height: 400
    visible: true

    Button {
        id: button
        hoverEnabled: true
        text: "A Special Button"
        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            color: {
                if (button.down || button.hovered) {
                    "#d6d6d6"
                } else {
                    "#f6f6f6"
                }
            }
            border.color: "#26282a"
            border.width: button.down ? 2 : 1
            radius: 4
        }
    }
}
