/****************************************************************************
** Meta object code from reading C++ file 'QGLClipTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/qt-gui/QGLClipTreeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGLClipTreeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGLClipTreeModel_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGLClipTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGLClipTreeModel_t qt_meta_stringdata_QGLClipTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGLClipTreeModel"
QT_MOC_LITERAL(1, 17, 11), // "runnerReset"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "dtor"
QT_MOC_LITERAL(4, 35, 15), // "clipDataChanged"
QT_MOC_LITERAL(5, 51, 7), // "GLClip*"
QT_MOC_LITERAL(6, 59, 4), // "clip"
QT_MOC_LITERAL(7, 64, 23), // "clipAboutToChangeParent"
QT_MOC_LITERAL(8, 88, 9), // "newparent"
QT_MOC_LITERAL(9, 98, 9), // "oldparent"
QT_MOC_LITERAL(10, 108, 17) // "clipChangedParent"

    },
    "QGLClipTreeModel\0runnerReset\0\0dtor\0"
    "clipDataChanged\0GLClip*\0clip\0"
    "clipAboutToChangeParent\0newparent\0"
    "oldparent\0clipChangedParent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGLClipTreeModel[] = {

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
       7,    3,   40,    2, 0x08 /* Private */,
      10,    3,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    6,    8,    9,

       0        // eod
};

void QGLClipTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGLClipTreeModel *_t = static_cast<QGLClipTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runnerReset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clipDataChanged((*reinterpret_cast< GLClip*(*)>(_a[1]))); break;
        case 2: _t->clipAboutToChangeParent((*reinterpret_cast< GLClip*(*)>(_a[1])),(*reinterpret_cast< GLClip*(*)>(_a[2])),(*reinterpret_cast< GLClip*(*)>(_a[3]))); break;
        case 3: _t->clipChangedParent((*reinterpret_cast< GLClip*(*)>(_a[1])),(*reinterpret_cast< GLClip*(*)>(_a[2])),(*reinterpret_cast< GLClip*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QGLClipTreeModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_QGLClipTreeModel.data,
    qt_meta_data_QGLClipTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGLClipTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGLClipTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGLClipTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QGLClipTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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