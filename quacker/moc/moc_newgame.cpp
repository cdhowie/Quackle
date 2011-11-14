/****************************************************************************
** Meta object code from reading C++ file 'newgame.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newgame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_NewGameDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NewGameDialog[] = {
    "NewGameDialog\0\0done()\0"
};

const QMetaObject NewGameDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewGameDialog,
      qt_meta_data_NewGameDialog, 0 }
};

const QMetaObject *NewGameDialog::metaObject() const
{
    return &staticMetaObject;
}

void *NewGameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewGameDialog))
	return static_cast<void*>(const_cast<NewGameDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewGameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PlayerTab[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      26,   10,   10,   10, 0x08,
      38,   10,   10,   10, 0x08,
      53,   10,   10,   10, 0x08,
      72,   10,   10,   10, 0x08,
      87,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlayerTab[] = {
    "PlayerTab\0\0saveSettings()\0addPlayer()\0removePlayer()\0"
    "selectionChanged()\0playerEdited()\0populatePlayers()\0"
};

const QMetaObject PlayerTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayerTab,
      qt_meta_data_PlayerTab, 0 }
};

const QMetaObject *PlayerTab::metaObject() const
{
    return &staticMetaObject;
}

void *PlayerTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerTab))
	return static_cast<void*>(const_cast<PlayerTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayerTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSettings(); break;
        case 1: addPlayer(); break;
        case 2: removePlayer(); break;
        case 3: selectionChanged(); break;
        case 4: playerEdited(); break;
        case 5: populatePlayers(); break;
        }
        _id -= 6;
    }
    return _id;
}
