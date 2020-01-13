/****************************************************************************
** Meta object code from reading C++ file 'JointInspector.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/JointInspector.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointInspector.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__JointInspector_t {
    QByteArrayData data[20];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointInspector_t qt_meta_stringdata_gazebo__gui__JointInspector = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gazebo::gui::JointInspector"
QT_MOC_LITERAL(1, 28, 7), // "Applied"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "OnEnumChanged"
QT_MOC_LITERAL(4, 51, 5), // "_name"
QT_MOC_LITERAL(5, 57, 6), // "_value"
QT_MOC_LITERAL(6, 64, 13), // "OnPoseChanged"
QT_MOC_LITERAL(7, 78, 22), // "ignition::math::Pose3d"
QT_MOC_LITERAL(8, 101, 17), // "OnVector3dChanged"
QT_MOC_LITERAL(9, 119, 24), // "ignition::math::Vector3d"
QT_MOC_LITERAL(10, 144, 15), // "OnStringChanged"
QT_MOC_LITERAL(11, 160, 11), // "std::string"
QT_MOC_LITERAL(12, 172, 6), // "OnSwap"
QT_MOC_LITERAL(13, 179, 14), // "OnLinkInserted"
QT_MOC_LITERAL(14, 194, 9), // "_linkName"
QT_MOC_LITERAL(15, 204, 13), // "OnLinkRemoved"
QT_MOC_LITERAL(16, 218, 8), // "OnRemove"
QT_MOC_LITERAL(17, 227, 8), // "OnCancel"
QT_MOC_LITERAL(18, 236, 4), // "OnOK"
QT_MOC_LITERAL(19, 241, 19) // "RestoreOriginalData"

    },
    "gazebo::gui::JointInspector\0Applied\0"
    "\0OnEnumChanged\0_name\0_value\0OnPoseChanged\0"
    "ignition::math::Pose3d\0OnVector3dChanged\0"
    "ignition::math::Vector3d\0OnStringChanged\0"
    "std::string\0OnSwap\0OnLinkInserted\0"
    "_linkName\0OnLinkRemoved\0OnRemove\0"
    "OnCancel\0OnOK\0RestoreOriginalData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointInspector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   75,    2, 0x08 /* Private */,
       6,    2,   80,    2, 0x08 /* Private */,
       8,    2,   85,    2, 0x08 /* Private */,
      10,    2,   90,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   14,
    QMetaType::Void, 0x80000000 | 11,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::JointInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Applied(); break;
        case 1: _t->OnEnumChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->OnPoseChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Pose3d(*)>(_a[2]))); break;
        case 3: _t->OnVector3dChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[2]))); break;
        case 4: _t->OnStringChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->OnSwap(); break;
        case 6: _t->OnLinkInserted((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->OnLinkRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 8: _t->OnRemove(); break;
        case 9: _t->OnCancel(); break;
        case 10: _t->OnOK(); break;
        case 11: _t->RestoreOriginalData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointInspector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointInspector::Applied)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointInspector.data,
    qt_meta_data_gazebo__gui__JointInspector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointInspector.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::JointInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void gazebo::gui::JointInspector::Applied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
