#ifndef VOTACION_H
#define VOTACION_H

#include <QWidget>
#include <usuarios.h>
#include <datoscertificado.h>
namespace Ui {
class Votacion;
}

class Votacion : public QWidget
{
    Q_OBJECT

public:
    explicit Votacion(QList<Usuarios*> m_usuario,QWidget *parent = nullptr);
    ~Votacion();

private slots:
    void on_btnVotar_clicked();

private:
    Ui::Votacion *ui;
    QList<DatosCertificado*> m_certificado;
    QString cod, nombres, cedula, foto, estado;
};

#endif // VOTACION_H
