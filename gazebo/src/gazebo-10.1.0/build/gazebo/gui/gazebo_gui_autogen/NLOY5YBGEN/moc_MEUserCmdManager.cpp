/****************************************************************************
** Meta object code from reading C++ file 'MEUserCmdManager.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/MEUserCmdManager.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MEUserCmdManager.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__MEUserCmdManager_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__MEUserCmdManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__MEUserCmdManager_t qt_meta_stringdata_gazebo__gui__MEUserCmdManager = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gazebo::gui::MEUserCmdManager"
QT_MOC_LITERAL(1, 30, 13), // "OnUndoCommand"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "QAction*"
QT_MOC_LITERAL(4, 54, 7), // "_action"
QT_MOC_LITERAL(5, 62, 13) // "OnRedoCommand"

    },
    "gazebo::gui::MEUserCmdManager\0"
    "OnUndoCommand\0\0QAction*\0_action\0"
    "OnRedoCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__MEUserCmdManager[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void gazebo::gui::MEUserCmdManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MEUserCmdManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnUndoCommand((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->OnRedoCommand((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::MEUserCmdManager::staticMetaObject = { {
    QMetaObject::SuperData::link<UserCmdHistory::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__MEUserCmdManager.data,
    qt_meta_data_gazebo__gui__MEUserCmdManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::MEUserCmdManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::MEUserCmdManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__MEUserCmdManager.stringdata0))
        return static_cast<void*>(this);
    return UserCmdHistory::qt_metacast(_clname);
}

int gazebo::gui::MEUserCmdManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UserCmdHistory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
