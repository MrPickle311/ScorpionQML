import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12

ApplicationWindow{
    height: 400
    width: 400
    visible: true
    onClosing : console.log("ok!")
}
