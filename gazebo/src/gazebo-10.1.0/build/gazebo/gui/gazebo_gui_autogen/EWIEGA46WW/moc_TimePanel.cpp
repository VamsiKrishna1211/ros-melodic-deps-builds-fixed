/****************************************************************************
** Meta object code from reading C++ file 'TimePanel.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/TimePanel.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimePanel.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__TimePanel_t {
    QByteArrayData data[11];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__TimePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__TimePanel_t qt_meta_stringdata_gazebo__gui__TimePanel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gazebo::gui::TimePanel"
QT_MOC_LITERAL(1, 23, 20), // "SetTimeWidgetVisible"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "_visible"
QT_MOC_LITERAL(4, 54, 23), // "SetLogPlayWidgetVisible"
QT_MOC_LITERAL(5, 78, 11), // "TogglePause"
QT_MOC_LITERAL(6, 90, 18), // "OnStepValueChanged"
QT_MOC_LITERAL(7, 109, 6), // "_value"
QT_MOC_LITERAL(8, 116, 11), // "OnTimeReset"
QT_MOC_LITERAL(9, 128, 6), // "Update"
QT_MOC_LITERAL(10, 135, 19) // "OnPlayActionChanged"

    },
    "gazebo::gui::TimePanel\0SetTimeWidgetVisible\0"
    "\0_visible\0SetLogPlayWidgetVisible\0"
    "TogglePause\0OnStepValueChanged\0_value\0"
    "OnTimeReset\0Update\0OnPlayActionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__TimePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   55,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::TimePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetTimeWidgetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SetLogPlayWidgetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->TogglePause(); break;
        case 3: _t->OnStepValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnTimeReset(); break;
        case 5: _t->Update(); break;
        case 6: _t->OnPlayActionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimePanel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimePanel::SetTimeWidgetVisible)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimePanel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimePanel::SetLogPlayWidgetVisible)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::TimePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__TimePanel.data,
    qt_meta_data_gazebo__gui__TimePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::TimePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::TimePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__TimePanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::TimePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void gazebo::gui::TimePanel::SetTimeWidgetVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::TimePanel::SetLogPlayWidgetVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
