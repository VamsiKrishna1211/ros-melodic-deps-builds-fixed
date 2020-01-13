/****************************************************************************
** Meta object code from reading C++ file 'ModelData.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/ModelData.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelData.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__LinkData_t {
    QByteArrayData data[18];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__LinkData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__LinkData_t qt_meta_stringdata_gazebo__gui__LinkData = {
    {
QT_MOC_LITERAL(0, 0, 21), // "gazebo::gui::LinkData"
QT_MOC_LITERAL(1, 22, 14), // "ShowCollisions"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "_show"
QT_MOC_LITERAL(4, 44, 11), // "ShowVisuals"
QT_MOC_LITERAL(5, 56, 13), // "ShowLinkFrame"
QT_MOC_LITERAL(6, 70, 8), // "OnAccept"
QT_MOC_LITERAL(7, 79, 7), // "OnApply"
QT_MOC_LITERAL(8, 87, 11), // "OnAddVisual"
QT_MOC_LITERAL(9, 99, 11), // "std::string"
QT_MOC_LITERAL(10, 111, 5), // "_name"
QT_MOC_LITERAL(11, 117, 14), // "OnAddCollision"
QT_MOC_LITERAL(12, 132, 15), // "_collisionShape"
QT_MOC_LITERAL(13, 148, 14), // "OnRemoveVisual"
QT_MOC_LITERAL(14, 163, 17), // "OnRemoveCollision"
QT_MOC_LITERAL(15, 181, 15), // "OnShowCollision"
QT_MOC_LITERAL(16, 197, 12), // "OnShowVisual"
QT_MOC_LITERAL(17, 210, 17) // "OnInspectorOpened"

    },
    "gazebo::gui::LinkData\0ShowCollisions\0"
    "\0_show\0ShowVisuals\0ShowLinkFrame\0"
    "OnAccept\0OnApply\0OnAddVisual\0std::string\0"
    "_name\0OnAddCollision\0_collisionShape\0"
    "OnRemoveVisual\0OnRemoveCollision\0"
    "OnShowCollision\0OnShowVisual\0"
    "OnInspectorOpened"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__LinkData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       5,    1,   80,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      11,    2,   88,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      15,    2,   99,    2, 0x08 /* Private */,
      16,    2,  104,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9,    3,   10,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9,    3,   10,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::LinkData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowCollisions((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->ShowVisuals((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->ShowLinkFrame((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->OnAccept(); break;
        case 4: _t->OnApply(); break;
        case 5: _t->OnAddVisual((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->OnAddCollision((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 7: _t->OnRemoveVisual((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 8: _t->OnRemoveCollision((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 9: _t->OnShowCollision((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 10: _t->OnShowVisual((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 11: _t->OnInspectorOpened(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::LinkData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__LinkData.data,
    qt_meta_data_gazebo__gui__LinkData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::LinkData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::LinkData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__LinkData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::LinkData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_gazebo__gui__ModelPluginData_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ModelPluginData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ModelPluginData_t qt_meta_stringdata_gazebo__gui__ModelPluginData = {
    {
QT_MOC_LITERAL(0, 0, 28) // "gazebo::gui::ModelPluginData"

    },
    "gazebo::gui::ModelPluginData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ModelPluginData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gazebo::gui::ModelPluginData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ModelPluginData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ModelPluginData.data,
    qt_meta_data_gazebo__gui__ModelPluginData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ModelPluginData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ModelPluginData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelPluginData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::ModelPluginData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
