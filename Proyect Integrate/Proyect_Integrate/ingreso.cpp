#include "ingreso.h"
#include "ui_ingreso.h"
#include <QFile>
#include <QTextStream>
#include <QtDebug>
#include <QMessageBox>
#include <usuarios.h>
#include <votacion.h>
//#include <usuario.h>
Ingreso::Ingreso(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ingreso)
{
    ui->setupUi(this);
    ui->txtClave->setEchoMode(QLineEdit::Password);
    //Cargar la lista de Usuarios del archivo csv
    QString nombreArchivo="C:/Proyect Integrate/usuarios.csv";
    QFile archivo;
    QTextStream io;
    archivo.setFileName(nombreArchivo);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::information(0,"Aviso","Error de Apertura");
        return;
    };
    io.setDevice(&archivo);
    int filacodigo=0, filacedula=0, filanombre=0, filaclave=0, filafoto=0;
    QString codigo,cedula,nombre, clave, foto;
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto valores=linea.split(";");
        int numeroColumnas=valores.size();
        for(int i=0; i<numeroColumnas;i++){
            auto dato=valores.at(i);
            //codigo
            if(i==0 or filacodigo==i){
                codigo=dato;
                filacodigo+=5;
            };
            //cedula
            if(i==1 or filacedula==i){
                cedula=dato;
                filacedula+=5;
            };
            //nombre
            if(i==2 or filanombre==i){
                nombre=dato;
                filanombre+=5;
            };
            //clave
            if(i==3 or filaclave==i){
                clave=dato;
                filaclave+=5;
            };
            //foto
            if(i==4 or filafoto==i){
                foto=dato;
                filafoto+=5;
                m_usuarios.append(new Usuarios(codigo,cedula,nombre,clave,foto,""));
                //qDebug()<<codigo<<cedula<<nombre<<clave<<foto;
            };

        }

    }
    ui->txtUsuario->setFocus();
}

Ingreso::~Ingreso()
{
    delete ui;
}


void Ingreso::on_btnIngresar_clicked()
{
    QString cedula=ui->txtUsuario->text();
    QString clave=ui->txtClave->text();
    bool bandera=false;
    if (cedula.isEmpty() or clave.isEmpty()){
        QMessageBox::information(0,"Aviso","Revise los Datos");
        return;
    }
    for(int i=1;i<m_usuarios.length();i++){
        if(m_usuarios.at(i)->getm_cedula()==cedula && m_usuarios.at(i)->getm_Clave()==clave){
            QMessageBox::information(0,"Aviso","Usuario Correcto");
            bandera=true;
            //pasar datos de usuario conectado
            m_usuario.append(new Usuarios(m_usuarios.at(i)->getm_Codigo(),
                                          m_usuarios.at(i)->getm_cedula(),
                                          m_usuarios.at(i)->getm_Nombre(),
                                          m_usuarios.at(i)->getm_Clave(),
                                          m_usuarios.at(i)->getm_Foto(),
                                          ""));
        }
    }
    if (bandera==false){
        QMessageBox::information(0,"Aviso","Usuario no válido");
    }else{
        //llamar a la nueva ventana
        ui->txtClave->setText("");
        ui->txtUsuario->setText("");
        Votacion *ingresoVotaciones= new Votacion(m_usuario);
        ingresoVotaciones->setWindowModality(Qt::ApplicationModal);
        ingresoVotaciones->show();
        close();

    }
}

void Ingreso::on_btnCancelar_clicked()
{
    close();
}
