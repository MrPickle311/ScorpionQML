import QtQuick.Window 2.15
import QtQuick 2.15
import QtQuick.Controls 2.12

Rectangle
{
    id: rectangle
    color: "#117fa6"
    Row {
        id: newRow
        x: 91
        width: 268
        height: 49
        anchors.top: parent.top
        anchors.topMargin: 30
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter

        NewButton {
            id: newButton
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.topMargin: 5
            anchors.bottomMargin: 5
            anchors.leftMargin: 30
            anchors.rightMargin: 30
        }
    }

    Row {
        id: exitRow
        x: newRow.x
        width: newRow.width
        height: newRow.height
        anchors.top: newRow.bottom
        anchors.topMargin: 15

        ExitButton {
            id: exitButton
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.topMargin: 5
            anchors.leftMargin: 30
            anchors.rightMargin: 30
            anchors.bottomMargin: 5
        }
    }

}
