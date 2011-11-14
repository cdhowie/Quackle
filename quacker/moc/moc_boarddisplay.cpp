/****************************************************************************
** Meta object code from reading C++ file 'boarddisplay.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../boarddisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boarddisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BoardWithQuickEntry[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x0a,
      79,   69,   20,   20, 0x09,
     112,   20,   20,   20, 0x08,
     137,   20,   20,   20, 0x08,
     148,   20,   20,   20, 0x08,
     164,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BoardWithQuickEntry[] = {
    "BoardWithQuickEntry\0\0position\0positionChanged(Quackle::GamePosition)\0"
    "candidate\0setLocalCandidate(Quackle::Move)\0quickEditReturnPressed()\0"
    "plusFive()\0performCommit()\0reset()\0"
};

const QMetaObject BoardWithQuickEntry::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_BoardWithQuickEntry,
      qt_meta_data_BoardWithQuickEntry, 0 }
};

const QMetaObject *BoardWithQuickEntry::metaObject() const
{
    return &staticMetaObject;
}

void *BoardWithQuickEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoardWithQuickEntry))
	return static_cast<void*>(const_cast<BoardWithQuickEntry*>(this));
    return View::qt_metacast(_clname);
}

int BoardWithQuickEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 1: setLocalCandidate((*reinterpret_cast< const Quackle::Move(*)>(_a[1]))); break;
        case 2: quickEditReturnPressed(); break;
        case 3: plusFive(); break;
        case 4: performCommit(); break;
        case 5: reset(); break;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_TextBoard[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TextBoard[] = {
    "TextBoard\0\0position\0positionChanged(Quackle::GamePosition)\0"
};

const QMetaObject TextBoard::staticMetaObject = {
    { &BoardWithQuickEntry::staticMetaObject, qt_meta_stringdata_TextBoard,
      qt_meta_data_TextBoard, 0 }
};

const QMetaObject *TextBoard::metaObject() const
{
    return &staticMetaObject;
}

void *TextBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextBoard))
	return static_cast<void*>(const_cast<TextBoard*>(this));
    return BoardWithQuickEntry::qt_metacast(_clname);
}

int TextBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BoardWithQuickEntry::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
