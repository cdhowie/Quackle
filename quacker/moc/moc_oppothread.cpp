/****************************************************************************
** Meta object code from reading C++ file 'oppothread.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../oppothread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oppothread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QuackerDispatch[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      30,   17,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QuackerDispatch[] = {
    "QuackerDispatch\0\0fractionDone\0fractionDone(double)\0"
};

const QMetaObject QuackerDispatch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuackerDispatch,
      qt_meta_data_QuackerDispatch, 0 }
};

const QMetaObject *QuackerDispatch::metaObject() const
{
    return &staticMetaObject;
}

void *QuackerDispatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuackerDispatch))
	return static_cast<void*>(const_cast<QuackerDispatch*>(this));
    if (!strcmp(_clname, "Quackle::ComputerDispatch"))
	return static_cast<Quackle::ComputerDispatch*>(const_cast<QuackerDispatch*>(this));
    return QObject::qt_metacast(_clname);
}

int QuackerDispatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fractionDone((*reinterpret_cast< double(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QuackerDispatch::fractionDone(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_OppoThread[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      28,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   61,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OppoThread[] = {
    "OppoThread\0\0fraction,thread\0fractionDone(double,OppoThread*)\0"
    "fractionDone\0signalFractionDone(double)\0"
};

const QMetaObject OppoThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_OppoThread,
      qt_meta_data_OppoThread, 0 }
};

const QMetaObject *OppoThread::metaObject() const
{
    return &staticMetaObject;
}

void *OppoThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OppoThread))
	return static_cast<void*>(const_cast<OppoThread*>(this));
    return QThread::qt_metacast(_clname);
}

int OppoThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fractionDone((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< OppoThread*(*)>(_a[2]))); break;
        case 1: signalFractionDone((*reinterpret_cast< double(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OppoThread::fractionDone(double _t1, OppoThread * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
