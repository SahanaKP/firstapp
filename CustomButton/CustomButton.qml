import QtQuick 2.15
import QtQuick.Controls 2.0
import QtQuick.Window 2.15
import QtQuick.Layouts 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    RowLayout{
        QButton{
            text: "Customize"
            onClicked: {
                console.log("Button clicked")
            }
        }

        Q_Label{
            text:"behave_button"
            onClicked:{
                console.log("Label clicked")
            }
            onPressed_1: {
                 console.log("Label pressed")
            }
        }
    }
}
