######################################################################
# Automatically generated by qmake (3.1) Wed Apr 26 21:24:14 2017
######################################################################

TEMPLATE = app
TARGET = LibreBridge
INCLUDEPATH += .
QT += widgets
CONFIG += release
CONFIG += warn_on
CONFIG += c++14
QMAKE_CXXFLAGS += -Wall -Wextra -pedantic -fPIC

# Input
HEADERS += src/AIPlayer.hpp \
           src/Bid.hpp \
           src/Card.hpp \
           src/Contract.hpp \
           src/Game.hpp \
           src/HumanPlayer.hpp \
           src/LibreBridge.hpp \
           src/Misc.hpp \
           src/Player.hpp \
           src/AIPlayers/AI_Random.hpp
SOURCES += src/AIPlayer.cpp \
           src/Bid.cpp \
           src/Card.cpp \
           src/Contract.cpp \
           src/Game.cpp \
           src/HumanPlayer.cpp \
           src/LibreBridge.cpp \
           src/Misc.cpp \
           src/Player.cpp \
           src/AIPlayers/AI_Random.cpp