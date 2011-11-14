/****************************************************************************
** Meta object code from reading C++ file 'rackdisplay.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rackdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rackdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QuickEntryRack[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x0a,
      64,   15,   15,   15, 0x0a,
      76,   15,   15,   15, 0x08,
     101,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuickEntryRack[] = {
    "QuickEntryRack\0\0position\0positionChanged(Quackle::GamePosition)\0"
    "grabFocus()\0quickEditReturnPressed()\0shuffle()\0"
};

const QMetaObject QuickEntryRack::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_QuickEntryRack,
      qt_meta_data_QuickEntryRack, 0 }
};

const QMetaObject *QuickEntryRack::metaObject() const
{
    return &staticMetaObject;
}

void *QuickEntryRack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuickEntryRack))
	return static_cast<void*>(const_cast<QuickEntryRack*>(this));
    return View::qt_metacast(_clname);
}

int QuickEntryRack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 1: grabFocus(); break;
        case 2: quickEditReturnPressed(); break;
        case 3: shuffle(); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_GraphicalRack[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraphicalRack[] = {
    "GraphicalRack\0\0text\0setText(Quackle::LetterString)\0"
};

const QMetaObject GraphicalRack::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_GraphicalRack,
      qt_meta_data_GraphicalRack, 0 }
};

const QMetaObject *GraphicalRack::metaObject() const
{
    return &staticMetaObject;
}

void *GraphicalRack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicalRack))
	return static_cast<void*>(const_cast<GraphicalRack*>(this));
    return QFrame::qt_metacast(_clname);
}

int GraphicalRack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setText((*reinterpret_cast< const Quackle::LetterString(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
