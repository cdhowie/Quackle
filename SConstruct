# Supported configurations:
# d=1 (or debug=1)      -- compile with debug symbols
# r=1 (or release=1)    -- compile with full optimization
# wstring=1             -- compile with wstring support (Windows only)
#
# Non-default targets:
# QuackleInstaller.exe           -- creates installer (Windows only)


# Big-picture configuration of environment
env = Environment()
if env['PLATFORM'] == 'win32':
	env.Tool('mingw') # resets a lot of stuff...don't move this call down
import os

# Debug settings
if ARGUMENTS.get('d', 0) or ARGUMENTS.get('debug', 0):
	env.Append(CCFLAGS = '-g')

# Release settings
if ARGUMENTS.get('r', 1) or ARGUMENTS.get('release', 1):
	env.Append(CCFLAGS = '-O2')

# Windows-specific settings
if env['PLATFORM'] == 'win32':
	env.Append(LINKFLAGS = ' -mthreads', CCFLAGS = ' -mthreads')
	if ARGUMENTS.get('wstring', 0):
		STLPORTDIR=os.environ['STLPORTDIR']
		env.Append(
			CPPDEFINES = [('QUACKLE_USE_WCHAR_FOR_USER_VISIBLE', 1)],
			LIBS='stlport_mingw32_static', 
			LIBPATH=STLPORTDIR+'/lib',
			CPPPATH=STLPORTDIR+'/stlport')
	else:
		env.Append(CPPDEFINES = [('QUACKLE_USE_WCHAR_FOR_USER_VISIBLE', 0)])

#env.Program('loaddawg.cpp')
#env.Program('makedawg.cpp')
#env.Program('gaddagize.cpp')
#env.Program('makegaddag.cpp')
#env.Program('loadgaddag.cpp')


env.Library('quackle', Split('bogowinplayer.cpp enumerator.cpp computerplayercollection.cpp endgame.cpp endgameplayer.cpp evaluator.cpp catchall.cpp move.cpp rack.cpp bag.cpp board.cpp generator.cpp player.cpp playerlist.cpp game.cpp computerplayer.cpp datamanager.cpp gameparameters.cpp alphabetparameters.cpp boardparameters.cpp lexiconparameters.cpp reporter.cpp resolvent.cpp preendgame.cpp strategyparameters.cpp sim.cpp clock.cpp'))
env.Append(LIBS=['quackle'], LIBPATH=['.'])
env.Program('quackletest.cpp')

#Windows-specific files for installer
env.Clean('QuackleInstaller.exe', ['QuackleInstaller.exe', 'mingwm10.dll', 'QtGui4.dll', 'QtCore4.dll'])
if 'QuackleInstaller.exe' in COMMAND_LINE_TARGETS:
	env.Command('QtCore4.dll', os.path.dirname(WhereIs('qmake'))+'/QtCore4.dll', "copy $SOURCE $TARGET")
	env.Command('QtGui4.dll', os.path.dirname(WhereIs('qmake'))+'/QtGui4.dll', "copy $SOURCE $TARGET")
	env.Command('mingwm10.dll', os.path.dirname(WhereIs('mingw32-gcc'))+'/mingwm10.dll', "copy $SOURCE $TARGET")
	env.Command('QuackleInstaller.exe', Split('installer.iss QtCore4.dll QtGui4.dll mingwm10.dll'), WhereIs("ISCC")+" installer.iss /FQuackleInstaller /O. /Q")
else:
	env.Command('QuackleInstaller.exe', 'installer.iss', "") # just to establish a target for Clean()
