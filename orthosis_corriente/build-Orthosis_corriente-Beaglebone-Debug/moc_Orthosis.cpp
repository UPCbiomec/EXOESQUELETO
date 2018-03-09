/****************************************************************************
** Meta object code from reading C++ file 'Orthosis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Beaglebone/Orthosis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Orthosis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Orthosis_t {
    QByteArrayData data[25];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Orthosis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Orthosis_t qt_meta_stringdata_Orthosis = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Orthosis"
QT_MOC_LITERAL(1, 9, 10), // "timeUpdate"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1), // "t"
QT_MOC_LITERAL(4, 23, 9), // "razorSync"
QT_MOC_LITERAL(5, 33, 9), // "razorRead"
QT_MOC_LITERAL(6, 43, 9), // "razorDump"
QT_MOC_LITERAL(7, 53, 11), // "std::string"
QT_MOC_LITERAL(8, 65, 8), // "pathDate"
QT_MOC_LITERAL(9, 74, 9), // "razorStop"
QT_MOC_LITERAL(10, 84, 9), // "motorHome"
QT_MOC_LITERAL(11, 94, 9), // "motorRead"
QT_MOC_LITERAL(12, 104, 9), // "motorDump"
QT_MOC_LITERAL(13, 114, 9), // "motorStop"
QT_MOC_LITERAL(14, 124, 4), // "loop"
QT_MOC_LITERAL(15, 129, 10), // "razorReady"
QT_MOC_LITERAL(16, 140, 8), // "razorGet"
QT_MOC_LITERAL(17, 149, 2), // "id"
QT_MOC_LITERAL(18, 152, 14), // "QVector<float>"
QT_MOC_LITERAL(19, 167, 3), // "qin"
QT_MOC_LITERAL(20, 171, 10), // "motorReady"
QT_MOC_LITERAL(21, 182, 8), // "motorGet"
QT_MOC_LITERAL(22, 191, 4), // "WORD"
QT_MOC_LITERAL(23, 196, 3), // "mIn"
QT_MOC_LITERAL(24, 200, 20) // "readPendingDatagrams"

    },
    "Orthosis\0timeUpdate\0\0t\0razorSync\0"
    "razorRead\0razorDump\0std::string\0"
    "pathDate\0razorStop\0motorHome\0motorRead\0"
    "motorDump\0motorStop\0loop\0razorReady\0"
    "razorGet\0id\0QVector<float>\0qin\0"
    "motorReady\0motorGet\0WORD\0mIn\0"
    "readPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Orthosis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,
       5,    0,   93,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       9,    0,   97,    2, 0x06 /* Public */,
      10,    0,   98,    2, 0x06 /* Public */,
      11,    1,   99,    2, 0x06 /* Public */,
      12,    1,  102,    2, 0x06 /* Public */,
      13,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    2,  108,    2, 0x0a /* Public */,
      20,    0,  113,    2, 0x0a /* Public */,
      21,    2,  114,    2, 0x0a /* Public */,
      24,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   17,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Double,   17,   23,
    QMetaType::Void,

       0        // eod
};

void Orthosis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Orthosis *_t = static_cast<Orthosis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeUpdate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->razorSync(); break;
        case 2: _t->razorRead(); break;
        case 3: _t->razorDump((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 4: _t->razorStop(); break;
        case 5: _t->motorHome(); break;
        case 6: _t->motorRead((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 7: _t->motorDump((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 8: _t->motorStop(); break;
        case 9: _t->loop(); break;
        case 10: _t->razorReady(); break;
        case 11: _t->razorGet((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QVector<float>(*)>(_a[2]))); break;
        case 12: _t->motorReady(); break;
        case 13: _t->motorGet((*reinterpret_cast< const WORD(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 14: _t->readPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
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
            typedef void (Orthosis::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::timeUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::razorSync)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::razorRead)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)(const std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::razorDump)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::razorStop)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::motorHome)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::motorRead)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)(const std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::motorDump)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Orthosis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Orthosis::motorStop)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject Orthosis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Orthosis.data,
      qt_meta_data_Orthosis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Orthosis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Orthosis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Orthosis.stringdata0))
        return static_cast<void*>(const_cast< Orthosis*>(this));
    return QObject::qt_metacast(_clname);
}

int Orthosis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Orthosis::timeUpdate(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Orthosis::razorSync()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Orthosis::razorRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Orthosis::razorDump(const std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Orthosis::razorStop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Orthosis::motorHome()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Orthosis::motorRead(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Orthosis::motorDump(const std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Orthosis::motorStop()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
