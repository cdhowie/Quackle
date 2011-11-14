/****************************************************************************
** Meta object code from reading C++ file 'movebox.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../movebox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_MoveBox[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,    9,    8,    8, 0x0a,
      63,   57,    8,    8, 0x0a,
     100,   95,    8,    8, 0x08,
     132,    8,    8,    8, 0x08,
     151,    8,    8,    8, 0x08,
     164,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MoveBox[] = {
    "MoveBox\0\0position\0positionChanged(Quackle::GamePosition)\0moves\0"
    "movesChanged(Quackle::MoveList)\0item\0moveActivated(QTreeWidgetItem*)\0"
    "selectionChanged()\0removeMove()\0checkGeometry()\0"
};

const QMetaObject MoveBox::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_MoveBox,
      qt_meta_data_MoveBox, 0 }
};

const QMetaObject *MoveBox::metaObject() const
{
    return &staticMetaObject;
}

void *MoveBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MoveBox))
	return static_cast<void*>(const_cast<MoveBox*>(this));
    return View::qt_metacast(_clname);
}

int MoveBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 1: movesChanged((*reinterpret_cast< const Quackle::MoveList(*)>(_a[1]))); break;
        case 2: moveActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: selectionChanged(); break;
        case 4: removeMove(); break;
        case 5: checkGeometry(); break;
        }
        _id -= 6;
    }
    return _id;
}
