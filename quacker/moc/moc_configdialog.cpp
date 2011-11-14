/****************************************************************************
** Meta object code from reading C++ file 'configdialog.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_ConfigPage[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_ConfigPage[] = {
    "ConfigPage\0"
};

const QMetaObject ConfigPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConfigPage,
      qt_meta_data_ConfigPage, 0 }
};

const QMetaObject *ConfigPage::metaObject() const
{
    return &staticMetaObject;
}

void *ConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigPage))
	return static_cast<void*>(const_cast<ConfigPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ConfigDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   29,   13,   13, 0x0a,
      92,   13,   13,   13, 0x0a,
     100,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConfigDialog[] = {
    "ConfigDialog\0\0refreshViews()\0current,previous\0"
    "changePage(QListWidgetItem*,QListWidgetItem*)\0apply()\0submit()\0"
};

const QMetaObject ConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigDialog,
      qt_meta_data_ConfigDialog, 0 }
};

const QMetaObject *ConfigDialog::metaObject() const
{
    return &staticMetaObject;
}

void *ConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigDialog))
	return static_cast<void*>(const_cast<ConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refreshViews(); break;
        case 1: changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: apply(); break;
        case 3: submit(); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ConfigDialog::refreshViews()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
