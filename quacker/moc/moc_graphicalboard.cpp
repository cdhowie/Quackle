/****************************************************************************
** Meta object code from reading C++ file 'graphicalboard.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../graphicalboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicalboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_GraphicalBoard[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,
      42,   36,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_GraphicalBoard[] = {
    "GraphicalBoard\0\0expandToFullWidth()\0event\0"
    "resizeEvent(QResizeEvent*)\0"
};

const QMetaObject GraphicalBoard::staticMetaObject = {
    { &BoardWithQuickEntry::staticMetaObject, qt_meta_stringdata_GraphicalBoard,
      qt_meta_data_GraphicalBoard, 0 }
};

const QMetaObject *GraphicalBoard::metaObject() const
{
    return &staticMetaObject;
}

void *GraphicalBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicalBoard))
	return static_cast<void*>(const_cast<GraphicalBoard*>(this));
    return BoardWithQuickEntry::qt_metacast(_clname);
}

int GraphicalBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BoardWithQuickEntry::qt_metacall(_c, _id, _a);
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
static const uint qt_meta_data_GraphicalBoardFrame[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      31,   21,   20,   20, 0x05,
      73,   68,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   96,   20,   20, 0x0a,
     152,  144,   20,   20, 0x0a,
     172,   20,   20,   20, 0x09,
     191,   20,   20,   20, 0x09,
     207,   20,   20,   20, 0x09,
     223,   20,   20,   20, 0x09,
     257,  239,   20,   20, 0x09,
     285,   20,   20,   20, 0x09,
     306,   20,   20,   20, 0x09,
     350,  336,   20,   20, 0x09,
     388,   20,   20,   20, 0x09,
     398,   21,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_GraphicalBoardFrame[] = {
    "GraphicalBoardFrame\0\0candidate\0localCandidateChanged(Quackle::Move)\0"
    "font\0tileFontChanged(QFont)\0position\0"
    "positionChanged(Quackle::GamePosition)\0maxSize\0expandToSize(QSize)\0"
    "backspaceHandler()\0deleteHandler()\0submitHandler()\0commitHandler()\0"
    "text,shiftPressed\0appendHandler(QString,bool)\0setGlobalCandidate()\0"
    "setAndCommitGlobalCandidate()\0tileLocation,\0"
    "tileClicked(QSize,const QMouseEvent*)\0prepare()\0"
    "setLocalCandidate(Quackle::Move)\0"
};

const QMetaObject GraphicalBoardFrame::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_GraphicalBoardFrame,
      qt_meta_data_GraphicalBoardFrame, 0 }
};

const QMetaObject *GraphicalBoardFrame::metaObject() const
{
    return &staticMetaObject;
}

void *GraphicalBoardFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicalBoardFrame))
	return static_cast<void*>(const_cast<GraphicalBoardFrame*>(this));
    return View::qt_metacast(_clname);
}

int GraphicalBoardFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: localCandidateChanged((*reinterpret_cast< const Quackle::Move(*)>(_a[1]))); break;
        case 1: tileFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 3: expandToSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 4: backspaceHandler(); break;
        case 5: deleteHandler(); break;
        case 6: submitHandler(); break;
        case 7: commitHandler(); break;
        case 8: appendHandler((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: setGlobalCandidate(); break;
        case 10: setAndCommitGlobalCandidate(); break;
        case 11: tileClicked((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QMouseEvent*(*)>(_a[2]))); break;
        case 12: prepare(); break;
        case 13: setLocalCandidate((*reinterpret_cast< const Quackle::Move(*)>(_a[1]))); break;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GraphicalBoardFrame::localCandidateChanged(const Quackle::Move & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicalBoardFrame::tileFontChanged(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
