#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QWidget>
#include <QPixmap>
QT_BEGIN_NAMESPACE
namespace Ui {class Resultados;}
QT_END_NAMESPACE
class Resultados : public QWidget
{
    Q_OBJECT

public:
    explicit Resultados(QWidget *parent = nullptr);
    ~Resultados();
    void ejes(int x0, int y0, int x1, int y1);
    void barras(int desplazamientox, int x0, int y0, int x1, int y1, int nv1, int nv2,int nvn, int nvb, int hora, int vc1, int vc2, int vcn, int vcb);
    int calculardesplazamientobarra(int votos);
    void arbrirArchivo();

private:
    Ui::Resultados *ui;
    QPixmap pixmap;
};

#endif // RESULTADOS_H
