/****************************************************************************
** Meta object code from reading C++ file 'ModelListWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/ModelListWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelListWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__ModelListWidget_t {
    QByteArrayData data[14];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ModelListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ModelListWidget_t qt_meta_stringdata_gazebo__gui__ModelListWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gazebo::gui::ModelListWidget"
QT_MOC_LITERAL(1, 29, 16), // "OnModelSelection"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 64, 4), // "item"
QT_MOC_LITERAL(5, 69, 6), // "column"
QT_MOC_LITERAL(6, 76, 6), // "Update"
QT_MOC_LITERAL(7, 83, 17), // "OnPropertyChanged"
QT_MOC_LITERAL(8, 101, 11), // "QtProperty*"
QT_MOC_LITERAL(9, 113, 5), // "_item"
QT_MOC_LITERAL(10, 119, 19), // "OnCustomContextMenu"
QT_MOC_LITERAL(11, 139, 3), // "_pt"
QT_MOC_LITERAL(12, 143, 24), // "OnCurrentPropertyChanged"
QT_MOC_LITERAL(13, 168, 14) // "QtBrowserItem*"

    },
    "gazebo::gui::ModelListWidget\0"
    "OnModelSelection\0\0QTreeWidgetItem*\0"
    "item\0column\0Update\0OnPropertyChanged\0"
    "QtProperty*\0_item\0OnCustomContextMenu\0"
    "_pt\0OnCurrentPropertyChanged\0"
    "QtBrowserItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ModelListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
      10,    1,   48,    2, 0x08 /* Private */,
      12,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, 0x80000000 | 13,    9,

       0        // eod
};

void gazebo::gui::ModelListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnModelSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Update(); break;
        case 2: _t->OnPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 3: _t->OnCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->OnCurrentPropertyChanged((*reinterpret_cast< QtBrowserItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ModelListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ModelListWidget.data,
    qt_meta_data_gazebo__gui__ModelListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ModelListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ModelListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::ModelListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
