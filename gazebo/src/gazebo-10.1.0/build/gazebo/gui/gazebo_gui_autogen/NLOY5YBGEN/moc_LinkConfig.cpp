/****************************************************************************
** Meta object code from reading C++ file 'LinkConfig.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/LinkConfig.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkConfig.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__LinkConfig_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__LinkConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__LinkConfig_t qt_meta_stringdata_gazebo__gui__LinkConfig = {
    {
QT_MOC_LITERAL(0, 0, 23), // "gazebo::gui::LinkConfig"
QT_MOC_LITERAL(1, 24, 7), // "Applied"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "DensityValueChanged"
QT_MOC_LITERAL(4, 53, 6), // "_value"
QT_MOC_LITERAL(5, 60, 16), // "MassValueChanged"
QT_MOC_LITERAL(6, 77, 19), // "RestoreOriginalData"
QT_MOC_LITERAL(7, 97, 21), // "OnDensityValueChanged"
QT_MOC_LITERAL(8, 119, 18), // "OnMassValueChanged"
QT_MOC_LITERAL(9, 138, 13), // "OnPoseChanged"
QT_MOC_LITERAL(10, 152, 5), // "_name"
QT_MOC_LITERAL(11, 158, 22) // "ignition::math::Pose3d"

    },
    "gazebo::gui::LinkConfig\0Applied\0\0"
    "DensityValueChanged\0_value\0MassValueChanged\0"
    "RestoreOriginalData\0OnDensityValueChanged\0"
    "OnMassValueChanged\0OnPoseChanged\0_name\0"
    "ignition::math::Pose3d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__LinkConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   56,    2, 0x0a /* Public */,
       7,    1,   57,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
       9,    2,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,    4,

       0        // eod
};

void gazebo::gui::LinkConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Applied(); break;
        case 1: _t->DensityValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->MassValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->RestoreOriginalData(); break;
        case 4: _t->OnDensityValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->OnMassValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 6: _t->OnPoseChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Pose3d(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfig::Applied)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkConfig::*)(const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfig::DensityValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkConfig::*)(const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfig::MassValueChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::LinkConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__LinkConfig.data,
    qt_meta_data_gazebo__gui__LinkConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::LinkConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::LinkConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__LinkConfig.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::LinkConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::LinkConfig::Applied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void gazebo::gui::LinkConfig::DensityValueChanged(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::LinkConfig::MassValueChanged(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
