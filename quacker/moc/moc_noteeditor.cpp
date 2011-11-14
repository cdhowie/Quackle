/****************************************************************************
** Meta object code from reading C++ file 'noteeditor.h'
**
** Created: Mon Jul 21 15:26:27 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../noteeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_NoteEditor[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x0a,
      65,   60,   11,   11, 0x09,
      84,   11,   11,   11, 0x09,
      97,   60,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NoteEditor[] = {
    "NoteEditor\0\0position\0positionChanged(Quackle::GamePosition)\0note\0"
    "showNote(UVString)\0noteEdited()\0manuallySetNoteText(QString)\0"
};

const QMetaObject NoteEditor::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_NoteEditor,
      qt_meta_data_NoteEditor, 0 }
};

const QMetaObject *NoteEditor::metaObject() const
{
    return &staticMetaObject;
}

void *NoteEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NoteEditor))
	return static_cast<void*>(const_cast<NoteEditor*>(this));
    return View::qt_metacast(_clname);
}

int NoteEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionChanged((*reinterpret_cast< const Quackle::GamePosition(*)>(_a[1]))); break;
        case 1: showNote((*reinterpret_cast< const UVString(*)>(_a[1]))); break;
        case 2: noteEdited(); break;
        case 3: manuallySetNoteText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}
