/****************************************************************************
** Meta object code from reading C++ file 'LevelWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/building/LevelWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LevelWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__LevelWidget_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__LevelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__LevelWidget_t qt_meta_stringdata_gazebo__gui__LevelWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "gazebo::gui::LevelWidget"
QT_MOC_LITERAL(1, 25, 21), // "OnCurrentLevelChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "_level"
QT_MOC_LITERAL(4, 55, 10), // "OnAddLevel"
QT_MOC_LITERAL(5, 66, 13), // "OnDeleteLevel"
QT_MOC_LITERAL(6, 80, 15), // "OnShowFloorplan"
QT_MOC_LITERAL(7, 96, 22), // "OnTriggerShowFloorplan"
QT_MOC_LITERAL(8, 119, 14), // "OnShowElements"
QT_MOC_LITERAL(9, 134, 21) // "OnTriggerShowElements"

    },
    "gazebo::gui::LevelWidget\0OnCurrentLevelChanged\0"
    "\0_level\0OnAddLevel\0OnDeleteLevel\0"
    "OnShowFloorplan\0OnTriggerShowFloorplan\0"
    "OnShowElements\0OnTriggerShowElements"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__LevelWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    0,   52,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::LevelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LevelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCurrentLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnAddLevel(); break;
        case 2: _t->OnDeleteLevel(); break;
        case 3: _t->OnShowFloorplan(); break;
        case 4: _t->OnTriggerShowFloorplan(); break;
        case 5: _t->OnShowElements(); break;
        case 6: _t->OnTriggerShowElements(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::LevelWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__LevelWidget.data,
    qt_meta_data_gazebo__gui__LevelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::LevelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::LevelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__LevelWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::LevelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
