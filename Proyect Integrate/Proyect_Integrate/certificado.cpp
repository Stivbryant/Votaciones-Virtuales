#include "certificado.h"
#include "ui_certificado.h"
#include <QPainter>
#include <QPen>
#include <QFileDialog>
#include <QMessageBox>
#include <usuarios.h>
#include <votacion.h>
#include <ingreso.h>
#include <QDebug>
#include <datoscertificado.h>
Certificado::Certificado(QList<DatosCertificado*> m_certificado,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Certificado)
{
    ui->setupUi(this);
    //definir el tamaño de área de trabajo - Qlabel(Tamaño de la etiqueta)
    QString cedula=m_certificado.at(0)->getm_Foto();
    QString nombres=m_certificado.at(0)->getm_Nombre();
    QString cc=m_certificado.at(0)->getm_Cedula();
    int horav=m_certificado.at(0)->getm_Hora();
    int minutov=m_certificado.at(0)->getm_Minuto();
    //ui->lblNombre->setText(nombre);
    pixmap=QPixmap(ui->imagen->size());
    //definir el fondo
    pixmap.fill(Qt::white);
    ui->imagen->setPixmap(pixmap);
    generarCertificado("Consejo Nacional Electoral - Ecuador", nombres,cc,"Junta N° 20",horav,minutov);
    pixmap.fill(Qt::white);
    ui->imagen->setPixmap(pixmap);
    //Codigo de apertura
    QImage baseImage("C:/Proyect Integrate/Fondo.png");
    QImage Foto( cedula);
    QImage logoffImage = crearimagenconsuperposicion(baseImage, Foto);
    ui->imagen->setPixmap(QPixmap::fromImage(logoffImage));
}

Certificado::~Certificado()
{
    delete ui;
}
QImage Certificado::crearimagenconsuperposicion(const QImage &baseImage, const QImage &Foto)
{
    QImage imageWithOverlay = QImage(baseImage.size(), QImage::Format_ARGB32_Premultiplied);
    QPainter painter(&imageWithOverlay);
    painter.setCompositionMode(QPainter::CompositionMode_Source);
    painter.fillRect(imageWithOverlay.rect(), Qt::transparent);
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawImage(0, 0, baseImage);
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawImage(20, 80, Foto);
    painter.end();
    return imageWithOverlay;
}
void Certificado::generarCertificado(QString Titulo, QString Nombre, QString Cedula, QString Lugar, int Hora, int Minuto)
{
    QPainter painter(&pixmap);
    QPen pen;
    pen.setColor(Qt::red);
    painter.drawText(180,30,Titulo);
    painter.drawText(220,55,Nombre);
    painter.drawText(220,80,Cedula);
    painter.drawText(220,105,Lugar);
    painter.drawText(220,135,"Pichincha");
    painter.drawText(220,150,QString::number(Hora)+"h"+QString::number(Minuto));
    ui->imagen->setPixmap(pixmap);
    guardarImagen(1);
}
void Certificado::on_btnGuardar_clicked()
{
    guardarImagen(0);

}

void Certificado::guardarImagen(int tipo)
{
    QString nombreArchivo;
    if (tipo==0){
        nombreArchivo=QFileDialog::getSaveFileName(this,"Guardar",QString(),"Imagen(*.png)");
    }else{
        nombreArchivo="C:/Proyect Integrate/.png";
    }

    if(!nombreArchivo.isEmpty()){
        QImage img=ui->imagen->pixmap()->toImage();
        img.save(nombreArchivo);
    }else{
        QMessageBox::information(0,"Aviso","Error");
    }
}


