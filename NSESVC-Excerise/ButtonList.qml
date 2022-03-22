import QtQuick 2.0


Rectangle{
    width: 80; height : 50; color: "#FFA500"
    x: 20; y:10
    Text {
        id: text1
        text: qsTr("New")
        x:30; y:15
        clip: true
    }
}

