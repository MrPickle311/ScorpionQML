import QtQuick.Window 2.15
import QtQuick 2.15
import QtQuick.Controls 2.12
import "startwindow_components/button_column" as StartWindowComponents
import codes.windows.startwindows 1.0

ApplicationWindow
{

    height: 600
    width: 600
    visible: true
    id: applicationWindow
    minimumHeight: 350
    minimumWidth: 490
    Component.onCompleted:
    {
        ButtonsCollumnManager.exit()
    }

    Item
    {
        id: buttonColumn
        anchors.left: parent.left
        anchors.right: parent.horizontalCenter
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.bottomMargin: 10
        anchors.topMargin: 10

        StartWindowComponents.ButtonColumn {
            id: buttonColumn1
            color: "#0e8ab6"
            anchors.fill: parent
        }

    }

    Item
    {
        id: recentColumn
        anchors.left: buttonColumn.right
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.topMargin: 10
        anchors.bottomMargin: 10
        anchors.leftMargin: 21
        anchors.rightMargin: 10

        Rectangle
        {
            id: rectangle1
            color: "#0caae2"
            anchors.fill : parent
        }
    }

    onClosing:
    {

    }
}

