import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    RowLayout{
        width : parent.width
        height:100

        Button{
          text: "New"
          Layout.fillWidth: true
          Layout.minimumWidth: 100
          Layout.maximumWidth: 150
        }
        Button{
          text: "save"
          Layout.fillWidth: true
          Layout.minimumWidth: 100
          Layout.maximumWidth: 250
        }
    }
}
