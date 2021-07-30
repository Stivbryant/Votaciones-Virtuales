/********************************************************************************
** Form generated from reading UI file 'resultados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOS_H
#define UI_RESULTADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Resultados
{
public:
    QLabel *imagen;

    void setupUi(QWidget *Resultados)
    {
        if (Resultados->objectName().isEmpty())
            Resultados->setObjectName(QString::fromUtf8("Resultados"));
        Resultados->resize(556, 350);
        imagen = new QLabel(Resultados);
        imagen->setObjectName(QString::fromUtf8("imagen"));
        imagen->setGeometry(QRect(10, 10, 541, 331));

        retranslateUi(Resultados);

        QMetaObject::connectSlotsByName(Resultados);
    } // setupUi

    void retranslateUi(QWidget *Resultados)
    {
        Resultados->setWindowTitle(QApplication::translate("Resultados", "Form", nullptr));
        imagen->setText(QApplication::translate("Resultados", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Resultados: public Ui_Resultados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOS_H
