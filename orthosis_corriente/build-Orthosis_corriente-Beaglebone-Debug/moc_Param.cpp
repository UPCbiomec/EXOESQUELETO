/****************************************************************************
** Meta object code from reading C++ file 'Param.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Beaglebone/Param.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Param.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Param_t {
    QByteArrayData data[12];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Param_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Param_t qt_meta_stringdata_Param = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Param"
QT_MOC_LITERAL(1, 6, 9), // "paramSend"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 2), // "ch"
QT_MOC_LITERAL(4, 20, 4), // "knob"
QT_MOC_LITERAL(5, 25, 3), // "val"
QT_MOC_LITERAL(6, 29, 7), // "PVTSend"
QT_MOC_LITERAL(7, 37, 13), // "QVector<long>"
QT_MOC_LITERAL(8, 51, 1), // "P"
QT_MOC_LITERAL(9, 53, 1), // "V"
QT_MOC_LITERAL(10, 55, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 68, 1) // "T"

    },
    "Param\0paramSend\0\0ch\0knob\0val\0PVTSend\0"
    "QVector<long>\0P\0V\0QVector<int>\0T"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Param[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    4,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 10,    3,    8,    9,   11,

       0        // eod
};

void Param::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Param *_t = static_cast<Param *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramSend((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 1: _t->PVTSend((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QVector<long>(*)>(_a[2])),(*reinterpret_cast< const QVector<long>(*)>(_a[3])),(*reinterpret_cast< const QVector<int>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<long> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Param::*_t)(const int , const int , const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Param::paramSend)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Param::*_t)(const int , const QVector<long> , const QVector<long> , const QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Param::PVTSend)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Param::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Param.data,
      qt_meta_data_Param,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Param::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Param::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Param.stringdata0))
        return static_cast<void*>(const_cast< Param*>(this));
    return QObject::qt_metacast(_clname);
}

int Param::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Param::paramSend(const int _t1, const int _t2, const double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Param::PVTSend(const int _t1, const QVector<long> _t2, const QVector<long> _t3, const QVector<int> _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
