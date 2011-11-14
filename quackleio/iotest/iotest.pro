TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += . .. ../..

# enable/disable debug symbols
#CONFIG += debug

debug {
  OBJECTS_DIR = obj/debug
  win32 { LIBS += -L../debug -L../../debug }
}

release {
  OBJECTS_DIR = obj/release
  win32 { LIBS += -L../release -L../../release }
}

LIBS += -L.. -L../.. -lquackle -lquackleio

# Input
HEADERS += trademarkedboards.h
SOURCES += iotest.cpp trademarkedboards.cpp

win32 {
	DEFINES += QUACKLE_USE_WCHAR_FOR_USER_VISIBLE=0
# Following 2 lines are turned on only if the above #define is true
#	INCLUDEPATH += $(STLPORTDIR)/stlport
#	LIBS += -L$(STLPORTDIR)/lib -lstlport_mingw32_static
	QMAKE_CXXFLAGS_DEBUG += -mthreads
	QMAKE_CXXFLAGS_RELEASE += -mthreads
}

