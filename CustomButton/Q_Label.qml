import QtQuick 2.0
import QtQuick.Controls 2.0

Label{//inherits obj
    id: l1
    signal clicked()
    signal pressed_1()
    signal sendMe(int x)

    background: Rectangle{
        implicitWidth: 200; implicitHeight: 50
//        width:l1.width ; height: l1.height
        border.width: 2
        border.color: "green"
    }

   MouseArea{
       anchors.fill:parent
       onClicked: {l1.clicked()}
       onPressed : {pressed_1()}
       onPressAndHold: {sendMe(10);}
   }
}
