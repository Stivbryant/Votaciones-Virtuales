#ifndef DATOSCERTIFICADO_H
#define DATOSCERTIFICADO_H

#include <QObject>
class DatosCertificado : public QObject
{
    Q_OBJECT
public:
    explicit DatosCertificado(QObject *parent = nullptr);
    DatosCertificado(QString m_Id,QString m_Cedula,QString m_Nombre,int m_Hora,int m_Minuto,QString m_Foto,QString m_voto);
    //gets
    QString getm_Codigo(){
        return m_Id;
    };
    QString getm_Cedula(){
        return m_Cedula;
    }
    QString getm_Nombre(){
        return m_Nombre;
    };
    int getm_Hora(){
        return m_Hora;
    }
    int getm_Minuto(){
        return m_Minuto;
    }
    QString getm_Foto(){
        return m_Foto;
    };

signals:
private:
    QString m_Id; //codigo de usuario
    QString m_Cedula;
    QString m_Nombre;
    int m_Hora;
    int m_Minuto;
    QString m_Foto;
    QString m_voto;
};

#endif // DATOSCERTIFICADO_H
