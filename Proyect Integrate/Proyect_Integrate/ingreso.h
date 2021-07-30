#ifndef INGRESO_H
#define INGRESO_H

#include <QWidget>
#include <usuarios.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Ingreso; }
QT_END_NAMESPACE

class Ingreso : public QWidget
{
    Q_OBJECT

public:
    Ingreso(QWidget *parent = nullptr);
    ~Ingreso();
    int registros=0;
    QString Fecha;

private slots:
    void on_btnIngresar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::Ingreso *ui;
    QList<Usuarios*> m_usuarios;//lista de usuarios
    QList<Usuarios*> m_usuario;//lista de usuario conectado

};
#endif // INGRESO_H
