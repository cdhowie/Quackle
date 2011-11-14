/****************************************************************************
** Meta object code from reading C++ file 'letterbox.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../letterbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'letterbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_InputValidator[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_InputValidator[] = {
    "InputValidator\0"
};

const QMetaObject InputValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_InputValidator,
      qt_meta_data_InputValidator, 0 }
};

const QMetaObject *InputValidator::metaObject() const
{
    return &staticMetaObject;
}

void *InputValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputValidator))
	return static_cast<void*>(const_cast<InputValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int InputValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Letterbox[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      27,   18,   10,   10, 0x0a,
      55,   10,   10,   10, 0x0a,
      70,   10,   10,   10, 0x0a,
      82,   10,   10,   10, 0x0a,
      90,   10,   10,   10, 0x0a,
     103,   10,   10,   10, 0x0a,
     111,   10,   10,   10, 0x0a,
     129,  122,   10,   10, 0x0a,
     141,   10,   10,   10, 0x0a,
     160,   10,   10,   10, 0x0a,
     167,   10,   10,   10, 0x0a,
     179,   10,   10,   10, 0x0a,
     199,  193,   10,   10, 0x0a,
     211,   10,   10,   10, 0x0a,
     220,   10,   10,   10, 0x09,
     243,   10,   10,   10, 0x09,
     272,  267,   10,   10, 0x09,
     297,   10,   10,   10, 0x09,
     307,  267,   10,   10, 0x09,
     327,   10,   10,   10, 0x29,
     349,  340,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Letterbox[] = {
    "Letterbox\0\0open()\0filename\0openParticularFile(QString)\0"
    "generateList()\0writeFile()\0print()\0printStudy()\0about()\0loadFile()\0"
    "paused\0pause(bool)\0markLastAsMissed()\0skip()\0increment()\0"
    "prepareQuiz()\0index\0jumpTo(int)\0jumpTo()\0finishInitialization()\0"
    "lineEditReturnPressed()\0text\0mistakeDetector(QString)\0timeout()\0"
    "setCaption(QString)\0setCaption()\0modified\0setModified(bool)\0"
};

const QMetaObject Letterbox::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Letterbox,
      qt_meta_data_Letterbox, 0 }
};

const QMetaObject *Letterbox::metaObject() const
{
    return &staticMetaObject;
}

void *Letterbox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Letterbox))
	return static_cast<void*>(const_cast<Letterbox*>(this));
    if (!strcmp(_clname, "Dict::ThingToGetUpdatedDuringQueries"))
	return static_cast<Dict::ThingToGetUpdatedDuringQueries*>(const_cast<Letterbox*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Letterbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: open(); break;
        case 1: openParticularFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: generateList(); break;
        case 3: writeFile(); break;
        case 4: print(); break;
        case 5: printStudy(); break;
        case 6: about(); break;
        case 7: loadFile(); break;
        case 8: pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: markLastAsMissed(); break;
        case 10: skip(); break;
        case 11: increment(); break;
        case 12: prepareQuiz(); break;
        case 13: jumpTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: jumpTo(); break;
        case 15: finishInitialization(); break;
        case 16: lineEditReturnPressed(); break;
        case 17: mistakeDetector((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: timeout(); break;
        case 19: setCaption((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: setCaption(); break;
        case 21: setModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 22;
    }
    return _id;
}
static const uint qt_meta_data_WordView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_WordView[] = {
    "WordView\0"
};

const QMetaObject WordView::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_WordView,
      qt_meta_data_WordView, 0 }
};

const QMetaObject *WordView::metaObject() const
{
    return &staticMetaObject;
}

void *WordView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WordView))
	return static_cast<void*>(const_cast<WordView*>(this));
    if (!strcmp(_clname, "HTMLRepresentation"))
	return static_cast<HTMLRepresentation*>(const_cast<WordView*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int WordView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
