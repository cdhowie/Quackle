/****************************************************************************
** Meta object code from reading C++ file 'simviewer.h'
**
** Created: Mon Jul 21 16:52:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../simviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_SimViewer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   11,   10,   10, 0x0a,
      54,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimViewer[] = {
    "SimViewer\0\0simulator\0setSimulator(Quackle::Simulator)\0done()\0"
};

const QMetaObject SimViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SimViewer,
      qt_meta_data_SimViewer, 0 }
};

const QMetaObject *SimViewer::metaObject() const
{
    return &staticMetaObject;
}

void *SimViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimViewer))
	return static_cast<void*>(const_cast<SimViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int SimViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setSimulator((*reinterpret_cast< const Quackle::Simulator(*)>(_a[1]))); break;
        case 1: done(); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_AveragesTab[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x0a,
      64,   13,   56,   12, 0x0a,
      99,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AveragesTab[] = {
    "AveragesTab\0\0simulator\0setSimulator(Quackle::Simulator)\0QString\0"
    "statisticTable(Quackle::Simulator)\0explain()\0"
};

const QMetaObject AveragesTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AveragesTab,
      qt_meta_data_AveragesTab, 0 }
};

const QMetaObject *AveragesTab::metaObject() const
{
    return &staticMetaObject;
}

void *AveragesTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AveragesTab))
	return static_cast<void*>(const_cast<AveragesTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int AveragesTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setSimulator((*reinterpret_cast< const Quackle::Simulator(*)>(_a[1]))); break;
        case 1: { QString _r = statisticTable((*reinterpret_cast< const Quackle::Simulator(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: explain(); break;
        }
        _id -= 3;
    }
    return _id;
}
