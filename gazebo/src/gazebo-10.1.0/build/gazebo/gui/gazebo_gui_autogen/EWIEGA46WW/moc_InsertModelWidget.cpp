/****************************************************************************
** Meta object code from reading C++ file 'InsertModelWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/InsertModelWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InsertModelWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__InsertModelWidget_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__InsertModelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__InsertModelWidget_t qt_meta_stringdata_gazebo__gui__InsertModelWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "gazebo::gui::InsertModelWidget"
QT_MOC_LITERAL(1, 31, 10), // "UpdateFuel"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "std::string"
QT_MOC_LITERAL(4, 55, 7), // "_server"
QT_MOC_LITERAL(5, 63, 16), // "OnModelSelection"
QT_MOC_LITERAL(6, 80, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 97, 4), // "item"
QT_MOC_LITERAL(8, 102, 6), // "column"
QT_MOC_LITERAL(9, 109, 6), // "Update"
QT_MOC_LITERAL(10, 116, 12), // "OnUpdateFuel"
QT_MOC_LITERAL(11, 129, 18), // "OnDirectoryChanged"
QT_MOC_LITERAL(12, 148, 5), // "_path"
QT_MOC_LITERAL(13, 154, 12) // "HandleButton"

    },
    "gazebo::gui::InsertModelWidget\0"
    "UpdateFuel\0\0std::string\0_server\0"
    "OnModelSelection\0QTreeWidgetItem*\0"
    "item\0column\0Update\0OnUpdateFuel\0"
    "OnDirectoryChanged\0_path\0HandleButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__InsertModelWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   47,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,
      11,    1,   56,    2, 0x08 /* Private */,
      13,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::InsertModelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InsertModelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateFuel((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->OnModelSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->Update(); break;
        case 3: _t->OnUpdateFuel((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 4: _t->OnDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->HandleButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InsertModelWidget::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertModelWidget::UpdateFuel)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::InsertModelWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__InsertModelWidget.data,
    qt_meta_data_gazebo__gui__InsertModelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::InsertModelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::InsertModelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__InsertModelWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::InsertModelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gazebo::gui::InsertModelWidget::UpdateFuel(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
