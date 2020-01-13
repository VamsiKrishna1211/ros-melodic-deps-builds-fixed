/****************************************************************************
** Meta object code from reading C++ file 'ConfigWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/ConfigWidget.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gazebo__gui__ConfigChildWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ConfigChildWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ConfigChildWidget_t qt_meta_stringdata_gazebo__gui__ConfigChildWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "gazebo::gui::ConfigChildWidget"

    },
    "gazebo::gui::ConfigChildWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ConfigChildWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gazebo::gui::ConfigChildWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ConfigChildWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ConfigChildWidget.data,
    qt_meta_data_gazebo__gui__ConfigChildWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ConfigChildWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ConfigChildWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ConfigChildWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int gazebo::gui::ConfigChildWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gazebo__gui__GeometryConfigWidget_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__GeometryConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__GeometryConfigWidget_t qt_meta_stringdata_gazebo__gui__GeometryConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "gazebo::gui::GeometryConfigWi..."
QT_MOC_LITERAL(1, 34, 15), // "GeometryChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 21), // "OnGeometryTypeChanged"
QT_MOC_LITERAL(4, 73, 5), // "_text"
QT_MOC_LITERAL(5, 79, 21), // "OnGeometrySizeChanged"
QT_MOC_LITERAL(6, 101, 6), // "_value"
QT_MOC_LITERAL(7, 108, 12) // "OnSelectFile"

    },
    "gazebo::gui::GeometryConfigWidget\0"
    "GeometryChanged\0\0OnGeometryTypeChanged\0"
    "_text\0OnGeometrySizeChanged\0_value\0"
    "OnSelectFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__GeometryConfigWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::GeometryConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeometryConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GeometryChanged(); break;
        case 1: _t->OnGeometryTypeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnGeometrySizeChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->OnSelectFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeometryConfigWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryConfigWidget::GeometryChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::GeometryConfigWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigChildWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__GeometryConfigWidget.data,
    qt_meta_data_gazebo__gui__GeometryConfigWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::GeometryConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::GeometryConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__GeometryConfigWidget.stringdata0))
        return static_cast<void*>(this);
    return ConfigChildWidget::qt_metacast(_clname);
}

int gazebo::gui::GeometryConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigChildWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gazebo::gui::GeometryConfigWidget::GeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_gazebo__gui__DensityConfigWidget_t {
    QByteArrayData data[7];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__DensityConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__DensityConfigWidget_t qt_meta_stringdata_gazebo__gui__DensityConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "gazebo::gui::DensityConfigWidget"
QT_MOC_LITERAL(1, 33, 19), // "DensityValueChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 6), // "_value"
QT_MOC_LITERAL(4, 61, 17), // "OnComboBoxChanged"
QT_MOC_LITERAL(5, 79, 5), // "_text"
QT_MOC_LITERAL(6, 85, 16) // "OnSpinBoxChanged"

    },
    "gazebo::gui::DensityConfigWidget\0"
    "DensityValueChanged\0\0_value\0"
    "OnComboBoxChanged\0_text\0OnSpinBoxChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__DensityConfigWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void gazebo::gui::DensityConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DensityConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DensityValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->OnComboBoxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnSpinBoxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DensityConfigWidget::*)(const double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DensityConfigWidget::DensityValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::DensityConfigWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigChildWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__DensityConfigWidget.data,
    qt_meta_data_gazebo__gui__DensityConfigWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::DensityConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::DensityConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__DensityConfigWidget.stringdata0))
        return static_cast<void*>(this);
    return ConfigChildWidget::qt_metacast(_clname);
}

int gazebo::gui::DensityConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigChildWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gazebo::gui::DensityConfigWidget::DensityValueChanged(const double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_gazebo__gui__EnumConfigWidget_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__EnumConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__EnumConfigWidget_t qt_meta_stringdata_gazebo__gui__EnumConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gazebo::gui::EnumConfigWidget"
QT_MOC_LITERAL(1, 30, 16), // "EnumValueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "_value"
QT_MOC_LITERAL(4, 55, 11) // "EnumChanged"

    },
    "gazebo::gui::EnumConfigWidget\0"
    "EnumValueChanged\0\0_value\0EnumChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__EnumConfigWidget[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void gazebo::gui::EnumConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnumConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EnumValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->EnumChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EnumConfigWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnumConfigWidget::EnumValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::EnumConfigWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigChildWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__EnumConfigWidget.data,
    qt_meta_data_gazebo__gui__EnumConfigWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::EnumConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::EnumConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__EnumConfigWidget.stringdata0))
        return static_cast<void*>(this);
    return ConfigChildWidget::qt_metacast(_clname);
}

int gazebo::gui::EnumConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigChildWidget::qt_metacall(_c, _id, _a);
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
void gazebo::gui::EnumConfigWidget::EnumValueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_gazebo__gui__GroupWidget_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__GroupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__GroupWidget_t qt_meta_stringdata_gazebo__gui__GroupWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "gazebo::gui::GroupWidget"
QT_MOC_LITERAL(1, 25, 6), // "Toggle"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8) // "_checked"

    },
    "gazebo::gui::GroupWidget\0Toggle\0\0"
    "_checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__GroupWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void gazebo::gui::GroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Toggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::GroupWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__GroupWidget.data,
    qt_meta_data_gazebo__gui__GroupWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::GroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::GroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__GroupWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::GroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_gazebo__gui__ConfigWidget_t {
    QByteArrayData data[44];
    char stringdata0[739];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gazebo__gui__ConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gazebo__gui__ConfigWidget_t qt_meta_stringdata_gazebo__gui__ConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "gazebo::gui::ConfigWidget"
QT_MOC_LITERAL(1, 26, 16), // "UIntValueChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "_name"
QT_MOC_LITERAL(4, 50, 6), // "_value"
QT_MOC_LITERAL(5, 57, 15), // "IntValueChanged"
QT_MOC_LITERAL(6, 73, 18), // "DoubleValueChanged"
QT_MOC_LITERAL(7, 92, 16), // "BoolValueChanged"
QT_MOC_LITERAL(8, 109, 18), // "StringValueChanged"
QT_MOC_LITERAL(9, 128, 11), // "std::string"
QT_MOC_LITERAL(10, 140, 20), // "Vector3dValueChanged"
QT_MOC_LITERAL(11, 161, 24), // "ignition::math::Vector3d"
QT_MOC_LITERAL(12, 186, 17), // "ColorValueChanged"
QT_MOC_LITERAL(13, 204, 21), // "ignition::math::Color"
QT_MOC_LITERAL(14, 226, 16), // "PoseValueChanged"
QT_MOC_LITERAL(15, 243, 22), // "ignition::math::Pose3d"
QT_MOC_LITERAL(16, 266, 5), // "_pose"
QT_MOC_LITERAL(17, 272, 20), // "GeometryValueChanged"
QT_MOC_LITERAL(18, 293, 11), // "_dimensions"
QT_MOC_LITERAL(19, 305, 4), // "_uri"
QT_MOC_LITERAL(20, 310, 16), // "EnumValueChanged"
QT_MOC_LITERAL(21, 327, 19), // "DensityValueChanged"
QT_MOC_LITERAL(22, 347, 16), // "MassValueChanged"
QT_MOC_LITERAL(23, 364, 15), // "GeometryChanged"
QT_MOC_LITERAL(24, 380, 15), // "OnItemSelection"
QT_MOC_LITERAL(25, 396, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(26, 413, 5), // "_item"
QT_MOC_LITERAL(27, 419, 7), // "_column"
QT_MOC_LITERAL(28, 427, 18), // "OnUIntValueChanged"
QT_MOC_LITERAL(29, 446, 17), // "OnIntValueChanged"
QT_MOC_LITERAL(30, 464, 20), // "OnDoubleValueChanged"
QT_MOC_LITERAL(31, 485, 18), // "OnBoolValueChanged"
QT_MOC_LITERAL(32, 504, 20), // "OnStringValueChanged"
QT_MOC_LITERAL(33, 525, 22), // "OnVector3dValueChanged"
QT_MOC_LITERAL(34, 548, 23), // "OnVector3dPresetChanged"
QT_MOC_LITERAL(35, 572, 6), // "_index"
QT_MOC_LITERAL(36, 579, 19), // "OnColorValueChanged"
QT_MOC_LITERAL(37, 599, 18), // "OnPoseValueChanged"
QT_MOC_LITERAL(38, 618, 22), // "OnGeometryValueChanged"
QT_MOC_LITERAL(39, 641, 18), // "OnEnumValueChanged"
QT_MOC_LITERAL(40, 660, 19), // "OnCustomColorDialog"
QT_MOC_LITERAL(41, 680, 21), // "OnDensityValueChanged"
QT_MOC_LITERAL(42, 702, 18), // "OnMassValueChanged"
QT_MOC_LITERAL(43, 721, 17) // "OnGeometryChanged"

    },
    "gazebo::gui::ConfigWidget\0UIntValueChanged\0"
    "\0_name\0_value\0IntValueChanged\0"
    "DoubleValueChanged\0BoolValueChanged\0"
    "StringValueChanged\0std::string\0"
    "Vector3dValueChanged\0ignition::math::Vector3d\0"
    "ColorValueChanged\0ignition::math::Color\0"
    "PoseValueChanged\0ignition::math::Pose3d\0"
    "_pose\0GeometryValueChanged\0_dimensions\0"
    "_uri\0EnumValueChanged\0DensityValueChanged\0"
    "MassValueChanged\0GeometryChanged\0"
    "OnItemSelection\0QTreeWidgetItem*\0_item\0"
    "_column\0OnUIntValueChanged\0OnIntValueChanged\0"
    "OnDoubleValueChanged\0OnBoolValueChanged\0"
    "OnStringValueChanged\0OnVector3dValueChanged\0"
    "OnVector3dPresetChanged\0_index\0"
    "OnColorValueChanged\0OnPoseValueChanged\0"
    "OnGeometryValueChanged\0OnEnumValueChanged\0"
    "OnCustomColorDialog\0OnDensityValueChanged\0"
    "OnMassValueChanged\0OnGeometryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gazebo__gui__ConfigWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  169,    2, 0x06 /* Public */,
       5,    2,  174,    2, 0x06 /* Public */,
       6,    2,  179,    2, 0x06 /* Public */,
       7,    2,  184,    2, 0x06 /* Public */,
       8,    2,  189,    2, 0x06 /* Public */,
      10,    2,  194,    2, 0x06 /* Public */,
      12,    2,  199,    2, 0x06 /* Public */,
      14,    2,  204,    2, 0x06 /* Public */,
      17,    4,  209,    2, 0x06 /* Public */,
      20,    2,  218,    2, 0x06 /* Public */,
      21,    1,  223,    2, 0x06 /* Public */,
      22,    1,  226,    2, 0x06 /* Public */,
      23,    0,  229,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    2,  230,    2, 0x08 /* Private */,
      28,    0,  235,    2, 0x08 /* Private */,
      29,    0,  236,    2, 0x08 /* Private */,
      30,    0,  237,    2, 0x08 /* Private */,
      31,    0,  238,    2, 0x08 /* Private */,
      32,    0,  239,    2, 0x08 /* Private */,
      33,    0,  240,    2, 0x08 /* Private */,
      34,    1,  241,    2, 0x08 /* Private */,
      36,    0,  244,    2, 0x08 /* Private */,
      36,    1,  245,    2, 0x08 /* Private */,
      37,    0,  248,    2, 0x08 /* Private */,
      38,    0,  249,    2, 0x08 /* Private */,
      38,    1,  250,    2, 0x08 /* Private */,
      39,    1,  253,    2, 0x08 /* Private */,
      40,    0,  256,    2, 0x08 /* Private */,
      41,    1,  257,    2, 0x08 /* Private */,
      42,    1,  260,    2, 0x08 /* Private */,
      43,    0,  263,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,    3,   16,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 9,    3,    4,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25, QMetaType::Int,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,

       0        // eod
};

void gazebo::gui::ConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UIntValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 1: _t->IntValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->DoubleValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 3: _t->BoolValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 4: _t->StringValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->Vector3dValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[2]))); break;
        case 6: _t->ColorValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Color(*)>(_a[2]))); break;
        case 7: _t->PoseValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ignition::math::Pose3d(*)>(_a[2]))); break;
        case 8: _t->GeometryValueChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const ignition::math::Vector3d(*)>(_a[3])),(*reinterpret_cast< const std::string(*)>(_a[4]))); break;
        case 9: _t->EnumValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->DensityValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 11: _t->MassValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 12: _t->GeometryChanged(); break;
        case 13: _t->OnItemSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 14: _t->OnUIntValueChanged(); break;
        case 15: _t->OnIntValueChanged(); break;
        case 16: _t->OnDoubleValueChanged(); break;
        case 17: _t->OnBoolValueChanged(); break;
        case 18: _t->OnStringValueChanged(); break;
        case 19: _t->OnVector3dValueChanged(); break;
        case 20: _t->OnVector3dPresetChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 21: _t->OnColorValueChanged(); break;
        case 22: _t->OnColorValueChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 23: _t->OnPoseValueChanged(); break;
        case 24: _t->OnGeometryValueChanged(); break;
        case 25: _t->OnGeometryValueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 26: _t->OnEnumValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->OnCustomColorDialog(); break;
        case 28: _t->OnDensityValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 29: _t->OnMassValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 30: _t->OnGeometryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConfigWidget::*)(const QString & , const unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::UIntValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::IntValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::DoubleValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::BoolValueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::StringValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const ignition::math::Vector3d & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::Vector3dValueChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const ignition::math::Color & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::ColorValueChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const ignition::math::Pose3d & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::PoseValueChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const std::string & , const std::string & , const ignition::math::Vector3d & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::GeometryValueChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::EnumValueChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::DensityValueChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)(const double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::MassValueChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ConfigWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigWidget::GeometryChanged)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gazebo::gui::ConfigWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gazebo__gui__ConfigWidget.data,
    qt_meta_data_gazebo__gui__ConfigWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gazebo::gui::ConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gazebo::gui::ConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ConfigWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::ConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::ConfigWidget::UIntValueChanged(const QString & _t1, const unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::ConfigWidget::IntValueChanged(const QString & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::ConfigWidget::DoubleValueChanged(const QString & _t1, const double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::ConfigWidget::BoolValueChanged(const QString & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gazebo::gui::ConfigWidget::StringValueChanged(const QString & _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gazebo::gui::ConfigWidget::Vector3dValueChanged(const QString & _t1, const ignition::math::Vector3d & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gazebo::gui::ConfigWidget::ColorValueChanged(const QString & _t1, const ignition::math::Color & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gazebo::gui::ConfigWidget::PoseValueChanged(const QString & _t1, const ignition::math::Pose3d & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void gazebo::gui::ConfigWidget::GeometryValueChanged(const std::string & _t1, const std::string & _t2, const ignition::math::Vector3d & _t3, const std::string & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void gazebo::gui::ConfigWidget::EnumValueChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void gazebo::gui::ConfigWidget::DensityValueChanged(const double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void gazebo::gui::ConfigWidget::MassValueChanged(const double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void gazebo::gui::ConfigWidget::GeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
