#include "votacion.h"
#include "ui_votacion.h"
#include <usuarios.h>
#include <certificado.h>
//#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <datoscertificado.h>
Votacion::Votacion(QList<Usuarios*> m_usuario,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Votacion)
{
    ui->setupUi(this);
    QString nombre=m_usuario.at(0)->getm_Nombre();
    cod=m_usuario.at(0)->getm_Codigo();
    cedula=m_usuario.at(0)->getm_cedula();
    nombres=m_usuario.at(0)->getm_Nombre();
    foto=m_usuario.at(0)->getm_Foto();
    ui->lblNombre->setText(nombre);
}

Votacion::~Votacion()
{
    delete ui;
}

void Votacion::on_btnVotar_clicked()
{
    int op1=ui->Arauz->checkState();
    int op2=ui->Lasso->checkState();
    //qDebug()<<op1;
    //qDebug()<<op2;
    if(op1==0 and op2==0){
        estado="Blanco";
    }
    if(op1==2 and op2==2){
        estado="Nulo";
    }
    if(op1==2 and op2==0){
        estado="Arauz";
    }
    if(op1==0 and op2==2){
        estado="Lasso";
    }
    QFile archivo;
    QTextStream io;
    int horavotacion=QDateTime::currentDateTime().time().hour();
    int minutovotacion=QDateTime::currentDateTime().time().minute();
    //Pasar datos de usuario conectado

    m_certificado.append(new DatosCertificado(cod,cedula,nombres,horavotacion,minutovotacion,foto,estado));
    QString nombreArchivo="C:/Proyect Integrate/ArchivoElectoral.csv";
    archivo.setFileName(nombreArchivo);
    archivo.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::critical(0,"Error",archivo.errorString());
        return;
    }
    io.setDevice(&archivo);
    io<<m_certificado.at(0)->getm_Codigo()<<";"
          <<m_certificado.at(0)->getm_Cedula()<<";"
          <<m_certificado.at(0)->getm_Nombre()<<";"
          <<QString::number(horavotacion)<<";"
          <<QString::number(minutovotacion)<<";"
          <<estado<<endl;
    archivo.flush();
    archivo.close();
    this->hide();

    Certificado *ingresoCertificado= new Certificado(m_certificado);
    ingresoCertificado->setWindowModality(Qt::ApplicationModal);
    ingresoCertificado->show();
}
