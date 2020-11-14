import QtQuick 2.12
import QtQuick.Controls 2.12

Button
{
    text: "Exit"
    enabled: true
    onClicked:{
        ButtonsCollumnManager.exit()
    }


}
