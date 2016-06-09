/****************************************************************************
** Meta object code from reading C++ file 'HtmlBookDownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HtmlBookDownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HtmlBookDownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HtmlBookDownloader_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HtmlBookDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HtmlBookDownloader_t qt_meta_stringdata_HtmlBookDownloader = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HtmlBookDownloader"
QT_MOC_LITERAL(1, 19, 13), // "OneDownloaded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "AllDownloaded"
QT_MOC_LITERAL(4, 48, 16), // "onUTF8Downloaded"
QT_MOC_LITERAL(5, 65, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 80, 14) // "onGBDownloaded"

    },
    "HtmlBookDownloader\0OneDownloaded\0\0"
    "AllDownloaded\0onUTF8Downloaded\0"
    "QNetworkReply*\0onGBDownloaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtmlBookDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void HtmlBookDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HtmlBookDownloader *_t = static_cast<HtmlBookDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OneDownloaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->AllDownloaded(); break;
        case 2: _t->onUTF8Downloaded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->onGBDownloaded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HtmlBookDownloader::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtmlBookDownloader::OneDownloaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HtmlBookDownloader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtmlBookDownloader::AllDownloaded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject HtmlBookDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HtmlBookDownloader.data,
      qt_meta_data_HtmlBookDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HtmlBookDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlBookDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlBookDownloader.stringdata0))
        return static_cast<void*>(const_cast< HtmlBookDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int HtmlBookDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void HtmlBookDownloader::OneDownloaded(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HtmlBookDownloader::AllDownloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
