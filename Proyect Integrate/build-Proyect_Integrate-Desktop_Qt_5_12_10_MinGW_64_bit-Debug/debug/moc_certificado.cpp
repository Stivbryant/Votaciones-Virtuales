/****************************************************************************
** Meta object code from reading C++ file 'certificado.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Proyect_Integrate/certificado.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'certificado.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Certificado_t {
    QByteArrayData data[15];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Certificado_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Certificado_t qt_meta_stringdata_Certificado = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Certificado"
QT_MOC_LITERAL(1, 12, 27), // "crearimagenconsuperposicion"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "baseImage"
QT_MOC_LITERAL(4, 51, 12), // "overlayImage"
QT_MOC_LITERAL(5, 64, 18), // "generarCertificado"
QT_MOC_LITERAL(6, 83, 6), // "Titulo"
QT_MOC_LITERAL(7, 90, 6), // "Nombre"
QT_MOC_LITERAL(8, 97, 6), // "Cedula"
QT_MOC_LITERAL(9, 104, 5), // "Lugar"
QT_MOC_LITERAL(10, 110, 4), // "Hora"
QT_MOC_LITERAL(11, 115, 6), // "Minuto"
QT_MOC_LITERAL(12, 122, 21), // "on_btnGuardar_clicked"
QT_MOC_LITERAL(13, 144, 13), // "guardarImagen"
QT_MOC_LITERAL(14, 158, 4) // "tipo"

    },
    "Certificado\0crearimagenconsuperposicion\0"
    "\0baseImage\0overlayImage\0generarCertificado\0"
    "Titulo\0Nombre\0Cedula\0Lugar\0Hora\0Minuto\0"
    "on_btnGuardar_clicked\0guardarImagen\0"
    "tipo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Certificado[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       5,    6,   39,    2, 0x08 /* Private */,
      12,    0,   52,    2, 0x08 /* Private */,
      13,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QImage, QMetaType::QImage, QMetaType::QImage,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void Certificado::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Certificado *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QImage _r = _t->crearimagenconsuperposicion((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->generarCertificado((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 2: _t->on_btnGuardar_clicked(); break;
        case 3: _t->guardarImagen((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Certificado::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Certificado.data,
    qt_meta_data_Certificado,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Certificado::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Certificado::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Certificado.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Certificado::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
