/****************************************************************************
** Meta object code from reading C++ file 'SaveEntityDialog.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/SaveEntityDialog.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SaveEntityDialog.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__SaveEntityDialog_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__SaveEntityDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__SaveEntityDialog_t qt_meta_stringdata_gazebo__gui__SaveEntityDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gazebo::gui::SaveEntityDialog"
QT_MOC_LITERAL(1, 30, 8), // "OnBrowse"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "OnCancel"
QT_MOC_LITERAL(4, 49, 12), // "OnAcceptSave"
QT_MOC_LITERAL(5, 62, 24), // "ModelNameChangedOnDialog"
QT_MOC_LITERAL(6, 87, 10), // "_modelName"
QT_MOC_LITERAL(7, 98, 21), // "ToggleAdvancedOptions"
QT_MOC_LITERAL(8, 120, 8) // "_checked"

    },
    "gazebo::gui::SaveEntityDialog\0OnBrowse\0"
    "\0OnCancel\0OnAcceptSave\0ModelNameChangedOnDialog\0"
    "_modelName\0ToggleAdvancedOptions\0"
    "_checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__SaveEntityDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void gazebo::gui::SaveEntityDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveEntityDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBrowse(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnAcceptSave(); break;
        case 3: _t->ModelNameChangedOnDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ToggleAdvancedOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::SaveEntityDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__SaveEntityDialog.data,
    qt_meta_data_gazebo__gui__SaveEntityDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::SaveEntityDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::SaveEntityDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__SaveEntityDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::SaveEntityDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
