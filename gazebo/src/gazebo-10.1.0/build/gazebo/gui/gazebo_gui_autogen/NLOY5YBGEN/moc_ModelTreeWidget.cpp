/****************************************************************************
** Meta object code from reading C++ file 'ModelTreeWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/ModelTreeWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelTreeWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__ModelTreeWidget_t {
    QByteArrayData data[16];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ModelTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ModelTreeWidget_t qt_meta_stringdata_gazebo__gui__ModelTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gazebo::gui::ModelTreeWidget"
QT_MOC_LITERAL(1, 29, 8), // "OnStatic"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "OnAutoDisable"
QT_MOC_LITERAL(4, 53, 13), // "OnNameChanged"
QT_MOC_LITERAL(5, 67, 5), // "_name"
QT_MOC_LITERAL(6, 73, 19), // "OnItemDoubleClicked"
QT_MOC_LITERAL(7, 93, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 110, 5), // "_item"
QT_MOC_LITERAL(9, 116, 7), // "_column"
QT_MOC_LITERAL(10, 124, 13), // "OnItemClicked"
QT_MOC_LITERAL(11, 138, 22), // "OnItemSelectionChanged"
QT_MOC_LITERAL(12, 161, 19), // "OnCustomContextMenu"
QT_MOC_LITERAL(13, 181, 3), // "_pt"
QT_MOC_LITERAL(14, 185, 16), // "OnAddModelPlugin"
QT_MOC_LITERAL(15, 202, 18) // "OnModelPluginApply"

    },
    "gazebo::gui::ModelTreeWidget\0OnStatic\0"
    "\0OnAutoDisable\0OnNameChanged\0_name\0"
    "OnItemDoubleClicked\0QTreeWidgetItem*\0"
    "_item\0_column\0OnItemClicked\0"
    "OnItemSelectionChanged\0OnCustomContextMenu\0"
    "_pt\0OnAddModelPlugin\0OnModelPluginApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ModelTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    2,   64,    2, 0x08 /* Private */,
      10,    2,   69,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::ModelTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnStatic(); break;
        case 1: _t->OnAutoDisable(); break;
        case 2: _t->OnNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->OnItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnItemSelectionChanged(); break;
        case 6: _t->OnCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->OnAddModelPlugin(); break;
        case 8: _t->OnModelPluginApply(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ModelTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ModelTreeWidget.data,
    qt_meta_data_gazebo__gui__ModelTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ModelTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ModelTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::ModelTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
