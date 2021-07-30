#include "resultados.h"
#include "ui_resultados.h"
#include <QPainter>
#include <QPen>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QMessageBox>
Resultados::Resultados(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Resultados)
{
    ui->setupUi(this);
    pixmap= QPixmap(ui->imagen->size());
    pixmap.fill(Qt::white);
    ejes(25,25,25,300);
    //int d1v1=(275*30/100)*-1;//-30
    //int d1v2=
    barras(0,30,300,20,-200,-30,-20,-2,-5,8,calculardesplazamientobarra(-30),calculardesplazamientobarra(-20),calculardesplazamientobarra(-2),calculardesplazamientobarra(-5));//8h00
    barras(105,30,300,20,-200,-30,-30,-12,-9,9,calculardesplazamientobarra(-30),calculardesplazamientobarra(-30),calculardesplazamientobarra(-12),calculardesplazamientobarra(-9));//9h00
    barras(210,30,300,20,-200,-30,-30,-12,-9,10,calculardesplazamientobarra(-30),calculardesplazamientobarra(-30),calculardesplazamientobarra(-12),calculardesplazamientobarra(-9));//10h00
    barras(315,30,300,20,-200,-50,-40,-12,-9,11,calculardesplazamientobarra(-50),calculardesplazamientobarra(-40),calculardesplazamientobarra(-12),calculardesplazamientobarra(-9));//11h00
    ui->imagen->setPixmap(pixmap);
}

Resultados::~Resultados()
{
    delete ui;
}

void Resultados::ejes(int x0, int y0, int x1, int y1)
{
    QPainter painter(&pixmap);
                    //x0,y0,x1,yo
    painter.drawText(x0-7,y0,"100");
    painter.drawLine(x0-5,y0,x1+5,y0);//linea
    painter.drawLine(x0,y0,x1,y1);//25,25,25,300
    painter.drawText(x0-7,(y0+275)/2,"50");
    painter.drawLine(x0-5,(y0+275)/2,x1+5,y1/2);//linea
    painter.drawLine(x0,y0+275,x1+475,y1);
    painter.drawText(x0-7,(y0+275)/4,"75");
    painter.drawLine(x0-5,(y0+275)/4,x1+5,y1/4);//linea
}

void Resultados::barras(int desplazamientox, int x0, int y0, int x1, int y1, int nv1, int nv2, int nvn, int nvb, int hora, int vc1, int vc2, int vcn, int vcb)
{
    QPainter painter(&pixmap);
    //eqtiquetas
    painter.drawText(x0+desplazamientox+40,y0+20,QString::number(hora)+"h00");
    painter.drawText(x0+desplazamientox+5,y0+10,"1");
    painter.drawText(x0+desplazamientox+30,y0+10,"2");
    painter.drawText(x0+desplazamientox+55,y0+10,"N");
    painter.drawText(x0+desplazamientox+80,y0+10,"B");
    //numero de votos
     painter.drawText(x0+desplazamientox,y0+(nv1)-5,QString::number(nv1*-1));
     painter.drawText(x0+desplazamientox+25,y0+(nv2)-5,QString::number(nv2*-1));
     painter.drawText(x0+desplazamientox+50,y0+(nvn)-5,QString::number(nvn*-1));
     painter.drawText(x0+desplazamientox+75,y0+(nvb)-5,QString::number(nvb*-1));
    //lista1
    painter.setBrush(QColor(255,0,0,127));
    painter.drawRect(x0+desplazamientox,y0,x1,vc1);
    //lista2
    painter.setBrush(QColor(130,50,10,120));
    painter.drawRect(x0+desplazamientox+25,y0,x1,vc2);
    //nulos
    painter.setBrush(QColor(30,50,10,100));
    painter.drawRect(x0+desplazamientox+50,y0,x1,vcn);
    //blancos
    painter.setBrush(QColor(150,50,10,20));
    painter.drawRect(x0+desplazamientox+75,y0,x1,vcb);
}

int Resultados::calculardesplazamientobarra(int votos)
{
    int valor=(275*votos/100);//-30
    return valor;
}

void Resultados::arbrirArchivo()
{
    QString nombreArchivo="C:/Proyect Integrate/Votos.csv";
    QFile archivo(nombreArchivo);
    QTextStream io;
    int nVotos1=0;
    int nVotos2=0;
    int nVotosB=0;
    int nVotosN=0;
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::information(0,"Aviso","Error Apertura");
        return;
    }
    io.setDevice(&archivo);
    while (!io.atEnd()) {
        auto linea=io.readLine();
        auto datosLinea=linea.split(";");
        int numColumnas = datosLinea.size();
        for (int i=0; i<numColumnas; i++){
            auto dato=datosLinea.at(i);
            if(i==0){
                if(dato=="Arauz");
                nVotos1++;
            }
             if(dato=="Lasso"){
                nVotos2++;
            }
             if(dato=="Nulo"){
                nVotosN++;
            }
             if(dato=="Blanco"){
                 nVotosB++;
            }
        }
    }
    archivo.flush();
    archivo.close();
}
