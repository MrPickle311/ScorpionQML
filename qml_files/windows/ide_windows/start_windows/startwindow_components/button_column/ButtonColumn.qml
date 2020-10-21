import QtQuick.Window 2.15
import QtQuick 2.15
import QtQuick.Controls 2.12

Rectangle
{
    Component.onCompleted: ButtonsCollumnManager.exit()
    id: rectangle
    color: "#117fa6"
    Row
    {
        id: newRow
        x: 91
        width: 268
        height: 49
        anchors.top: parent.top
        anchors.topMargin: 30
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter

        NewButton
        {
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

    Row
    {
        id: exitRow
        x: newRow.x
        width: newRow.width
        height: newRow.height
        anchors.top: continoueWithoutCodeRow.bottom
        anchors.topMargin: 15

        ExitButton
        {
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

    Row
    {
        id: continoueWithoutCodeRow
        x: newRow.x
        width: newRow.width
        height: newRow.height
        anchors.top: loadRow.bottom
        anchors.topMargin: 15

        ContinueWithoutCodeButton {
            id: continueWithoutCodeButton
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

    Row
    {
        id: loadRow
        x: newRow.x
        width: newRow.width
        height: newRow.height
        anchors.top: newRow.bottom
        anchors.topMargin: 15

        LoadButton {
            id: loadButton
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.rightMargin: 30
            anchors.leftMargin: 30
            anchors.topMargin: 5
            anchors.bottomMargin: 5
        }
    }

}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
