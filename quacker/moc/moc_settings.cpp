/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_Settings[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,    9,    9,    9, 0x0a,
      41,    9,    9,    9, 0x0a,
      54,    9,    9,    9, 0x0a,
      61,    9,    9,    9, 0x0a,
      85,   73,    9,    9, 0x09,
     122,  109,    9,    9, 0x09,
     157,  147,    9,    9, 0x09,
     179,    9,    9,    9, 0x09,
     190,    9,    9,    9, 0x09,
     202,    9,    9,    9, 0x09,
     216,   73,    9,    9, 0x09,
     251,  109,    9,    9, 0x09,
     287,   73,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Settings[] = {
    "Settings\0\0refreshViews()\0preInitialize()\0initialize()\0load()\0"
    "createGUI()\0lexiconName\0lexiconChanged(QString)\0alphabetName\0"
    "alphabetChanged(QString)\0boardName\0boardChanged(QString)\0addBoard()\0"
    "editBoard()\0deleteBoard()\0setQuackleToUseLexiconName(string)\0"
    "setQuackleToUseAlphabetName(string)\0setQuackleToUseBoardName(QString)\0"
};

const QMetaObject Settings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Settings,
      qt_meta_data_Settings, 0 }
};

const QMetaObject *Settings::metaObject() const
{
    return &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings))
	return static_cast<void*>(const_cast<Settings*>(this));
    return QWidget::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refreshViews(); break;
        case 1: preInitialize(); break;
        case 2: initialize(); break;
        case 3: load(); break;
        case 4: createGUI(); break;
        case 5: lexiconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: alphabetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: boardChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: addBoard(); break;
        case 9: editBoard(); break;
        case 10: deleteBoard(); break;
        case 11: setQuackleToUseLexiconName((*reinterpret_cast< const string(*)>(_a[1]))); break;
        case 12: setQuackleToUseAlphabetName((*reinterpret_cast< const string(*)>(_a[1]))); break;
        case 13: setQuackleToUseBoardName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Settings::refreshViews()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
