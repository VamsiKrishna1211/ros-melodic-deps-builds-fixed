/****************************************************************************
** Meta object code from reading C++ file 'SchematicViewWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/SchematicViewWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SchematicViewWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__SchematicViewWidget_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__SchematicViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__SchematicViewWidget_t qt_meta_stringdata_gazebo__gui__SchematicViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "gazebo::gui::SchematicViewWidget"
QT_MOC_LITERAL(1, 33, 19), // "OnCustomContextMenu"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 3), // "_id"
QT_MOC_LITERAL(4, 58, 19), // "OnItemDoubleClicked"
QT_MOC_LITERAL(5, 78, 18) // "OnSelectionChanged"

    },
    "gazebo::gui::SchematicViewWidget\0"
    "OnCustomContextMenu\0\0_id\0OnItemDoubleClicked\0"
    "OnSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__SchematicViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::SchematicViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SchematicViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCustomContextMenu((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->OnItemDoubleClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnSelectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::SchematicViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__SchematicViewWidget.data,
    qt_meta_data_gazebo__gui__SchematicViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::SchematicViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::SchematicViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__SchematicViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::SchematicViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
