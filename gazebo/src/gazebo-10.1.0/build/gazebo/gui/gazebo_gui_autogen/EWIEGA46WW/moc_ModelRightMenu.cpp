/****************************************************************************
** Meta object code from reading C++ file 'ModelRightMenu.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/ModelRightMenu.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelRightMenu.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__ModelRightMenu_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ModelRightMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ModelRightMenu_t qt_meta_stringdata_gazebo__gui__ModelRightMenu = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gazebo::gui::ModelRightMenu"
QT_MOC_LITERAL(1, 28, 8), // "OnMoveTo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "OnFollow"
QT_MOC_LITERAL(4, 47, 6), // "OnEdit"
QT_MOC_LITERAL(5, 54, 13), // "OnApplyWrench"
QT_MOC_LITERAL(6, 68, 8), // "OnDelete"
QT_MOC_LITERAL(7, 77, 11), // "std::string"
QT_MOC_LITERAL(8, 89, 5) // "_name"

    },
    "gazebo::gui::ModelRightMenu\0OnMoveTo\0"
    "\0OnFollow\0OnEdit\0OnApplyWrench\0OnDelete\0"
    "std::string\0_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ModelRightMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::ModelRightMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelRightMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnMoveTo(); break;
        case 1: _t->OnFollow(); break;
        case 2: _t->OnEdit(); break;
        case 3: _t->OnApplyWrench(); break;
        case 4: _t->OnDelete((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 5: _t->OnDelete(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ModelRightMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ModelRightMenu.data,
    qt_meta_data_gazebo__gui__ModelRightMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ModelRightMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ModelRightMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelRightMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::ModelRightMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_gazebo__gui__ViewState_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ViewState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ViewState_t qt_meta_stringdata_gazebo__gui__ViewState = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gazebo::gui::ViewState"
QT_MOC_LITERAL(1, 23, 8), // "Callback"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "gazebo::gui::ViewState\0Callback\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ViewState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::ViewState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Callback(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ViewState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ViewState.data,
    qt_meta_data_gazebo__gui__ViewState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ViewState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ViewState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ViewState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::ViewState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
