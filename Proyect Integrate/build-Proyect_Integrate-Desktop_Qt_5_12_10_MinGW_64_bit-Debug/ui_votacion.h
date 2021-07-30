/********************************************************************************
** Form generated from reading UI file 'votacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTACION_H
#define UI_VOTACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Votacion
{
public:
    QGridLayout *gridLayout;
    QGroupBox *grpBcandidatos_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblUsuario;
    QLabel *lblNombre;
    QWidget *widgetTotal_2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widgetArauz_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QWidget *widgetLista1_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *lista1;
    QWidget *widgetCheck_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *Arauz;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widgetLasso_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QWidget *widgetLista21_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *lista21;
    QWidget *widgetCheck_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *Lasso;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widgetVotar_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnVotar;

    void setupUi(QWidget *Votacion)
    {
        if (Votacion->objectName().isEmpty())
            Votacion->setObjectName(QString::fromUtf8("Votacion"));
        Votacion->resize(649, 558);
        gridLayout = new QGridLayout(Votacion);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        grpBcandidatos_2 = new QGroupBox(Votacion);
        grpBcandidatos_2->setObjectName(QString::fromUtf8("grpBcandidatos_2"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        grpBcandidatos_2->setFont(font);
        grpBcandidatos_2->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 235, 255);\n"
"background-color: rgb(170, 255, 0);"));
        verticalLayout = new QVBoxLayout(grpBcandidatos_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(grpBcandidatos_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblUsuario = new QLabel(widget);
        lblUsuario->setObjectName(QString::fromUtf8("lblUsuario"));
        lblUsuario->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblUsuario);

        lblNombre = new QLabel(widget);
        lblNombre->setObjectName(QString::fromUtf8("lblNombre"));
        lblNombre->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblNombre);


        verticalLayout->addWidget(widget);

        widgetTotal_2 = new QWidget(grpBcandidatos_2);
        widgetTotal_2->setObjectName(QString::fromUtf8("widgetTotal_2"));
        horizontalLayout_5 = new QHBoxLayout(widgetTotal_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widgetArauz_2 = new QWidget(widgetTotal_2);
        widgetArauz_2->setObjectName(QString::fromUtf8("widgetArauz_2"));
        verticalLayout_7 = new QVBoxLayout(widgetArauz_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_6 = new QLabel(widgetArauz_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Arauz.png")));
        label_6->setScaledContents(true);

        verticalLayout_7->addWidget(label_6);

        widgetLista1_2 = new QWidget(widgetArauz_2);
        widgetLista1_2->setObjectName(QString::fromUtf8("widgetLista1_2"));
        verticalLayout_8 = new QVBoxLayout(widgetLista1_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        lista1 = new QLabel(widgetLista1_2);
        lista1->setObjectName(QString::fromUtf8("lista1"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lista1->setFont(font1);

        verticalLayout_8->addWidget(lista1);

        widgetCheck_3 = new QWidget(widgetLista1_2);
        widgetCheck_3->setObjectName(QString::fromUtf8("widgetCheck_3"));
        horizontalLayout_6 = new QHBoxLayout(widgetCheck_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        Arauz = new QCheckBox(widgetCheck_3);
        Arauz->setObjectName(QString::fromUtf8("Arauz"));
        Arauz->setFont(font1);

        horizontalLayout_6->addWidget(Arauz);

        horizontalSpacer_7 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_8->addWidget(widgetCheck_3);


        verticalLayout_7->addWidget(widgetLista1_2);


        horizontalLayout_5->addWidget(widgetArauz_2);

        widgetLasso_2 = new QWidget(widgetTotal_2);
        widgetLasso_2->setObjectName(QString::fromUtf8("widgetLasso_2"));
        verticalLayout_9 = new QVBoxLayout(widgetLasso_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_8 = new QLabel(widgetLasso_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Lasso (2).png")));
        label_8->setScaledContents(true);

        verticalLayout_9->addWidget(label_8);

        widgetLista21_2 = new QWidget(widgetLasso_2);
        widgetLista21_2->setObjectName(QString::fromUtf8("widgetLista21_2"));
        verticalLayout_10 = new QVBoxLayout(widgetLista21_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        lista21 = new QLabel(widgetLista21_2);
        lista21->setObjectName(QString::fromUtf8("lista21"));
        lista21->setFont(font1);

        verticalLayout_10->addWidget(lista21);

        widgetCheck_4 = new QWidget(widgetLista21_2);
        widgetCheck_4->setObjectName(QString::fromUtf8("widgetCheck_4"));
        horizontalLayout_7 = new QHBoxLayout(widgetCheck_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        Lasso = new QCheckBox(widgetCheck_4);
        Lasso->setObjectName(QString::fromUtf8("Lasso"));
        Lasso->setFont(font1);

        horizontalLayout_7->addWidget(Lasso);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_10->addWidget(widgetCheck_4);


        verticalLayout_9->addWidget(widgetLista21_2);


        horizontalLayout_5->addWidget(widgetLasso_2);


        verticalLayout->addWidget(widgetTotal_2);

        widgetVotar_2 = new QWidget(grpBcandidatos_2);
        widgetVotar_2->setObjectName(QString::fromUtf8("widgetVotar_2"));
        horizontalLayout_8 = new QHBoxLayout(widgetVotar_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_10 = new QSpacerItem(390, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        btnVotar = new QPushButton(widgetVotar_2);
        btnVotar->setObjectName(QString::fromUtf8("btnVotar"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        btnVotar->setFont(font2);

        horizontalLayout_8->addWidget(btnVotar);


        verticalLayout->addWidget(widgetVotar_2);


        gridLayout->addWidget(grpBcandidatos_2, 0, 0, 1, 1);


        retranslateUi(Votacion);

        QMetaObject::connectSlotsByName(Votacion);
    } // setupUi

    void retranslateUi(QWidget *Votacion)
    {
        Votacion->setWindowTitle(QApplication::translate("Votacion", "Form", nullptr));
        grpBcandidatos_2->setTitle(QApplication::translate("Votacion", "Candidatos", nullptr));
        lblUsuario->setText(QApplication::translate("Votacion", "Usuario", nullptr));
        lblNombre->setText(QString());
        label_6->setText(QString());
        lista1->setText(QApplication::translate("Votacion", "               Lista 1", nullptr));
        Arauz->setText(QApplication::translate("Votacion", "  Arauz", nullptr));
        label_8->setText(QString());
        lista21->setText(QApplication::translate("Votacion", "           Lista 21", nullptr));
        Lasso->setText(QApplication::translate("Votacion", "    Lasso", nullptr));
        btnVotar->setText(QApplication::translate("Votacion", "Votar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Votacion: public Ui_Votacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTACION_H
