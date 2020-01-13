/****************************************************************************
** Meta object code from reading C++ file 'JointMaker.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/JointMaker.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointMaker.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__JointMaker_t {
    QByteArrayData data[17];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointMaker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointMaker_t qt_meta_stringdata_gazebo__gui__JointMaker = {
    {
QT_MOC_LITERAL(0, 0, 23), // "gazebo::gui::JointMaker"
QT_MOC_LITERAL(1, 24, 10), // "JointAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "EmitLinkInserted"
QT_MOC_LITERAL(4, 53, 11), // "std::string"
QT_MOC_LITERAL(5, 65, 7), // "_linkId"
QT_MOC_LITERAL(6, 73, 15), // "EmitLinkRemoved"
QT_MOC_LITERAL(7, 89, 10), // "ShowJoints"
QT_MOC_LITERAL(8, 100, 5), // "_show"
QT_MOC_LITERAL(9, 106, 6), // "OnType"
QT_MOC_LITERAL(10, 113, 8), // "_typeInt"
QT_MOC_LITERAL(11, 122, 7), // "SetAxis"
QT_MOC_LITERAL(12, 130, 5), // "_axis"
QT_MOC_LITERAL(13, 136, 24), // "ignition::math::Vector3d"
QT_MOC_LITERAL(14, 161, 6), // "_value"
QT_MOC_LITERAL(15, 168, 15), // "OnOpenInspector"
QT_MOC_LITERAL(16, 184, 8) // "OnDelete"

    },
    "gazebo::gui::JointMaker\0JointAdded\0\0"
    "EmitLinkInserted\0std::string\0_linkId\0"
    "EmitLinkRemoved\0ShowJoints\0_show\0"
    "OnType\0_typeInt\0SetAxis\0_axis\0"
    "ignition::math::Vector3d\0_value\0"
    "OnOpenInspector\0OnDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointMaker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      11,    2,   67,    2, 0x0a /* Public */,
      15,    0,   72,    2, 0x08 /* Private */,
      16,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 13,   12,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::JointMaker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointMaker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->JointAdded(); break;
        case 1: _t->EmitLinkInserted((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->EmitLinkRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->ShowJoints((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->OnType((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->SetAxis((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[2]))); break;
        case 6: _t->OnOpenInspector(); break;
        case 7: _t->OnDelete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointMaker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointMaker::JointAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JointMaker::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointMaker::EmitLinkInserted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JointMaker::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointMaker::EmitLinkRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointMaker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointMaker.data,
    qt_meta_data_gazebo__gui__JointMaker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointMaker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointMaker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointMaker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::JointMaker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void gazebo::gui::JointMaker::JointAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void gazebo::gui::JointMaker::EmitLinkInserted(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::JointMaker::EmitLinkRemoved(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_gazebo__gui__JointData_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointData_t qt_meta_stringdata_gazebo__gui__JointData = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gazebo::gui::JointData"
QT_MOC_LITERAL(1, 23, 15), // "OnOpenInspector"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7) // "OnApply"

    },
    "gazebo::gui::JointData\0OnOpenInspector\0"
    "\0OnApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::JointData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOpenInspector(); break;
        case 1: _t->OnApply(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointData.data,
    qt_meta_data_gazebo__gui__JointData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::JointData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
