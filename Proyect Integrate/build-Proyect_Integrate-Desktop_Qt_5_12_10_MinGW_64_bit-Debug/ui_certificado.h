/********************************************************************************
** Form generated from reading UI file 'certificado.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICADO_H
#define UI_CERTIFICADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Certificado
{
public:
    QLabel *imagen;
    QPushButton *btnGuardar;
    QLabel *label;

    void setupUi(QWidget *Certificado)
    {
        if (Certificado->objectName().isEmpty())
            Certificado->setObjectName(QString::fromUtf8("Certificado"));
        Certificado->resize(570, 370);
        imagen = new QLabel(Certificado);
        imagen->setObjectName(QString::fromUtf8("imagen"));
        imagen->setGeometry(QRect(10, 80, 411, 231));
        btnGuardar = new QPushButton(Certificado);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(470, 160, 75, 23));
        label = new QLabel(Certificado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 401, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font.setPointSize(16);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Certificado);

        QMetaObject::connectSlotsByName(Certificado);
    } // setupUi

    void retranslateUi(QWidget *Certificado)
    {
        Certificado->setWindowTitle(QApplication::translate("Certificado", "Form", nullptr));
        imagen->setText(QString());
        btnGuardar->setText(QApplication::translate("Certificado", "Guardar", nullptr));
        label->setText(QApplication::translate("Certificado", "Certificado de votacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Certificado: public Ui_Certificado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICADO_H
