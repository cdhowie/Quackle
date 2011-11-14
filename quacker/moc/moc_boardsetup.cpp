/****************************************************************************
** Meta object code from reading C++ file 'boardsetup.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../boardsetup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BoardSetup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      38,   32,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BoardSetup[] = {
    "BoardSetup\0\0expandToFullWidth()\0event\0resizeEvent(QResizeEvent*)\0"
};

const QMetaObject BoardSetup::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_BoardSetup,
      qt_meta_data_BoardSetup, 0 }
};

const QMetaObject *BoardSetup::metaObject() const
{
    return &staticMetaObject;
}

void *BoardSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoardSetup))
	return static_cast<void*>(const_cast<BoardSetup*>(this));
    return View::qt_metacast(_clname);
}

int BoardSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: expandToFullWidth(); break;
        case 1: resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_BoardSetupFrame[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      75,   56,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BoardSetupFrame[] = {
    "BoardSetupFrame\0\0positionChanged(Quackle::GamePosition)\0"
    "tileLocation,event\0tileClicked(QSize,const QMouseEvent*)\0"
};

const QMetaObject BoardSetupFrame::staticMetaObject = {
    { &GraphicalBoardFrame::staticMetaObject, qt_meta_stringdata_BoardSetupFrame,
      qt_meta_data_BoardSetupFrame, 0 }
};

const QMetaObject *BoardSetupFrame::metaObject() const
{
    return &staticMetaObject;
}

void *BoardSetupFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoardSetupFrame))
	return static_cast<void*>(const_cast<BoardSetupFrame*>(this));
    return GraphicalBoardFrame::qt_metacast(_clname);
}

int BoardSetupFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphicalBoardFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 1: tileClicked((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QMouseEvent*(*)>(_a[2]))); break;
        }
        _id -= 2;
    }
    return _id;
}
