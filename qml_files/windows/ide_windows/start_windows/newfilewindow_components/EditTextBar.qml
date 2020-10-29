import QtQuick 2.12
import QtQuick.Controls 2.12

Rectangle
{
    width: 60
    height: 20
    radius: 0
    border.width: 0
    gradient: Gradient {
        GradientStop {
            position: 0
            color: "#ffffffff"
        }

        GradientStop {
            position: 1
            color: "#c7c0c0"
        }
    }
    TextEdit
    {
        id : textEdit
        anchors.fill: parent
        selectByMouse: true
        anchors.rightMargin: 2
        anchors.leftMargin: 2
        anchors.bottomMargin: 4
        anchors.topMargin: 4

    }
}
