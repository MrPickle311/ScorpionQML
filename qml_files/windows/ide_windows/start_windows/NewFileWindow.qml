import QtQuick 2.12
import QtQuick.Controls 2.12
import "newfilewindow_components" as Components

ApplicationWindow
{
    id : newFileWindowBase
//    MouseArea
//    {
//        id : mouseRegion
//        anchors.fill: parent
//        property variant clickPos: "1,1"
//        onPressed: clickPos = Qt.point(mouseX,mouseY)

//        onPositionChanged: {
//            var delta = Qt.point(mouse.x-clickPos.x, mouse.y-clickPos.y)
//            rootWindow.x
//            rootWindow.y
//        }
//    }
    width: 450
    minimumHeight: height
    maximumHeight: height
    minimumWidth: width
    maximumWidth: width
    height: 200
    visible: true
    color: "#a4c7ec"
    //flags: "FramelessWindowHint"
    Components.EditTextBar
    {
        id: dirText
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.rightMargin: 113
        anchors.leftMargin: 17
        anchors.bottomMargin: 128
        anchors.topMargin: 52
        //textEdit.font.pixelSize: 12
    }

    TextEdit
    {

    }
    Button
    {
        id: browseButton
        anchors.left: dirText.right
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.topMargin: 50
        anchors.bottomMargin: 126
        anchors.rightMargin: 20
        anchors.leftMargin: 15
        text: qsTr("Browse")
    }

    Button
    {
        id: createButton
        text: qsTr("Create")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.topMargin: 162
        anchors.bottomMargin: 13
        anchors.leftMargin: 330
        anchors.rightMargin: 20
    }

    Button {
        id: backButton
        onClicked: close()
        text: qsTr("Back")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.rightMargin: 333
        anchors.leftMargin: 17
        anchors.bottomMargin: 13
        anchors.topMargin: 162
    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:1.3300000429153442}
}
##^##*/
