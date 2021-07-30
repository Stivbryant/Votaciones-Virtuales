/********************************************************************************
** Form generated from reading UI file 'ingreso.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESO_H
#define UI_INGRESO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ingreso
{
public:
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QLabel *lblsiselectoral;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *lblLogin;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_8;
    QWidget *widget_7;
    QFormLayout *formLayout;
    QLabel *lblUsuario;
    QLineEdit *txtUsuario;
    QLabel *lblClave;
    QLineEdit *txtClave;
    QWidget *widget_9;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnIngresar;
    QPushButton *btnCancelar;

    void setupUi(QWidget *Ingreso)
    {
        if (Ingreso->objectName().isEmpty())
            Ingreso->setObjectName(QString::fromUtf8("Ingreso"));
        Ingreso->resize(686, 462);
        widget_6 = new QWidget(Ingreso);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(10, 10, 650, 427));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 162, 139);"));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblsiselectoral = new QLabel(widget_6);
        lblsiselectoral->setObjectName(QString::fromUtf8("lblsiselectoral"));
        QFont font;
        font.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        lblsiselectoral->setFont(font);

        verticalLayout->addWidget(lblsiselectoral);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblLogin = new QLabel(widget_3);
        lblLogin->setObjectName(QString::fromUtf8("lblLogin"));
        lblLogin->setPixmap(QPixmap(QString::fromUtf8(":/icono.png")));
        lblLogin->setScaledContents(true);

        gridLayout->addWidget(lblLogin, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));

        verticalLayout_2->addWidget(widget_8);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        formLayout = new QFormLayout(widget_7);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblUsuario = new QLabel(widget_7);
        lblUsuario->setObjectName(QString::fromUtf8("lblUsuario"));
        QFont font1;
        font1.setPointSize(12);
        lblUsuario->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblUsuario);

        txtUsuario = new QLineEdit(widget_7);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtUsuario);

        lblClave = new QLabel(widget_7);
        lblClave->setObjectName(QString::fromUtf8("lblClave"));
        lblClave->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblClave);

        txtClave = new QLineEdit(widget_7);
        txtClave->setObjectName(QString::fromUtf8("txtClave"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtClave);


        verticalLayout_2->addWidget(widget_7);

        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));

        verticalLayout_2->addWidget(widget_9);


        horizontalLayout_2->addWidget(widget_4);


        verticalLayout->addWidget(widget_5);

        widget_2 = new QWidget(widget_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(225, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnIngresar = new QPushButton(widget);
        btnIngresar->setObjectName(QString::fromUtf8("btnIngresar"));
        btnIngresar->setEnabled(true);
        btnIngresar->setFont(font1);

        horizontalLayout->addWidget(btnIngresar);

        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setFont(font1);

        horizontalLayout->addWidget(btnCancelar);


        horizontalLayout_3->addWidget(widget);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Ingreso);

        QMetaObject::connectSlotsByName(Ingreso);
    } // setupUi

    void retranslateUi(QWidget *Ingreso)
    {
        Ingreso->setWindowTitle(QApplication::translate("Ingreso", "Ingreso", nullptr));
        lblsiselectoral->setText(QApplication::translate("Ingreso", "                               Sistema Electoral", nullptr));
        lblLogin->setText(QString());
        lblUsuario->setText(QApplication::translate("Ingreso", "Usuario", nullptr));
        lblClave->setText(QApplication::translate("Ingreso", "Clave", nullptr));
        btnIngresar->setText(QApplication::translate("Ingreso", "Ingresar", nullptr));
        btnCancelar->setText(QApplication::translate("Ingreso", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ingreso: public Ui_Ingreso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESO_H
