/****************************************************************************
** Meta object code from reading C++ file 'BuildingEditorPalette.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/building/BuildingEditorPalette.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BuildingEditorPalette.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__BuildingEditorPalette_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__BuildingEditorPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__BuildingEditorPalette_t qt_meta_stringdata_gazebo__gui__BuildingEditorPalette = {
    {
QT_MOC_LITERAL(0, 0, 34), // "gazebo::gui::BuildingEditorPa..."
QT_MOC_LITERAL(1, 35, 7), // "OnBrush"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "_buttonId"
QT_MOC_LITERAL(4, 54, 13), // "OnNameChanged"
QT_MOC_LITERAL(5, 68, 5), // "_name"
QT_MOC_LITERAL(6, 74, 13), // "OnCustomColor"
QT_MOC_LITERAL(7, 88, 6), // "_color"
QT_MOC_LITERAL(8, 95, 15) // "CancelDrawModes"

    },
    "gazebo::gui::BuildingEditorPalette\0"
    "OnBrush\0\0_buttonId\0OnNameChanged\0_name\0"
    "OnCustomColor\0_color\0CancelDrawModes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__BuildingEditorPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::BuildingEditorPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BuildingEditorPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBrush((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnCustomColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->CancelDrawModes(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::BuildingEditorPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__BuildingEditorPalette.data,
    qt_meta_data_gazebo__gui__BuildingEditorPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::BuildingEditorPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::BuildingEditorPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__BuildingEditorPalette.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::BuildingEditorPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
