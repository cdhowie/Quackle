/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BaseView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BaseView[] = {
    "BaseView\0\0message\0statusMessage(QString)\0"
};

const QMetaObject BaseView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_BaseView,
      qt_meta_data_BaseView, 0 }
};

const QMetaObject *BaseView::metaObject() const
{
    return &staticMetaObject;
}

void *BaseView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaseView))
	return static_cast<void*>(const_cast<BaseView*>(this));
    return QFrame::qt_metacast(_clname);
}

int BaseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void BaseView::statusMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_View[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      11,    6,    5,    5, 0x05,
      49,   43,    5,    5, 0x05,
      89,    5,    5,    5, 0x05,
     103,   98,    5,    5, 0x05,
     131,  126,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     158,  149,    5,    5, 0x0a,
     197,   43,    5,    5, 0x0a,
     229,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_View[] = {
    "View\0\0move\0setCandidateMove(Quackle::Move)\0moves\0"
    "removeCandidateMoves(Quackle::MoveList)\0commit()\0rack\0"
    "setRack(Quackle::Rack)\0note\0setNote(UVString)\0position\0"
    "positionChanged(Quackle::GamePosition)\0movesChanged(Quackle::MoveList)\0"
    "grabFocus()\0"
};

const QMetaObject View::staticMetaObject = {
    { &BaseView::staticMetaObject, qt_meta_stringdata_View,
      qt_meta_data_View, 0 }
};

const QMetaObject *View::metaObject() const
{
    return &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View))
	return static_cast<void*>(const_cast<View*>(this));
    return BaseView::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setCandidateMove((*reinterpret_cast< const Quackle::Move(*)>(_a[1]))); break;
        case 1: removeCandidateMoves((*reinterpret_cast< const Quackle::MoveList(*)>(_a[1]))); break;
        case 2: commit(); break;
        case 3: setRack((*reinterpret_cast< const Quackle::Rack(*)>(_a[1]))); break;
        case 4: setNote((*reinterpret_cast< const UVString(*)>(_a[1]))); break;
        case 5: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 6: movesChanged((*reinterpret_cast< const Quackle::MoveList(*)>(_a[1]))); break;
        case 7: grabFocus(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void View::setCandidateMove(const Quackle::Move & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void View::removeCandidateMoves(const Quackle::MoveList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void View::commit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void View::setRack(const Quackle::Rack & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void View::setNote(const UVString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_HistoryView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   68,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HistoryView[] = {
    "HistoryView\0\0location\0goToHistoryLocation(Quackle::HistoryLocation)\0"
    "history\0historyChanged(Quackle::History)\0"
};

const QMetaObject HistoryView::staticMetaObject = {
    { &BaseView::staticMetaObject, qt_meta_stringdata_HistoryView,
      qt_meta_data_HistoryView, 0 }
};

const QMetaObject *HistoryView::metaObject() const
{
    return &staticMetaObject;
}

void *HistoryView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryView))
	return static_cast<void*>(const_cast<HistoryView*>(this));
    return BaseView::qt_metacast(_clname);
}

int HistoryView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: goToHistoryLocation((*reinterpret_cast< const Quackle::HistoryLocation(*)>(_a[1]))); break;
        case 1: historyChanged((*reinterpret_cast< const Quackle::History(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HistoryView::goToHistoryLocation(const Quackle::HistoryLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
