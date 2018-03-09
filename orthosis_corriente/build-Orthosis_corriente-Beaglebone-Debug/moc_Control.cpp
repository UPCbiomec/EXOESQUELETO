/****************************************************************************
** Meta object code from reading C++ file 'Control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Beaglebone/Control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_motorControl_t {
    QByteArrayData data[20];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_motorControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_motorControl_t qt_meta_stringdata_motorControl = {
    {
QT_MOC_LITERAL(0, 0, 12), // "motorControl"
QT_MOC_LITERAL(1, 13, 8), // "motorAdd"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "WORD"
QT_MOC_LITERAL(4, 28, 2), // "id"
QT_MOC_LITERAL(5, 31, 3), // "pos"
QT_MOC_LITERAL(6, 35, 3), // "vel"
QT_MOC_LITERAL(7, 39, 4), // "BYTE"
QT_MOC_LITERAL(8, 44, 2), // "dt"
QT_MOC_LITERAL(9, 47, 8), // "motorRun"
QT_MOC_LITERAL(10, 56, 8), // "paramGet"
QT_MOC_LITERAL(11, 65, 2), // "ch"
QT_MOC_LITERAL(12, 68, 3), // "par"
QT_MOC_LITERAL(13, 72, 3), // "val"
QT_MOC_LITERAL(14, 76, 6), // "PVTGet"
QT_MOC_LITERAL(15, 83, 13), // "QVector<long>"
QT_MOC_LITERAL(16, 97, 1), // "p"
QT_MOC_LITERAL(17, 99, 1), // "v"
QT_MOC_LITERAL(18, 101, 12), // "QVector<int>"
QT_MOC_LITERAL(19, 114, 1) // "t"

    },
    "motorControl\0motorAdd\0\0WORD\0id\0pos\0"
    "vel\0BYTE\0dt\0motorRun\0paramGet\0ch\0par\0"
    "val\0PVTGet\0QVector<long>\0p\0v\0QVector<int>\0"
    "t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_motorControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,
       9,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   46,    2, 0x0a /* Public */,
      14,    4,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Long, QMetaType::Long, 0x80000000 | 7,    4,    5,    6,    8,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   11,   16,   17,   19,

       0        // eod
};

void motorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        motorControl *_t = static_cast<motorControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->motorAdd((*reinterpret_cast< const WORD(*)>(_a[1])),(*reinterpret_cast< const long(*)>(_a[2])),(*reinterpret_cast< const long(*)>(_a[3])),(*reinterpret_cast< const BYTE(*)>(_a[4]))); break;
        case 1: _t->motorRun((*reinterpret_cast< const WORD(*)>(_a[1]))); break;
        case 2: _t->paramGet((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 3: _t->PVTGet((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QVector<long>(*)>(_a[2])),(*reinterpret_cast< const QVector<long>(*)>(_a[3])),(*reinterpret_cast< const QVector<int>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (motorControl::*_t)(const WORD , const long , const long , const BYTE );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&motorControl::motorAdd)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (motorControl::*_t)(const WORD );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&motorControl::motorRun)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject motorControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_motorControl.data,
      qt_meta_data_motorControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *motorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *motorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_motorControl.stringdata0))
        return static_cast<void*>(const_cast< motorControl*>(this));
    return QObject::qt_metacast(_clname);
}

int motorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void motorControl::motorAdd(const WORD _t1, const long _t2, const long _t3, const BYTE _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void motorControl::motorRun(const WORD _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
