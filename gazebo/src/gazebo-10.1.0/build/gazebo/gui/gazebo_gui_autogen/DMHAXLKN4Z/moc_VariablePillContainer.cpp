/****************************************************************************
** Meta object code from reading C++ file 'VariablePillContainer.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/plot/VariablePillContainer.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VariablePillContainer.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__VariablePillContainer_t {
    QByteArrayData data[15];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__VariablePillContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__VariablePillContainer_t qt_meta_stringdata_gazebo__gui__VariablePillContainer = {
    {
QT_MOC_LITERAL(0, 0, 34), // "gazebo::gui::VariablePillCont..."
QT_MOC_LITERAL(1, 35, 13), // "VariableAdded"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 3), // "_id"
QT_MOC_LITERAL(4, 54, 11), // "std::string"
QT_MOC_LITERAL(5, 66, 5), // "_name"
QT_MOC_LITERAL(6, 72, 9), // "_targetId"
QT_MOC_LITERAL(7, 82, 15), // "VariableRemoved"
QT_MOC_LITERAL(8, 98, 13), // "VariableMoved"
QT_MOC_LITERAL(9, 112, 20), // "VariableLabelChanged"
QT_MOC_LITERAL(10, 133, 6), // "_label"
QT_MOC_LITERAL(11, 140, 13), // "OnAddVariable"
QT_MOC_LITERAL(12, 154, 16), // "OnRemoveVariable"
QT_MOC_LITERAL(13, 171, 14), // "OnMoveVariable"
QT_MOC_LITERAL(14, 186, 18) // "OnSetVariableLabel"

    },
    "gazebo::gui::VariablePillContainer\0"
    "VariableAdded\0\0_id\0std::string\0_name\0"
    "_targetId\0VariableRemoved\0VariableMoved\0"
    "VariableLabelChanged\0_label\0OnAddVariable\0"
    "OnRemoveVariable\0OnMoveVariable\0"
    "OnSetVariableLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__VariablePillContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       7,    2,   61,    2, 0x06 /* Public */,
       8,    2,   66,    2, 0x06 /* Public */,
       9,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   76,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    1,   84,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4, QMetaType::UInt,    3,    5,    6,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    6,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,   10,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 4,   10,

       0        // eod
};

void gazebo::gui::VariablePillContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VariablePillContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VariableAdded((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3]))); break;
        case 1: _t->VariableRemoved((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 2: _t->VariableMoved((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 3: _t->VariableLabelChanged((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnAddVariable((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->OnRemoveVariable((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 6: _t->OnMoveVariable((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 7: _t->OnSetVariableLabel((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VariablePillContainer::*)(const unsigned int , const std::string & , const unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePillContainer::VariableAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VariablePillContainer::*)(const unsigned int , const unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePillContainer::VariableRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VariablePillContainer::*)(const unsigned int , const unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePillContainer::VariableMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VariablePillContainer::*)(const unsigned int , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePillContainer::VariableLabelChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::VariablePillContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__VariablePillContainer.data,
    qt_meta_data_gazebo__gui__VariablePillContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::VariablePillContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::VariablePillContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__VariablePillContainer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::VariablePillContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void gazebo::gui::VariablePillContainer::VariableAdded(const unsigned int _t1, const std::string & _t2, const unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::VariablePillContainer::VariableRemoved(const unsigned int _t1, const unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::VariablePillContainer::VariableMoved(const unsigned int _t1, const unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::VariablePillContainer::VariableLabelChanged(const unsigned int _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
