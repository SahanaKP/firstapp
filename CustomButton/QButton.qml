import QtQuick 2.0
import QtQuick.Controls 2.0

//B_BUttion inherits Button

Button{
    id:b1
    background: Rectangle{
//        width:b1.width; height: b1.height

        implicitWidth: 200; implicitHeight: 50//
        color: "blue"

    }
    contentItem: Text{
//        text: "sahana"
        text: b1.text
        color: "white"
        font.pixelSize: 20
    }
}
