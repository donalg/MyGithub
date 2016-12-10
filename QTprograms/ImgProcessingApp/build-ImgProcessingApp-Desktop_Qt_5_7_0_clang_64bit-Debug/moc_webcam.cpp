/****************************************************************************
** Meta object code from reading C++ file 'webcam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ImgProcessingApp/webcam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webcam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Webcam_t {
    QByteArrayData data[11];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Webcam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Webcam_t qt_meta_stringdata_Webcam = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Webcam"
QT_MOC_LITERAL(1, 7, 7), // "started"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "mat_ready"
QT_MOC_LITERAL(4, 26, 7), // "cv::Mat"
QT_MOC_LITERAL(5, 34, 11), // "Image_ready"
QT_MOC_LITERAL(6, 46, 3), // "run"
QT_MOC_LITERAL(7, 50, 4), // "init"
QT_MOC_LITERAL(8, 55, 4), // "stop"
QT_MOC_LITERAL(9, 60, 18), // "convert_Mat2QImage"
QT_MOC_LITERAL(10, 79, 3) // "mat"

    },
    "Webcam\0started\0\0mat_ready\0cv::Mat\0"
    "Image_ready\0run\0init\0stop\0convert_Mat2QImage\0"
    "mat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Webcam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   56,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   10,

       0        // eod
};

void Webcam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Webcam *_t = static_cast<Webcam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->mat_ready((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 2: _t->Image_ready((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->run(); break;
        case 4: _t->init(); break;
        case 5: _t->stop(); break;
        case 6: _t->convert_Mat2QImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Webcam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Webcam::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Webcam::*_t)(cv::Mat );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Webcam::mat_ready)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Webcam::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Webcam::Image_ready)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Webcam::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Webcam.data,
      qt_meta_data_Webcam,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Webcam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Webcam::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Webcam.stringdata0))
        return static_cast<void*>(const_cast< Webcam*>(this));
    return QObject::qt_metacast(_clname);
}

int Webcam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Webcam::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Webcam::mat_ready(cv::Mat _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Webcam::Image_ready(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
