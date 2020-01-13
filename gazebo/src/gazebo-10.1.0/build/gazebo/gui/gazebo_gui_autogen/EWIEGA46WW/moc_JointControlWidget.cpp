/****************************************************************************
** Meta object code from reading C++ file 'JointControlWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/JointControlWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointControlWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__JointControlWidget_t {
    QByteArrayData data[22];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointControlWidget_t qt_meta_stringdata_gazebo__gui__JointControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gazebo::gui::JointControlWidget"
QT_MOC_LITERAL(1, 32, 11), // "repReceived"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "std::string"
QT_MOC_LITERAL(4, 57, 10), // "_modelName"
QT_MOC_LITERAL(5, 68, 24), // "ignition::msgs::JointCmd"
QT_MOC_LITERAL(6, 93, 4), // "_rep"
QT_MOC_LITERAL(7, 98, 10), // "OnResponse"
QT_MOC_LITERAL(8, 109, 7), // "OnReset"
QT_MOC_LITERAL(9, 117, 14), // "OnForceChanged"
QT_MOC_LITERAL(10, 132, 6), // "_value"
QT_MOC_LITERAL(11, 139, 5), // "_name"
QT_MOC_LITERAL(12, 145, 15), // "OnPIDPosChanged"
QT_MOC_LITERAL(13, 161, 17), // "OnPPosGainChanged"
QT_MOC_LITERAL(14, 179, 17), // "OnDPosGainChanged"
QT_MOC_LITERAL(15, 197, 17), // "OnIPosGainChanged"
QT_MOC_LITERAL(16, 215, 15), // "OnPIDVelChanged"
QT_MOC_LITERAL(17, 231, 17), // "OnPVelGainChanged"
QT_MOC_LITERAL(18, 249, 17), // "OnDVelGainChanged"
QT_MOC_LITERAL(19, 267, 17), // "OnIVelGainChanged"
QT_MOC_LITERAL(20, 285, 20), // "OnPIDPosUnitsChanged"
QT_MOC_LITERAL(21, 306, 6) // "_index"

    },
    "gazebo::gui::JointControlWidget\0"
    "repReceived\0\0std::string\0_modelName\0"
    "ignition::msgs::JointCmd\0_rep\0OnResponse\0"
    "OnReset\0OnForceChanged\0_value\0_name\0"
    "OnPIDPosChanged\0OnPPosGainChanged\0"
    "OnDPosGainChanged\0OnIPosGainChanged\0"
    "OnPIDVelChanged\0OnPVelGainChanged\0"
    "OnDVelGainChanged\0OnIVelGainChanged\0"
    "OnPIDPosUnitsChanged\0_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointControlWidget[] = {

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
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   84,    2, 0x08 /* Private */,
       8,    0,   89,    2, 0x08 /* Private */,
       9,    2,   90,    2, 0x08 /* Private */,
      12,    2,   95,    2, 0x08 /* Private */,
      13,    2,  100,    2, 0x08 /* Private */,
      14,    2,  105,    2, 0x08 /* Private */,
      15,    2,  110,    2, 0x08 /* Private */,
      16,    2,  115,    2, 0x08 /* Private */,
      17,    2,  120,    2, 0x08 /* Private */,
      18,    2,  125,    2, 0x08 /* Private */,
      19,    2,  130,    2, 0x08 /* Private */,
      20,    1,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 3,   10,   11,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void gazebo::gui::JointControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->repReceived((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const ignition::msgs::JointCmd(*)>(_a[2]))); break;
        case 1: _t->OnResponse((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const ignition::msgs::JointCmd(*)>(_a[2]))); break;
        case 2: _t->OnReset(); break;
        case 3: _t->OnForceChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnPIDPosChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->OnPPosGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 6: _t->OnDPosGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 7: _t->OnIPosGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 8: _t->OnPIDVelChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 9: _t->OnPVelGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 10: _t->OnDVelGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 11: _t->OnIVelGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 12: _t->OnPIDPosUnitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointControlWidget::*)(const std::string & , const ignition::msgs::JointCmd & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointControlWidget::repReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointControlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointControlWidget.data,
    qt_meta_data_gazebo__gui__JointControlWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointControlWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void gazebo::gui::JointControlWidget::repReceived(const std::string & _t1, const ignition::msgs::JointCmd & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_gazebo__gui__JointForceControl_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointForceControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointForceControl_t qt_meta_stringdata_gazebo__gui__JointForceControl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "gazebo::gui::JointForceControl"
QT_MOC_LITERAL(1, 31, 7), // "changed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "_value"
QT_MOC_LITERAL(4, 47, 11), // "std::string"
QT_MOC_LITERAL(5, 59, 5), // "_name"
QT_MOC_LITERAL(6, 65, 9) // "OnChanged"

    },
    "gazebo::gui::JointForceControl\0changed\0"
    "\0_value\0std::string\0_name\0OnChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointForceControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void gazebo::gui::JointForceControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointForceControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->OnChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointForceControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointForceControl::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointForceControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointForceControl.data,
    qt_meta_data_gazebo__gui__JointForceControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointForceControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointForceControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointForceControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointForceControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointForceControl::changed(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_gazebo__gui__JointPIDPosControl_t {
    QByteArrayData data[13];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointPIDPosControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointPIDPosControl_t qt_meta_stringdata_gazebo__gui__JointPIDPosControl = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gazebo::gui::JointPIDPosControl"
QT_MOC_LITERAL(1, 32, 7), // "changed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "_value"
QT_MOC_LITERAL(4, 48, 11), // "std::string"
QT_MOC_LITERAL(5, 60, 5), // "_name"
QT_MOC_LITERAL(6, 66, 8), // "pChanged"
QT_MOC_LITERAL(7, 75, 8), // "dChanged"
QT_MOC_LITERAL(8, 84, 8), // "iChanged"
QT_MOC_LITERAL(9, 93, 9), // "OnChanged"
QT_MOC_LITERAL(10, 103, 10), // "OnPChanged"
QT_MOC_LITERAL(11, 114, 10), // "OnIChanged"
QT_MOC_LITERAL(12, 125, 10) // "OnDChanged"

    },
    "gazebo::gui::JointPIDPosControl\0changed\0"
    "\0_value\0std::string\0_name\0pChanged\0"
    "dChanged\0iChanged\0OnChanged\0OnPChanged\0"
    "OnIChanged\0OnDChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointPIDPosControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       7,    2,   64,    2, 0x06 /* Public */,
       8,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void gazebo::gui::JointPIDPosControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointPIDPosControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->pChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->dChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->iChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnPChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnIChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnDChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointPIDPosControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDPosControl::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JointPIDPosControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDPosControl::pChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JointPIDPosControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDPosControl::dChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JointPIDPosControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDPosControl::iChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointPIDPosControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointPIDPosControl.data,
    qt_meta_data_gazebo__gui__JointPIDPosControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointPIDPosControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointPIDPosControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointPIDPosControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointPIDPosControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointPIDPosControl::changed(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::JointPIDPosControl::pChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::JointPIDPosControl::dChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::JointPIDPosControl::iChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_gazebo__gui__JointPIDVelControl_t {
    QByteArrayData data[13];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__JointPIDVelControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__JointPIDVelControl_t qt_meta_stringdata_gazebo__gui__JointPIDVelControl = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gazebo::gui::JointPIDVelControl"
QT_MOC_LITERAL(1, 32, 7), // "changed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "_value"
QT_MOC_LITERAL(4, 48, 11), // "std::string"
QT_MOC_LITERAL(5, 60, 5), // "_name"
QT_MOC_LITERAL(6, 66, 8), // "pChanged"
QT_MOC_LITERAL(7, 75, 8), // "dChanged"
QT_MOC_LITERAL(8, 84, 8), // "iChanged"
QT_MOC_LITERAL(9, 93, 9), // "OnChanged"
QT_MOC_LITERAL(10, 103, 10), // "OnPChanged"
QT_MOC_LITERAL(11, 114, 10), // "OnIChanged"
QT_MOC_LITERAL(12, 125, 10) // "OnDChanged"

    },
    "gazebo::gui::JointPIDVelControl\0changed\0"
    "\0_value\0std::string\0_name\0pChanged\0"
    "dChanged\0iChanged\0OnChanged\0OnPChanged\0"
    "OnIChanged\0OnDChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__JointPIDVelControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       7,    2,   64,    2, 0x06 /* Public */,
       8,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void gazebo::gui::JointPIDVelControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointPIDVelControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->pChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->dChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->iChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnPChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnIChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnDChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointPIDVelControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDVelControl::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JointPIDVelControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDVelControl::pChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JointPIDVelControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDVelControl::dChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JointPIDVelControl::*)(double , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointPIDVelControl::iChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::JointPIDVelControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__JointPIDVelControl.data,
    qt_meta_data_gazebo__gui__JointPIDVelControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::JointPIDVelControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::JointPIDVelControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointPIDVelControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointPIDVelControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointPIDVelControl::changed(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::JointPIDVelControl::pChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::JointPIDVelControl::dChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::JointPIDVelControl::iChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
