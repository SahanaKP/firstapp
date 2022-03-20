import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Component{
        id : c1
        Rectangle{width: parent.width ; height : 80;color:"Blue"
        RowLayout{
            anchors.fill : parent
            Text{
                id: t1
                text : index
                Layout.minimumWidth: 100
            }
            Text{
                id: t2
                text : Name
                Layout.minimumWidth: 100
            }
            Text{
                id: t3
                text : PhoneNo
                Layout.minimumWidth: 100
            }
        }
    }
}
    ListModel {
        id:contactmodel

        ListElement{Name : "Sahana" ; PhoneNo: "9148971571"}
        ListElement{Name : "Sachin" ; PhoneNo: "9110895417"}
        ListElement{Name : "Bhavana" ; PhoneNo: "9108976541"}
        ListElement{Name : "Chetan" ; PhoneNo: "9008765431"}
        ListElement{Name : "Swathi" ; PhoneNo: "9234560912"}

    }

    ColumnLayout{
        anchors.fill : parent


        ListView{
            id: listview
            spacing : 10
            width : parent.width ; height : parent.height - 100
            model : contactmodel
            delegate: c1
        }
        RowLayout{
            Layout.topMargin:  400
            Button{
                text : "Insert" ; onClicked: insertContactList();
            }
            Button{
                text : "Print" ; onClicked: printContactList();
            }
            Button{
                text : "Remove" ; onClicked: removeContactList();
            }
        }
    }
        function insertContactList(){
            console.log("Adding contact list")
            var add = {Name : "Darshan" , PhoneNo : "7865544320"}
            contactmodel.insert(3,add)
        }
        function printContactList(){
            console.log ("Printing contact list");
            for(var i=0;i<contactmodel.count;i++){
                var list = contactmodel.get(i);
                console.log("Contact name"+ list.Name + "PhoneNo"+list.PhoneNo);
            }
        }

        function removeContactList(){
            console.log("removing contact list")
            contactmodel.remove(3,1)
        }
    }

