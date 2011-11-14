TEMPLATE = lib
INCLUDEPATH += . ..
DEPENDPATH += . ..
VERSION = 0.9
QT -= gui
debug {
  OBJECTS_DIR = obj/debug
  win32 { LIBS += -L../debug }
}

release {
  OBJECTS_DIR = obj/release
  win32 { LIBS += -L../release }
}


# enable/disable debug symbols
#CONFIG += debug staticlib
CONFIG += release staticlib
CONFIG -= x11

LIBS += -L.. -lquackle

# Input
HEADERS += gcgio.h logania.h queenie.h streamingreporter.h flexiblealphabet.h util.h froggetopt.h dict.h dictfactory.h dictimplementation.h
SOURCES += gcgio.cpp queenie.cpp streamingreporter.cpp flexiblealphabet.cpp util.cpp froggetopt.cpp dict.cpp dictfactory.cpp dictimplementation.cpp 

win32 {
	DEFINES += QUACKLE_USE_WCHAR_FOR_USER_VISIBLE=0
# Following 2 lines are turned on only if the above #define is true
#	INCLUDEPATH += $(STLPORTDIR)/stlport
#	LIBS += -L$(STLPORTDIR)/lib -lstlport_mingw32_static
	QMAKE_CXXFLAGS_DEBUG += -mthreads
	QMAKE_CXXFLAGS_RELEASE += -mthreads
}

