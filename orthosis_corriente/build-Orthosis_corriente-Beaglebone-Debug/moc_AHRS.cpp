/****************************************************************************
** Meta object code from reading C++ file 'AHRS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Beaglebone/AHRS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AHRS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AHRS_t {
    QByteArrayData data[15];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AHRS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AHRS_t qt_meta_stringdata_AHRS = {
    {
QT_MOC_LITERAL(0, 0, 4), // "AHRS"
QT_MOC_LITERAL(1, 5, 5), // "ready"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 8), // "sendData"
QT_MOC_LITERAL(4, 21, 2), // "id"
QT_MOC_LITERAL(5, 24, 14), // "QVector<float>"
QT_MOC_LITERAL(6, 39, 4), // "qout"
QT_MOC_LITERAL(7, 44, 10), // "timeUpdate"
QT_MOC_LITERAL(8, 55, 6), // "t_main"
QT_MOC_LITERAL(9, 62, 4), // "sync"
QT_MOC_LITERAL(10, 67, 4), // "read"
QT_MOC_LITERAL(11, 72, 4), // "dump"
QT_MOC_LITERAL(12, 77, 11), // "std::string"
QT_MOC_LITERAL(13, 89, 8), // "pathDate"
QT_MOC_LITERAL(14, 98, 4) // "stop"

    },
    "AHRS\0ready\0\0sendData\0id\0QVector<float>\0"
    "qout\0timeUpdate\0t_main\0sync\0read\0dump\0"
    "std::string\0pathDate\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AHRS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   55,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,
      11,    1,   60,    2, 0x0a /* Public */,
      14,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void AHRS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AHRS *_t = static_cast<AHRS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->sendData((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QVector<float>(*)>(_a[2]))); break;
        case 2: _t->timeUpdate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->sync(); break;
        case 4: _t->read(); break;
        case 5: _t->dump((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AHRS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AHRS::ready)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AHRS::*_t)(const int , const QVector<float> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AHRS::sendData)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AHRS::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AHRS.data,
      qt_meta_data_AHRS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AHRS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AHRS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AHRS.stringdata0))
        return static_cast<void*>(const_cast< AHRS*>(this));
    return QObject::qt_metacast(_clname);
}

int AHRS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AHRS::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AHRS::sendData(const int _t1, const QVector<float> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
