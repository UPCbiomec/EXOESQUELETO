/****************************************************************************
** Meta object code from reading C++ file 'EPOS2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Beaglebone/EPOS2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPOS2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_maxonMotor_t {
    QByteArrayData data[20];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_maxonMotor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_maxonMotor_t qt_meta_stringdata_maxonMotor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "maxonMotor"
QT_MOC_LITERAL(1, 11, 5), // "ready"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "sendData"
QT_MOC_LITERAL(4, 27, 4), // "WORD"
QT_MOC_LITERAL(5, 32, 2), // "id"
QT_MOC_LITERAL(6, 35, 3), // "out"
QT_MOC_LITERAL(7, 39, 4), // "home"
QT_MOC_LITERAL(8, 44, 4), // "read"
QT_MOC_LITERAL(9, 49, 1), // "t"
QT_MOC_LITERAL(10, 51, 6), // "addPVT"
QT_MOC_LITERAL(11, 58, 3), // "pos"
QT_MOC_LITERAL(12, 62, 3), // "vel"
QT_MOC_LITERAL(13, 66, 4), // "BYTE"
QT_MOC_LITERAL(14, 71, 2), // "dt"
QT_MOC_LITERAL(15, 74, 6), // "runIPM"
QT_MOC_LITERAL(16, 81, 4), // "dump"
QT_MOC_LITERAL(17, 86, 11), // "std::string"
QT_MOC_LITERAL(18, 98, 8), // "pathDate"
QT_MOC_LITERAL(19, 107, 4) // "stop"

    },
    "maxonMotor\0ready\0\0sendData\0WORD\0id\0"
    "out\0home\0read\0t\0addPVT\0pos\0vel\0BYTE\0"
    "dt\0runIPM\0dump\0std::string\0pathDate\0"
    "stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_maxonMotor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   60,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    4,   64,    2, 0x0a /* Public */,
      15,    1,   73,    2, 0x0a /* Public */,
      16,    1,   76,    2, 0x0a /* Public */,
      19,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Double,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Long, QMetaType::Long, 0x80000000 | 13,    5,   11,   12,   14,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void maxonMotor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        maxonMotor *_t = static_cast<maxonMotor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->sendData((*reinterpret_cast< const WORD(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->home(); break;
        case 3: _t->read((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->addPVT((*reinterpret_cast< const WORD(*)>(_a[1])),(*reinterpret_cast< const long(*)>(_a[2])),(*reinterpret_cast< const long(*)>(_a[3])),(*reinterpret_cast< const BYTE(*)>(_a[4]))); break;
        case 5: _t->runIPM((*reinterpret_cast< const WORD(*)>(_a[1]))); break;
        case 6: _t->dump((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (maxonMotor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&maxonMotor::ready)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (maxonMotor::*_t)(const WORD , const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&maxonMotor::sendData)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject maxonMotor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_maxonMotor.data,
      qt_meta_data_maxonMotor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *maxonMotor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *maxonMotor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_maxonMotor.stringdata0))
        return static_cast<void*>(const_cast< maxonMotor*>(this));
    return QObject::qt_metacast(_clname);
}

int maxonMotor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void maxonMotor::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void maxonMotor::sendData(const WORD _t1, const double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
