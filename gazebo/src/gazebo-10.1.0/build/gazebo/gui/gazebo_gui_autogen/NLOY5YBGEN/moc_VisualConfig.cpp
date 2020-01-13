/****************************************************************************
** Meta object code from reading C++ file 'VisualConfig.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/VisualConfig.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualConfig.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__VisualConfigData_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__VisualConfigData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__VisualConfigData_t qt_meta_stringdata_gazebo__gui__VisualConfigData = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gazebo::gui::VisualConfigData"
QT_MOC_LITERAL(1, 30, 19), // "RestoreOriginalData"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "OnToggleItem"
QT_MOC_LITERAL(4, 64, 8) // "_checked"

    },
    "gazebo::gui::VisualConfigData\0"
    "RestoreOriginalData\0\0OnToggleItem\0"
    "_checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__VisualConfigData[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void gazebo::gui::VisualConfigData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualConfigData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RestoreOriginalData(); break;
        case 1: _t->OnToggleItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::VisualConfigData::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__VisualConfigData.data,
    qt_meta_data_gazebo__gui__VisualConfigData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::VisualConfigData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::VisualConfigData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__VisualConfigData.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::VisualConfigData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_gazebo__gui__VisualConfig_t {
    QByteArrayData data[25];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__VisualConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__VisualConfig_t qt_meta_stringdata_gazebo__gui__VisualConfig = {
    {
QT_MOC_LITERAL(0, 0, 25), // "gazebo::gui::VisualConfig"
QT_MOC_LITERAL(1, 26, 13), // "VisualRemoved"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "std::string"
QT_MOC_LITERAL(4, 53, 5), // "_name"
QT_MOC_LITERAL(5, 59, 11), // "VisualAdded"
QT_MOC_LITERAL(6, 71, 10), // "ShowVisual"
QT_MOC_LITERAL(7, 82, 5), // "_show"
QT_MOC_LITERAL(8, 88, 7), // "Applied"
QT_MOC_LITERAL(9, 96, 19), // "RestoreOriginalData"
QT_MOC_LITERAL(10, 116, 11), // "OnAddVisual"
QT_MOC_LITERAL(11, 128, 14), // "OnRemoveVisual"
QT_MOC_LITERAL(12, 143, 3), // "_id"
QT_MOC_LITERAL(13, 147, 12), // "OnShowVisual"
QT_MOC_LITERAL(14, 160, 13), // "OnPoseChanged"
QT_MOC_LITERAL(15, 174, 22), // "ignition::math::Pose3d"
QT_MOC_LITERAL(16, 197, 6), // "_value"
QT_MOC_LITERAL(17, 204, 17), // "OnGeometryChanged"
QT_MOC_LITERAL(18, 222, 24), // "ignition::math::Vector3d"
QT_MOC_LITERAL(19, 247, 11), // "_dimensions"
QT_MOC_LITERAL(20, 259, 4), // "_uri"
QT_MOC_LITERAL(21, 264, 14), // "OnColorChanged"
QT_MOC_LITERAL(22, 279, 21), // "ignition::math::Color"
QT_MOC_LITERAL(23, 301, 15), // "OnDoubleChanged"
QT_MOC_LITERAL(24, 317, 15) // "OnStringChanged"

    },
    "gazebo::gui::VisualConfig\0VisualRemoved\0"
    "\0std::string\0_name\0VisualAdded\0"
    "ShowVisual\0_show\0Applied\0RestoreOriginalData\0"
    "OnAddVisual\0OnRemoveVisual\0_id\0"
    "OnShowVisual\0OnPoseChanged\0"
    "ignition::math::Pose3d\0_value\0"
    "OnGeometryChanged\0ignition::math::Vector3d\0"
    "_dimensions\0_uri\0OnColorChanged\0"
    "ignition::math::Color\0OnDoubleChanged\0"
    "OnStringChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__VisualConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    2,   85,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    2,   99,    2, 0x08 /* Private */,
      17,    4,  104,    2, 0x08 /* Private */,
      21,    2,  113,    2, 0x08 /* Private */,
      23,    2,  118,    2, 0x08 /* Private */,
      24,    2,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3,    7,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 18, 0x80000000 | 3,    4,   16,   19,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,    4,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    4,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    4,   16,

       0        // eod
};

void gazebo::gui::VisualConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VisualRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->VisualAdded((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->ShowVisual((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->Applied(); break;
        case 4: _t->RestoreOriginalData(); break;
        case 5: _t->OnAddVisual(); break;
        case 6: _t->OnRemoveVisual((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnShowVisual((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->OnPoseChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Pose3d(*)>(_a[2]))); break;
        case 9: _t->OnGeometryChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[3])),(*reinterpret_cast< const std::string(*)>(_a[4]))); break;
        case 10: _t->OnColorChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Color(*)>(_a[2]))); break;
        case 11: _t->OnDoubleChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 12: _t->OnStringChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VisualConfig::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualConfig::VisualRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VisualConfig::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualConfig::VisualAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VisualConfig::*)(const bool , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualConfig::ShowVisual)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VisualConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualConfig::Applied)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::VisualConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__VisualConfig.data,
    qt_meta_data_gazebo__gui__VisualConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::VisualConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::VisualConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__VisualConfig.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::VisualConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::VisualConfig::VisualRemoved(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::VisualConfig::VisualAdded(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::VisualConfig::ShowVisual(const bool _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::VisualConfig::Applied()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
