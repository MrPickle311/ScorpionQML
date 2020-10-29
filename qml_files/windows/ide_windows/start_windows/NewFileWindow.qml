import QtQuick 2.12
import QtQuick.Controls 2.12
import "newfilewindow_components" as Components

ApplicationWindow
{
    id: applicationWindow
    width: 450
    minimumHeight: height
    maximumHeight: height
    minimumWidth: width
    maximumWidth: width
    height: 200
    visible: true
    color: "#a4c7ec"
    flags: "FramelessWindowHint"
    Components.EditTextBar
    {
        id: dirText
        x: 17
        y: 52
        width: 320
        height: 20
        //textEdit.font.pixelSize: 12
    }

    TextEdit
    {

    }
    Button
    {
        id: browseButton
        anchors.left: dirText.right
        anchors.leftMargin: 15
        width: 78
        height: 25
        text: qsTr("Browse")
        anchors.verticalCenter: dirText.verticalCenter
    }

    Button
    {
        id: createButton
        x: 330
        y: 162
        height: 25
        text: qsTr("Create")
    }

    Button {
        id: backButton
        onClicked: close()
        x: 17
        y: 162
        width: 100
        height: 25
        text: qsTr("Back")
    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:1.3300000429153442}
}
##^##*/
