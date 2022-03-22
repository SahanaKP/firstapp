import QtQuick 2.0

Rectangle{
    width: 80; height : 50; color: "#008000"
    x: 310; y:10
    Text {
        id: text1
        text: qsTr("Size-4")
        x:10; y:20
        clip: true
    }
}
