#ifndef CERTIFICADO_H
#define CERTIFICADO_H

#include <QWidget>
#include <votacion.h>
namespace Ui {
class Certificado;
}

class Certificado : public QWidget
{
    Q_OBJECT

public:
    explicit Certificado(QList<DatosCertificado*> m_certificado,QWidget *parent = nullptr);
    ~Certificado();

private slots:
    QImage crearimagenconsuperposicion(const QImage& baseImage, const QImage& overlayImage);
    void generarCertificado(QString Titulo, QString Nombre, QString Cedula, QString Lugar, int Hora, int Minuto);
    void on_btnGuardar_clicked();
    void guardarImagen(int tipo);
private:
    Ui::Certificado *ui;
    QPixmap pixmap;
};

#endif // CERTIFICADO_H
