/****************************************************************************
** Meta object code from reading C++ file 'boardsetupdialog.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../boardsetupdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardsetupdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BoardSetupDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x09,
      52,   17,   17,   17, 0x09,
      70,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BoardSetupDialog[] = {
    "BoardSetupDialog\0\0unused\0parametersChanged(QString)\0"
    "symmetryChanged()\0undoAllChanges()\0"
};

const QMetaObject BoardSetupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BoardSetupDialog,
      qt_meta_data_BoardSetupDialog, 0 }
};

const QMetaObject *BoardSetupDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BoardSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoardSetupDialog))
	return static_cast<void*>(const_cast<BoardSetupDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BoardSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: parametersChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: symmetryChanged(); break;
        case 2: undoAllChanges(); break;
        }
        _id -= 3;
    }
    return _id;
}
