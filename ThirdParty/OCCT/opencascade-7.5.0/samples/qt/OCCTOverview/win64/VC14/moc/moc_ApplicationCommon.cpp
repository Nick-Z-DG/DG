/****************************************************************************
** Meta object code from reading C++ file 'ApplicationCommon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ApplicationCommon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationCommon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationCommonWindow_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationCommonWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationCommonWindow_t qt_meta_stringdata_ApplicationCommonWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ApplicationCommonWindow"
QT_MOC_LITERAL(1, 24, 7), // "onAbout"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "onChangeCategory"
QT_MOC_LITERAL(4, 50, 11), // "theCategory"
QT_MOC_LITERAL(5, 62, 17), // "onCloseAllWindows"
QT_MOC_LITERAL(6, 80, 15), // "onProcessSample"
QT_MOC_LITERAL(7, 96, 13), // "theSampleName"
QT_MOC_LITERAL(8, 110, 17), // "onProcessExchange"
QT_MOC_LITERAL(9, 128, 13), // "onProcessOcaf"
QT_MOC_LITERAL(10, 142, 17), // "onProcessViewer3d"
QT_MOC_LITERAL(11, 160, 17) // "onProcessViewer2d"

    },
    "ApplicationCommonWindow\0onAbout\0\0"
    "onChangeCategory\0theCategory\0"
    "onCloseAllWindows\0onProcessSample\0"
    "theSampleName\0onProcessExchange\0"
    "onProcessOcaf\0onProcessViewer3d\0"
    "onProcessViewer2d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationCommonWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void ApplicationCommonWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApplicationCommonWindow *_t = static_cast<ApplicationCommonWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAbout(); break;
        case 1: _t->onChangeCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onCloseAllWindows(); break;
        case 3: _t->onProcessSample((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onProcessExchange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onProcessOcaf((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onProcessViewer3d((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onProcessViewer2d((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ApplicationCommonWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ApplicationCommonWindow.data,
      qt_meta_data_ApplicationCommonWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApplicationCommonWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationCommonWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationCommonWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ApplicationCommonWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
