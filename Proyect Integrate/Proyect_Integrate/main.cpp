#include "ingreso.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
//#include <QDebug> //Escribir en consola
#include <QMessageBox> //Mensajes de Dialogo
#include <QDateTime> //fechas
#include <QTime>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ingreso w;
    //fecha sistema horas minutos
    int horainicioSistema=QDateTime::currentDateTime().time().hour();
    int minutonicioSistema=QDateTime::currentDateTime().time().minute();
    //convertir a minutos
    int minutosinicialessistema=(horainicioSistema*60)+minutonicioSistema;
    QString Fecha;//Fecha archivo
    QString nombreArchivo="C:/Proyect Integrate/fecha.csv";//ruta y nommbre de archivo
    QFile archivo(nombreArchivo);
    //archivo.setFileName(nombreArchivo);
    QTextStream io;
    int horaInicio=0,  minutoInicio=0, horaFin=0, minutoFin=0;
    QString FechaSistema=QDateTime::currentDateTime().toString("dd/MM/yyyy");
    //qDebug()<<"Fecha Sistema= "<<FechaSistema;
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if (!archivo.isOpen()){
        //qDebug()<<"Error de apertura";
        return -1;
    }
    io.setDevice(&archivo);
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto valores=linea.split(";");
        int numeroColumnas=valores.size();

        for(int i=0; i<numeroColumnas;i++){
            auto dato=valores.at(i);
            //codigo
            if(i==0){
                Fecha=dato;
            };
            //cedula
            if(i==1){
                horaInicio=dato.toInt();
            };
            //nombre
            if(i==2){
                minutoInicio=dato.toInt();
            }
            //clave
            if(i==3){
                horaFin=dato.toInt();
            }
            //foto
            if(i==4){
                minutoFin=dato.toInt();
            }

        }
    archivo.flush();
    archivo.close();
    }
  //  qDebug()<<horaInicio<<" - "<<minutoInicio;
   // qDebug()<<horaFin<<" - "<<minutoFin;
    int minutosinicioarchivo=(horaInicio*60)+minutoInicio;
    int minutosfinarchivo=(horaFin*60)+minutoFin;

    if(Fecha!=FechaSistema){
        QMessageBox::critical(0,"Aviso","Sistema no habilitado espere la fecha correcta");
        return -1;
    }
   // qDebug()<<minutosinicioarchivo<<" - "<<minutosinicialessistema<<" - "<<minutosfinarchivo;
    if (minutosinicioarchivo>minutosinicialessistema or minutosfinarchivo<minutosinicialessistema){
        QMessageBox::critical(0,"Aviso","Sistema no habilitado espere la Hora correcta");
        return -1;
    }

    w.show();
    return a.exec();
}
