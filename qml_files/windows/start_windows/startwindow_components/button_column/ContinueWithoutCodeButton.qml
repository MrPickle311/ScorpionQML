import QtQuick 2.12
import QtQuick.Controls 2.12
import types.windows.startwindows 1.0

Button
{
    text: "Continue without code"
    onClicked: ButtonsCollumnManager.startMainWindowManager(Codes.WithoutCode)
}
