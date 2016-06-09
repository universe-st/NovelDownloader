/****************************************************************************
** Meta object code from reading C++ file 'noveldownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../noveldownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noveldownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NovelDownload_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NovelDownload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NovelDownload_t qt_meta_stringdata_NovelDownload = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NovelDownload"
QT_MOC_LITERAL(1, 14, 11), // "onBtClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "onContentIsEnd"
QT_MOC_LITERAL(4, 42, 19), // "whenOneIsDownloaded"
QT_MOC_LITERAL(5, 62, 17) // "whenDownloadedEnd"

    },
    "NovelDownload\0onBtClicked\0\0onContentIsEnd\0"
    "whenOneIsDownloaded\0whenDownloadedEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NovelDownload[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void NovelDownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NovelDownload *_t = static_cast<NovelDownload *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBtClicked(); break;
        case 1: _t->onContentIsEnd(); break;
        case 2: _t->whenOneIsDownloaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->whenDownloadedEnd(); break;
        default: ;
        }
    }
}

const QMetaObject NovelDownload::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NovelDownload.data,
      qt_meta_data_NovelDownload,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NovelDownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NovelDownload::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NovelDownload.stringdata0))
        return static_cast<void*>(const_cast< NovelDownload*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NovelDownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
