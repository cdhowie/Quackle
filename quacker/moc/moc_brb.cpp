/****************************************************************************
** Meta object code from reading C++ file 'brb.h'
**
** Created: Tue Jul 22 04:18:03 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../brb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BRB[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,    5,    4,    4, 0x0a,
      53,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BRB[] = {
    "BRB\0\0position\0positionChanged(Quackle::GamePosition)\0grabFocus()\0"
};

const QMetaObject BRB::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_BRB,
      qt_meta_data_BRB, 0 }
};

const QMetaObject *BRB::metaObject() const
{
    return &staticMetaObject;
}

void *BRB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BRB))
	return static_cast<void*>(const_cast<BRB*>(this));
    return View::qt_metacast(_clname);
}

int BRB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 1: grabFocus(); break;
        }
        _id -= 2;
    }
    return _id;
}
