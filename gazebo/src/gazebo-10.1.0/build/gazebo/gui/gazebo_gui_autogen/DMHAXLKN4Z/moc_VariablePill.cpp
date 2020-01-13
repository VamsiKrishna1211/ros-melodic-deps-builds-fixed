/****************************************************************************
** Meta object code from reading C++ file 'VariablePill.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/plot/VariablePill.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VariablePill.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__VariablePill_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__VariablePill_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__VariablePill_t qt_meta_stringdata_gazebo__gui__VariablePill = {
    {
QT_MOC_LITERAL(0, 0, 25), // "gazebo::gui::VariablePill"
QT_MOC_LITERAL(1, 26, 13), // "VariableAdded"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 3), // "_id"
QT_MOC_LITERAL(4, 45, 11), // "std::string"
QT_MOC_LITERAL(5, 57, 5), // "_name"
QT_MOC_LITERAL(6, 63, 15), // "VariableRemoved"
QT_MOC_LITERAL(7, 79, 13), // "VariableMoved"
QT_MOC_LITERAL(8, 93, 20), // "VariableLabelChanged"
QT_MOC_LITERAL(9, 114, 6) // "_label"

    },
    "gazebo::gui::VariablePill\0VariableAdded\0"
    "\0_id\0std::string\0_name\0VariableRemoved\0"
    "VariableMoved\0VariableLabelChanged\0"
    "_label"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__VariablePill[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,
       7,    1,   42,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 4,    9,

       0        // eod
};

void gazebo::gui::VariablePill::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VariablePill *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VariableAdded((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->VariableRemoved((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 2: _t->VariableMoved((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 3: _t->VariableLabelChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VariablePill::*)(const unsigned int , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePill::VariableAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VariablePill::*)(const unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePill::VariableRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VariablePill::*)(const unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePill::VariableMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VariablePill::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePill::VariableLabelChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::VariablePill::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__VariablePill.data,
    qt_meta_data_gazebo__gui__VariablePill,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::VariablePill::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::VariablePill::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__VariablePill.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::VariablePill::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void gazebo::gui::VariablePill::VariableAdded(const unsigned int _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::VariablePill::VariableRemoved(const unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::VariablePill::VariableMoved(const unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::VariablePill::VariableLabelChanged(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
