/****************************************************************************
** Meta object code from reading C++ file 'ModelCreator.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/model/ModelCreator.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelCreator.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__ModelCreator_t {
    QByteArrayData data[19];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ModelCreator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ModelCreator_t qt_meta_stringdata_gazebo__gui__ModelCreator = {
    {
QT_MOC_LITERAL(0, 0, 25), // "gazebo::gui::ModelCreator"
QT_MOC_LITERAL(1, 26, 9), // "LinkAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "ShowCollisions"
QT_MOC_LITERAL(4, 52, 5), // "_show"
QT_MOC_LITERAL(5, 58, 11), // "ShowVisuals"
QT_MOC_LITERAL(6, 70, 14), // "ShowLinkFrames"
QT_MOC_LITERAL(7, 85, 6), // "OnEdit"
QT_MOC_LITERAL(8, 92, 8), // "_checked"
QT_MOC_LITERAL(9, 101, 11), // "OnEditModel"
QT_MOC_LITERAL(10, 113, 11), // "std::string"
QT_MOC_LITERAL(11, 125, 10), // "_modelName"
QT_MOC_LITERAL(12, 136, 6), // "OnCopy"
QT_MOC_LITERAL(13, 143, 7), // "OnPaste"
QT_MOC_LITERAL(14, 151, 8), // "OnDelete"
QT_MOC_LITERAL(15, 160, 5), // "_name"
QT_MOC_LITERAL(16, 166, 15), // "OnOpenInspector"
QT_MOC_LITERAL(17, 182, 26), // "OnOpenModelPluginInspector"
QT_MOC_LITERAL(18, 209, 19) // "OnRemoveModelPlugin"

    },
    "gazebo::gui::ModelCreator\0LinkAdded\0"
    "\0ShowCollisions\0_show\0ShowVisuals\0"
    "ShowLinkFrames\0OnEdit\0_checked\0"
    "OnEditModel\0std::string\0_modelName\0"
    "OnCopy\0OnPaste\0OnDelete\0_name\0"
    "OnOpenInspector\0OnOpenModelPluginInspector\0"
    "OnRemoveModelPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ModelCreator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    1,   86,    2, 0x0a /* Public */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      18,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void gazebo::gui::ModelCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelCreator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LinkAdded(); break;
        case 1: _t->ShowCollisions((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->ShowVisuals((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->ShowLinkFrames((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->OnEdit((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->OnEditModel((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->OnCopy(); break;
        case 7: _t->OnPaste(); break;
        case 8: _t->OnDelete(); break;
        case 9: _t->OnDelete((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->OnOpenInspector(); break;
        case 11: _t->OnOpenModelPluginInspector((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->OnRemoveModelPlugin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModelCreator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelCreator::LinkAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ModelCreator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ModelCreator.data,
    qt_meta_data_gazebo__gui__ModelCreator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ModelCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ModelCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelCreator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::ModelCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::ModelCreator::LinkAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
