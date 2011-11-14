/****************************************************************************
** Meta object code from reading C++ file 'lister.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_ListerDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x0a,
      38,   13,   13,   13, 0x0a,
      51,   48,   13,   13, 0x0a,
      85,   74,   13,   13, 0x0a,
     110,  105,   13,   13, 0x0a,
     139,   13,   13,   13, 0x0a,
     156,   13,   13,   13, 0x0a,
     181,   13,   13,   13, 0x0a,
     189,   13,   13,   13, 0x0a,
     200,   13,   13,   13, 0x0a,
     221,   13,   13,   13, 0x0a,
     248,   13,   13,   13, 0x0a,
     289,  277,  269,   13, 0x0a,
     321,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ListerDialog[] = {
    "ListerDialog\0\0query\0setQuery(QString)\0queryGo()\0on\0"
    "setRemoveSowpods(bool)\0filterName\0showFilter(QString)\0item\0"
    "showFilter(QListWidgetItem*)\0chooseFilename()\0"
    "filenameChanged(QString)\0clear()\0openFile()\0writeButtonClicked()\0"
    "writeNormalButtonClicked()\0studyButtonClicked()\0QString\0windowTitle\0"
    "windowTitleWithAppName(QString)\0done()\0"
};

const QMetaObject ListerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ListerDialog,
      qt_meta_data_ListerDialog, 0 }
};

const QMetaObject *ListerDialog::metaObject() const
{
    return &staticMetaObject;
}

void *ListerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListerDialog))
	return static_cast<void*>(const_cast<ListerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ListerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setQuery((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: queryGo(); break;
        case 2: setRemoveSowpods((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: showFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: showFilter((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: chooseFilename(); break;
        case 6: filenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: clear(); break;
        case 8: openFile(); break;
        case 9: writeButtonClicked(); break;
        case 10: writeNormalButtonClicked(); break;
        case 11: studyButtonClicked(); break;
        case 12: { QString _r = windowTitleWithAppName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: done(); break;
        }
        _id -= 14;
    }
    return _id;
}
static const uint qt_meta_data_Filter[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      25,   16,    7,    7, 0x0a,
      50,   16,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Filter[] = {
    "Filter\0\0apply()\0settings\0saveSettings(QSettings*)\0"
    "loadSettings(QSettings*)\0"
};

const QMetaObject Filter::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Filter,
      qt_meta_data_Filter, 0 }
};

const QMetaObject *Filter::metaObject() const
{
    return &staticMetaObject;
}

void *Filter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Filter))
	return static_cast<void*>(const_cast<Filter*>(this));
    return QFrame::qt_metacast(_clname);
}

int Filter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: saveSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 2: loadSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_RegexFilter[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RegexFilter[] = {
    "RegexFilter\0\0apply()\0"
};

const QMetaObject RegexFilter::staticMetaObject = {
    { &Filter::staticMetaObject, qt_meta_stringdata_RegexFilter,
      qt_meta_data_RegexFilter, 0 }
};

const QMetaObject *RegexFilter::metaObject() const
{
    return &staticMetaObject;
}

void *RegexFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegexFilter))
	return static_cast<void*>(const_cast<RegexFilter*>(this));
    return Filter::qt_metacast(_clname);
}

int RegexFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Filter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PlayabilityFilter[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      36,   27,   18,   18, 0x0a,
      61,   27,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlayabilityFilter[] = {
    "PlayabilityFilter\0\0apply()\0settings\0saveSettings(QSettings*)\0"
    "loadSettings(QSettings*)\0"
};

const QMetaObject PlayabilityFilter::staticMetaObject = {
    { &Filter::staticMetaObject, qt_meta_stringdata_PlayabilityFilter,
      qt_meta_data_PlayabilityFilter, 0 }
};

const QMetaObject *PlayabilityFilter::metaObject() const
{
    return &staticMetaObject;
}

void *PlayabilityFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayabilityFilter))
	return static_cast<void*>(const_cast<PlayabilityFilter*>(this));
    return Filter::qt_metacast(_clname);
}

int PlayabilityFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Filter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: saveSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 2: loadSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_NumAnagramsFilter[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      36,   27,   18,   18, 0x0a,
      61,   27,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NumAnagramsFilter[] = {
    "NumAnagramsFilter\0\0apply()\0settings\0saveSettings(QSettings*)\0"
    "loadSettings(QSettings*)\0"
};

const QMetaObject NumAnagramsFilter::staticMetaObject = {
    { &Filter::staticMetaObject, qt_meta_stringdata_NumAnagramsFilter,
      qt_meta_data_NumAnagramsFilter, 0 }
};

const QMetaObject *NumAnagramsFilter::metaObject() const
{
    return &staticMetaObject;
}

void *NumAnagramsFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NumAnagramsFilter))
	return static_cast<void*>(const_cast<NumAnagramsFilter*>(this));
    return Filter::qt_metacast(_clname);
}

int NumAnagramsFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Filter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: saveSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 2: loadSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_KeepBritishFilter[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_KeepBritishFilter[] = {
    "KeepBritishFilter\0\0apply()\0"
};

const QMetaObject KeepBritishFilter::staticMetaObject = {
    { &Filter::staticMetaObject, qt_meta_stringdata_KeepBritishFilter,
      qt_meta_data_KeepBritishFilter, 0 }
};

const QMetaObject *KeepBritishFilter::metaObject() const
{
    return &staticMetaObject;
}

void *KeepBritishFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeepBritishFilter))
	return static_cast<void*>(const_cast<KeepBritishFilter*>(this));
    return Filter::qt_metacast(_clname);
}

int KeepBritishFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Filter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        }
        _id -= 1;
    }
    return _id;
}
