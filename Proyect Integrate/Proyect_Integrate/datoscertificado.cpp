#include "datoscertificado.h"

DatosCertificado::DatosCertificado(QObject *parent) : QObject(parent)
{
    m_Id=""; //codigo de usuario
    m_Cedula="";
    m_Nombre="";
    m_Hora=0;
    m_Minuto=0;
    m_Foto="";
    m_voto="";
}

DatosCertificado::DatosCertificado(QString m_Id, QString m_Cedula, QString m_Nombre, int m_Hora, int m_Minuto, QString m_Foto, QString m_voto)
{
    this->m_Id=m_Id; //codigo de usuario
    this->m_Cedula=m_Cedula;
    this->m_Nombre=m_Nombre;
    this->m_Hora=m_Hora;
    this->m_Minuto=m_Minuto;
    this->m_Foto=m_Foto;
    this->m_voto=m_voto;
}

