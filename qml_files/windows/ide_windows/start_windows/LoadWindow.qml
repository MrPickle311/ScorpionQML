import QtQuick 2.12
import QtQuick.Controls 2.12

ApplicationWindow
{
    title: "New File Creator"
    width: 400
    height: 400
    visible: true
    color: "#0a86b3"

    DelayButton {
        id: delayButton
        x: 152
        y: 62
        text: qsTr("TRASIA 5PALCZASTA")
    }

    Button {
        onClicked: button.color = "purple"
        id: button
        x: 139
        y: 164
        text: qsTr("REKUM KUM")
    }
}
