/****************************************************************************
** Meta object code from reading C++ file 'UserCmdHistory.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/UserCmdHistory.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserCmdHistory.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__UserCmdHistory_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__UserCmdHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__UserCmdHistory_t qt_meta_stringdata_gazebo__gui__UserCmdHistory = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gazebo::gui::UserCmdHistory"
QT_MOC_LITERAL(1, 28, 11), // "StatsSignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "OnUndo"
QT_MOC_LITERAL(4, 48, 13), // "OnUndoCommand"
QT_MOC_LITERAL(5, 62, 8), // "QAction*"
QT_MOC_LITERAL(6, 71, 7), // "_action"
QT_MOC_LITERAL(7, 79, 13), // "OnUndoHovered"
QT_MOC_LITERAL(8, 93, 16), // "OnUndoCmdHistory"
QT_MOC_LITERAL(9, 110, 6), // "OnRedo"
QT_MOC_LITERAL(10, 117, 13), // "OnRedoCommand"
QT_MOC_LITERAL(11, 131, 13), // "OnRedoHovered"
QT_MOC_LITERAL(12, 145, 16), // "OnRedoCmdHistory"
QT_MOC_LITERAL(13, 162, 11) // "OnStatsSlot"

    },
    "gazebo::gui::UserCmdHistory\0StatsSignal\0"
    "\0OnUndo\0OnUndoCommand\0QAction*\0_action\0"
    "OnUndoHovered\0OnUndoCmdHistory\0OnRedo\0"
    "OnRedoCommand\0OnRedoHovered\0"
    "OnRedoCmdHistory\0OnStatsSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__UserCmdHistory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::UserCmdHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserCmdHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StatsSignal(); break;
        case 1: _t->OnUndo(); break;
        case 2: _t->OnUndoCommand((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->OnUndoHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->OnUndoCmdHistory(); break;
        case 5: _t->OnRedo(); break;
        case 6: _t->OnRedoCommand((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->OnRedoHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->OnRedoCmdHistory(); break;
        case 9: _t->OnStatsSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserCmdHistory::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCmdHistory::StatsSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::UserCmdHistory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__UserCmdHistory.data,
    qt_meta_data_gazebo__gui__UserCmdHistory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::UserCmdHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::UserCmdHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__UserCmdHistory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::UserCmdHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::UserCmdHistory::StatsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
