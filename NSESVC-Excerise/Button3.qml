import QtQuick 2.0


Rectangle{
    width: 80; height : 50; color: "#008000"
    x: 200; y:10
    Text {
        id: text1
        text: qsTr("Undo")
        x:30; y:20
        clip: true
    }
}
