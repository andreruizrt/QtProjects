import QtQuick 2.5
import QtQuick.Controls 2.0
import QtGraphicalEffects.private 1.0

Rectangle {

    property string backgroundColor: "#006494"
    property string buttonColor: "247BA0"
    property string primaryTextColor: "#E8F1F2"
    property string secondaryTextColor: "#E8F1F6"
    property string buttonBorderColor: "#13293D"

    id: rectangle1

    width: 380
    height: 580
    opacity: 0.9

    MouseArea {
        id: mouseArea
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        Rectangle {
            id: bg
            x: 10
            y: 10
            width: 360
            height: 400
            color: backgroundColor
            radius: 10
            anchors.verticalCenterOffset: 0
            anchors.horizontalCenterOffset: 2
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            z: 1

            ProgressBar {
                id: progressBar
                x: 80
                y: 210
                anchors.right: parent.right
                anchors.rightMargin: 3
                anchors.bottom: parent.bottom
                anchors.bottomMargin: -80
                value: 0.3
            }

            Label {
                id: label
                x: 164
                y: 255
                text: qsTr("Acessar minha conta")
                renderType: Text.NativeRendering
                font.family: "Times New Roman"
                color: secondaryTextColor
                anchors.bottom: usuarioTextField.top
                anchors.bottomMargin: 40
                font.pointSize: 10
                font.capitalization: Font.MixedCase
                anchors.horizontalCenter: parent.horizontalCenter
            }

            TextField {
                id: usuarioTextField
                x: 80
                y: 319
                width: 300
                text: qsTr("Usuario ou email")
                font.wordSpacing: -1
                font.capitalization: Font.MixedCase
                anchors.bottom: senhaTextField.top
                anchors.bottomMargin: 30
                anchors.horizontalCenterOffset: 0
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: 10
            }

            TextField {
                id: senhaTextField
                x: 80
                y: 380
                width: 300
                text: qsTr("Senha")
                font.pointSize: 10
                anchors.bottom: entrarButton.top
                anchors.bottomMargin: 20
                font.capitalization: Font.MixedCase
                anchors.horizontalCenter: parent.horizontalCenter
                echoMode: TextInput.Password
            }

            Button {
                id: entrarButton
                x: 30
                y: 466
                width: 300
                height: 40
                text: qsTr("Entrar")
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 50

                contentItem: Text {
                    text: parent.text
                    opacity: enabled ? 1.0 : 0.3
                    color: primaryTextColor
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    elide: Text.ElideRight
                }

                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 40
                    opacity: enabled ? 1 : 0.3
                    border.color: buttonBorderColor
                    border.width: 1
                    radius: 2
                    color: buttonColor
                }
            }

            Label {
                id: label1
                x: 166
                y: 107
                color: primaryTextColor
                text: qsTr("Login")
                font.weight: Font.Bold
                font.family: "Arial"
                fontSizeMode: Text.HorizontalFit
                anchors.horizontalCenter: parent.horizontalCenter
                font.capitalization: Font.Capitalize
                anchors.bottomMargin: 10
                font.pointSize: 16
                anchors.bottom: label.top
            }

            Label {
                id: usuarioLabel
                y: 185
                text: qsTr("Usuario:")
                color: secondaryTextColor
                anchors.left: usuarioTextField.left
                anchors.leftMargin: 0
                anchors.bottom: usuarioTextField.top
                anchors.bottomMargin: 5
                font.bold: false
                font.pointSize: 10
            }

            Label {
                id: senhaLabel
                y: 135
                text: qsTr("Senha:")
                color: secondaryTextColor
                anchors.bottom: senhaTextField.top
                anchors.bottomMargin: 5
                anchors.left: senhaTextField.left
                anchors.leftMargin: 0
                font.bold: false
                font.pointSize: 10
            }

            Button {
                id: settingsButton
                x: children.x
                y: children.y
                width: 40
                height: 40
                spacing: 0
                anchors.top: parent.top
                anchors.topMargin: 30
                anchors.right: parent.right
                anchors.rightMargin: 30

                Image {
                    id: imageButton
                    x: 30
                    width: 40
                    height: 40
                    anchors.horizontalCenter: parent.horizontalCenter
                    fillMode: Image.Stretch
                    sourceSize.height: 40
                    sourceSize.width: 40
                    source: "images/settings.png"
                }

            }
        }

        DropShadowBase {
            height: 360
            anchors.fill: bg
            source: bg
            verticalOffset: 0
            horizontalOffset: 0
            radius: 10
            color: "#40000000"
            z: 0
        }
    }
}
