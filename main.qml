import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12

ApplicationWindow
{
    width: 640
    height: 480
    visible: true
    color: "black"
    Component.onCompleted: console.log("HELLO!")
    title: qsTr("Hello World")
}