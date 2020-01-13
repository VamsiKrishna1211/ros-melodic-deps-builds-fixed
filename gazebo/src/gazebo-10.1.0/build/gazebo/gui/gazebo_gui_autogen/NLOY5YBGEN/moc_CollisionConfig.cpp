/****************************************************************************
** Meta object code from reading C++ file 'CollisionConfig.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/CollisionConfig.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CollisionConfig.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__CollisionConfigData_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__CollisionConfigData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__CollisionConfigData_t qt_meta_stringdata_gazebo__gui__CollisionConfigData = {
    {
QT_MOC_LITERAL(0, 0, 32), // "gazebo::gui::CollisionConfigData"
QT_MOC_LITERAL(1, 33, 16), // "CollisionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "std::string"
QT_MOC_LITERAL(4, 63, 5), // "_name"
QT_MOC_LITERAL(5, 69, 5), // "_type"
QT_MOC_LITERAL(6, 75, 19), // "RestoreOriginalData"
QT_MOC_LITERAL(7, 95, 12), // "OnToggleItem"
QT_MOC_LITERAL(8, 108, 8), // "_checked"
QT_MOC_LITERAL(9, 117, 17) // "OnGeometryChanged"

    },
    "gazebo::gui::CollisionConfigData\0"
    "CollisionChanged\0\0std::string\0_name\0"
    "_type\0RestoreOriginalData\0OnToggleItem\0"
    "_checked\0OnGeometryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__CollisionConfigData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x08 /* Private */,
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::CollisionConfigData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollisionConfigData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CollisionChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->RestoreOriginalData(); break;
        case 2: _t->OnToggleItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnGeometryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CollisionConfigData::*)(const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionConfigData::CollisionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::CollisionConfigData::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__CollisionConfigData.data,
    qt_meta_data_gazebo__gui__CollisionConfigData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::CollisionConfigData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::CollisionConfigData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__CollisionConfigData.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::CollisionConfigData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void gazebo::gui::CollisionConfigData::CollisionChanged(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_gazebo__gui__CollisionConfig_t {
    QByteArrayData data[25];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__CollisionConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__CollisionConfig_t qt_meta_stringdata_gazebo__gui__CollisionConfig = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gazebo::gui::CollisionConfig"
QT_MOC_LITERAL(1, 29, 16), // "CollisionRemoved"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "std::string"
QT_MOC_LITERAL(4, 59, 5), // "_name"
QT_MOC_LITERAL(5, 65, 14), // "CollisionAdded"
QT_MOC_LITERAL(6, 80, 15), // "_collisionShape"
QT_MOC_LITERAL(7, 96, 13), // "ShowCollision"
QT_MOC_LITERAL(8, 110, 5), // "_show"
QT_MOC_LITERAL(9, 116, 7), // "Applied"
QT_MOC_LITERAL(10, 124, 16), // "CollisionChanged"
QT_MOC_LITERAL(11, 141, 5), // "_type"
QT_MOC_LITERAL(12, 147, 19), // "RestoreOriginalData"
QT_MOC_LITERAL(13, 167, 14), // "OnAddCollision"
QT_MOC_LITERAL(14, 182, 17), // "OnRemoveCollision"
QT_MOC_LITERAL(15, 200, 3), // "_id"
QT_MOC_LITERAL(16, 204, 15), // "OnShowCollision"
QT_MOC_LITERAL(17, 220, 13), // "OnPoseChanged"
QT_MOC_LITERAL(18, 234, 22), // "ignition::math::Pose3d"
QT_MOC_LITERAL(19, 257, 6), // "_value"
QT_MOC_LITERAL(20, 264, 18), // "OnCollisionChanged"
QT_MOC_LITERAL(21, 283, 17), // "OnGeometryChanged"
QT_MOC_LITERAL(22, 301, 24), // "ignition::math::Vector3d"
QT_MOC_LITERAL(23, 326, 11), // "_dimensions"
QT_MOC_LITERAL(24, 338, 4) // "_uri"

    },
    "gazebo::gui::CollisionConfig\0"
    "CollisionRemoved\0\0std::string\0_name\0"
    "CollisionAdded\0_collisionShape\0"
    "ShowCollision\0_show\0Applied\0"
    "CollisionChanged\0_type\0RestoreOriginalData\0"
    "OnAddCollision\0OnRemoveCollision\0_id\0"
    "OnShowCollision\0OnPoseChanged\0"
    "ignition::math::Pose3d\0_value\0"
    "OnCollisionChanged\0OnGeometryChanged\0"
    "ignition::math::Vector3d\0_dimensions\0"
    "_uri"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__CollisionConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    2,   77,    2, 0x06 /* Public */,
       7,    2,   82,    2, 0x06 /* Public */,
       9,    0,   87,    2, 0x06 /* Public */,
      10,    2,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   93,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      16,    1,  100,    2, 0x08 /* Private */,
      17,    2,  103,    2, 0x08 /* Private */,
      20,    2,  108,    2, 0x08 /* Private */,
      21,    4,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    6,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3,    8,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,    4,   19,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,   11,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 22, 0x80000000 | 3,    4,   19,   23,   24,

       0        // eod
};

void gazebo::gui::CollisionConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollisionConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CollisionRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->CollisionAdded((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->ShowCollision((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->Applied(); break;
        case 4: _t->CollisionChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->RestoreOriginalData(); break;
        case 6: _t->OnAddCollision((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->OnRemoveCollision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnShowCollision((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->OnPoseChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Pose3d(*)>(_a[2]))); break;
        case 10: _t->OnCollisionChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 11: _t->OnGeometryChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[3])),(*reinterpret_cast< const std::string(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CollisionConfig::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionConfig::CollisionRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CollisionConfig::*)(const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionConfig::CollisionAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CollisionConfig::*)(const bool , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionConfig::ShowCollision)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CollisionConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionConfig::Applied)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CollisionConfig::*)(const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionConfig::CollisionChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::CollisionConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__CollisionConfig.data,
    qt_meta_data_gazebo__gui__CollisionConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::CollisionConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::CollisionConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__CollisionConfig.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::CollisionConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gazebo::gui::CollisionConfig::CollisionRemoved(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::CollisionConfig::CollisionAdded(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::CollisionConfig::ShowCollision(const bool _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::CollisionConfig::Applied()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void gazebo::gui::CollisionConfig::CollisionChanged(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
