/****************************************************************************
** Meta object code from reading C++ file 'qttreepropertybrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "gazebo/gui/qtpropertybrowser/qttreepropertybrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttreepropertybrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtPropertyEditorDelegate_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtPropertyEditorDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtPropertyEditorDelegate_t qt_meta_stringdata_QtPropertyEditorDelegate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtPropertyEditorDelegate"
QT_MOC_LITERAL(1, 25, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6) // "object"

    },
    "QtPropertyEditorDelegate\0slotEditorDestroyed\0"
    "\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtPropertyEditorDelegate[] = {

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
    QMetaType::Void, QMetaType::QObjectStar,    3,

       0        // eod
};

void QtPropertyEditorDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtPropertyEditorDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotEditorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtPropertyEditorDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_QtPropertyEditorDelegate.data,
    qt_meta_data_QtPropertyEditorDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtPropertyEditorDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtPropertyEditorDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtPropertyEditorDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QtPropertyEditorDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtPropertyEditorView_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtPropertyEditorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtPropertyEditorView_t qt_meta_stringdata_QtPropertyEditorView = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QtPropertyEditorView"

    },
    "QtPropertyEditorView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtPropertyEditorView[] = {

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

void QtPropertyEditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtPropertyEditorView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_QtPropertyEditorView.data,
    qt_meta_data_QtPropertyEditorView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtPropertyEditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtPropertyEditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtPropertyEditorView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int QtPropertyEditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtTreePropertyBrowser_t {
    QByteArrayData data[26];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtTreePropertyBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtTreePropertyBrowser_t qt_meta_stringdata_QtTreePropertyBrowser = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtTreePropertyBrowser"
QT_MOC_LITERAL(1, 22, 9), // "collapsed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "QtBrowserItem*"
QT_MOC_LITERAL(4, 48, 4), // "item"
QT_MOC_LITERAL(5, 53, 8), // "expanded"
QT_MOC_LITERAL(6, 62, 13), // "slotCollapsed"
QT_MOC_LITERAL(7, 76, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 88, 1), // "t"
QT_MOC_LITERAL(9, 90, 12), // "slotExpanded"
QT_MOC_LITERAL(10, 103, 29), // "slotCurrentBrowserItemChanged"
QT_MOC_LITERAL(11, 133, 26), // "slotCurrentTreeItemChanged"
QT_MOC_LITERAL(12, 160, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 177, 2), // "t2"
QT_MOC_LITERAL(14, 180, 11), // "indentation"
QT_MOC_LITERAL(15, 192, 15), // "rootIsDecorated"
QT_MOC_LITERAL(16, 208, 20), // "alternatingRowColors"
QT_MOC_LITERAL(17, 229, 13), // "headerVisible"
QT_MOC_LITERAL(18, 243, 10), // "resizeMode"
QT_MOC_LITERAL(19, 254, 10), // "ResizeMode"
QT_MOC_LITERAL(20, 265, 16), // "splitterPosition"
QT_MOC_LITERAL(21, 282, 28), // "propertiesWithoutValueMarked"
QT_MOC_LITERAL(22, 311, 11), // "Interactive"
QT_MOC_LITERAL(23, 323, 7), // "Stretch"
QT_MOC_LITERAL(24, 331, 5), // "Fixed"
QT_MOC_LITERAL(25, 337, 16) // "ResizeToContents"

    },
    "QtTreePropertyBrowser\0collapsed\0\0"
    "QtBrowserItem*\0item\0expanded\0slotCollapsed\0"
    "QModelIndex\0t\0slotExpanded\0"
    "slotCurrentBrowserItemChanged\0"
    "slotCurrentTreeItemChanged\0QTreeWidgetItem*\0"
    "t2\0indentation\0rootIsDecorated\0"
    "alternatingRowColors\0headerVisible\0"
    "resizeMode\0ResizeMode\0splitterPosition\0"
    "propertiesWithoutValueMarked\0Interactive\0"
    "Stretch\0Fixed\0ResizeToContents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtTreePropertyBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   64, // properties
       1,   85, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,
      10,    1,   56,    2, 0x08 /* Private */,
      11,    2,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    8,   13,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, 0x80000000 | 19, 0x0009510b,
      20, QMetaType::Int, 0x00095103,
      21, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,    4,   90,

 // enum data: key, value
      22, uint(QtTreePropertyBrowser::Interactive),
      23, uint(QtTreePropertyBrowser::Stretch),
      24, uint(QtTreePropertyBrowser::Fixed),
      25, uint(QtTreePropertyBrowser::ResizeToContents),

       0        // eod
};

void QtTreePropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collapsed((*reinterpret_cast< QtBrowserItem*(*)>(_a[1]))); break;
        case 1: _t->expanded((*reinterpret_cast< QtBrowserItem*(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->d_func()->slotExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->d_func()->slotCurrentBrowserItemChanged((*reinterpret_cast< QtBrowserItem*(*)>(_a[1]))); break;
        case 5: _t->d_func()->slotCurrentTreeItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtTreePropertyBrowser::*)(QtBrowserItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTreePropertyBrowser::collapsed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtTreePropertyBrowser::*)(QtBrowserItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTreePropertyBrowser::expanded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->indentation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->rootIsDecorated(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->alternatingRowColors(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isHeaderVisible(); break;
        case 4: *reinterpret_cast< ResizeMode*>(_v) = _t->resizeMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->splitterPosition(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->propertiesWithoutValueMarked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndentation(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRootIsDecorated(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAlternatingRowColors(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setHeaderVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 5: _t->setSplitterPosition(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setPropertiesWithoutValueMarked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtTreePropertyBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyBrowser::staticMetaObject>(),
    qt_meta_stringdata_QtTreePropertyBrowser.data,
    qt_meta_data_QtTreePropertyBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtTreePropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTreePropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtTreePropertyBrowser.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractPropertyBrowser::qt_metacast(_clname);
}

int QtTreePropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyBrowser::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtTreePropertyBrowser::collapsed(QtBrowserItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtTreePropertyBrowser::expanded(QtBrowserItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
