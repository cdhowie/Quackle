TEMPLATE = app
DEPENDPATH += .. ../quackleio
INCLUDEPATH += . ..
debug {
  OBJECTS_DIR = obj/debug
  win32 { LIBS += -L../debug -L../quackleio/debug }
}

release {
  OBJECTS_DIR = obj/release
  win32 { LIBS += -L../release -L../quackleio/release }
}

MOC_DIR = moc

# enable/disable debug symbols
CONFIG += debug
#CONFIG += release

LIBS += -L.. -L../quackleio -lquackle -lquackleio

# Input
HEADERS += bagdisplay.h boarddisplay.h boardsetup.h boardsetupdialog.h brb.h configdialog.h configpages.h customqsettings.h dashboard.h geometry.h graphicalboard.h graphicalreporter.h history.h letterbox.h letterboxsettings.h lister.h movebox.h newgame.h noteeditor.h quacker.h quackersettings.h rackdisplay.h settings.h simviewer.h view.h widgetfactory.h oppothread.h oppothreadprogressbar.h
SOURCES += bagdisplay.cpp boarddisplay.cpp boardsetup.cpp boardsetupdialog.cpp brb.cpp configdialog.cpp configpages.cpp dashboard.cpp geometry.cpp graphicalboard.cpp graphicalreporter.cpp history.cpp letterbox.cpp letterboxsettings.cpp lister.cpp movebox.cpp newgame.cpp noteeditor.cpp quacker.cpp quackersettings.cpp rackdisplay.cpp settings.cpp simviewer.cpp view.cpp widgetfactory.cpp oppothread.cpp oppothreadprogressbar.cpp main.cpp 

win32 {
	DEFINES += QUACKLE_USE_WCHAR_FOR_USER_VISIBLE=0
# Following 2 lines are turned on only if the above #define is true
#	INCLUDEPATH += $(STLPORTDIR)/stlport
#	LIBS += -L$(STLPORTDIR)/lib -lstlport_mingw32_static
	QMAKE_CXXFLAGS_DEBUG += -mthreads
	QMAKE_CXXFLAGS_RELEASE += -mthreads
	RC_FILE = quacker.rc
}

macx {
	DEFINES += FORCE_SECONDARY_ARROW_GLYPHS=1
}

