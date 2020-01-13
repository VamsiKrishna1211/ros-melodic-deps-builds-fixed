/****************************************************************************
** Meta object code from reading C++ file 'JointCreationDialog.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/JointCreationDialog.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointCreationDialog.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__JointCreationDialog_t {
    QByteArrayData data[21];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointCreationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointCreationDialog_t qt_meta_stringdata_gazebo__gui__JointCreationDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "gazebo::gui::JointCreationDialog"
QT_MOC_LITERAL(1, 33, 16), // "OnLinkFromDialog"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 20), // "OnVector3dFromDialog"
QT_MOC_LITERAL(4, 72, 5), // "_name"
QT_MOC_LITERAL(5, 78, 24), // "ignition::math::Vector3d"
QT_MOC_LITERAL(6, 103, 5), // "_pose"
QT_MOC_LITERAL(7, 109, 16), // "OnPoseFromDialog"
QT_MOC_LITERAL(8, 126, 22), // "ignition::math::Pose3d"
QT_MOC_LITERAL(9, 149, 13), // "OnEnumChanged"
QT_MOC_LITERAL(10, 163, 6), // "_value"
QT_MOC_LITERAL(11, 170, 10), // "OnResetAll"
QT_MOC_LITERAL(12, 181, 7), // "OnAlign"
QT_MOC_LITERAL(13, 189, 4), // "_int"
QT_MOC_LITERAL(14, 194, 15), // "UncheckAllAlign"
QT_MOC_LITERAL(15, 210, 13), // "_blockSignals"
QT_MOC_LITERAL(16, 224, 6), // "OnType"
QT_MOC_LITERAL(17, 231, 8), // "_typeInt"
QT_MOC_LITERAL(18, 240, 6), // "OnSwap"
QT_MOC_LITERAL(19, 247, 8), // "OnCancel"
QT_MOC_LITERAL(20, 256, 8) // "OnCreate"

    },
    "gazebo::gui::JointCreationDialog\0"
    "OnLinkFromDialog\0\0OnVector3dFromDialog\0"
    "_name\0ignition::math::Vector3d\0_pose\0"
    "OnPoseFromDialog\0ignition::math::Pose3d\0"
    "OnEnumChanged\0_value\0OnResetAll\0OnAlign\0"
    "_int\0UncheckAllAlign\0_blockSignals\0"
    "OnType\0_typeInt\0OnSwap\0OnCancel\0"
    "OnCreate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointCreationDialog[] = {

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
       1,    0,   74,    2, 0x08 /* Private */,
       3,    2,   75,    2, 0x08 /* Private */,
       7,    2,   80,    2, 0x08 /* Private */,
       9,    2,   85,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x28 /* Private | MethodCloned */,
      16,    1,   98,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,
      19,    0,  102,    2, 0x08 /* Private */,
      20,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::JointCreationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointCreationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnLinkFromDialog(); break;
        case 1: _t->OnVector3dFromDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[2]))); break;
        case 2: _t->OnPoseFromDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Pose3d(*)>(_a[2]))); break;
        case 3: _t->OnEnumChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->OnResetAll(); break;
        case 5: _t->OnAlign((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->UncheckAllAlign((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->UncheckAllAlign(); break;
        case 8: _t->OnType((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->OnSwap(); break;
        case 10: _t->OnCancel(); break;
        case 11: _t->OnCreate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointCreationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointCreationDialog.data,
    qt_meta_data_gazebo__gui__JointCreationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointCreationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointCreationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointCreationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::JointCreationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
