/****************************************************************************
** Meta object code from reading C++ file 'TimerGUIPlugin.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "plugins/TimerGUIPlugin.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimerGUIPlugin.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__TimerGUIPlugin_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__TimerGUIPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__TimerGUIPlugin_t qt_meta_stringdata_gazebo__TimerGUIPlugin = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gazebo::TimerGUIPlugin"
QT_MOC_LITERAL(1, 23, 7), // "SetTime"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "_string"
QT_MOC_LITERAL(4, 40, 18), // "SetStartStopButton"
QT_MOC_LITERAL(5, 59, 6), // "_state"
QT_MOC_LITERAL(6, 66, 17), // "OnStartStopButton"
QT_MOC_LITERAL(7, 84, 20), // "OnSetStartStopButton"
QT_MOC_LITERAL(8, 105, 13) // "OnResetButton"

    },
    "gazebo::TimerGUIPlugin\0SetTime\0\0_string\0"
    "SetStartStopButton\0_state\0OnStartStopButton\0"
    "OnSetStartStopButton\0OnResetButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__TimerGUIPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void gazebo::TimerGUIPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimerGUIPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SetStartStopButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->OnStartStopButton(); break;
        case 3: _t->OnSetStartStopButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->OnResetButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimerGUIPlugin::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimerGUIPlugin::SetTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimerGUIPlugin::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimerGUIPlugin::SetStartStopButton)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::TimerGUIPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<GUIPlugin::staticMetaObject>(),
    qt_meta_stringdata_gazebo__TimerGUIPlugin.data,
    qt_meta_data_gazebo__TimerGUIPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::TimerGUIPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::TimerGUIPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__TimerGUIPlugin.stringdata0))
        return static_cast<void*>(this);
    return GUIPlugin::qt_metacast(_clname);
}

int gazebo::TimerGUIPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GUIPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void gazebo::TimerGUIPlugin::SetTime(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::TimerGUIPlugin::SetStartStopButton(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
