QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    a-HP_rectangle.cpp \
    a-battle.cpp \
    a-character.cpp \
    a-skill.cpp \
    amywidget.cpp \
    apackchoice.cpp \
    at_f.cpp \
    atrue_false.cpp \
    buy_false.cpp \
    buy_true.cpp \
    character.cpp \
    game.cpp \
    jiemian.cpp \
    main.cpp \
    menu.cpp \
    npc.cpp \
    package.cpp \
    reallyquit.cpp \
    saving.cpp \
    store.cpp \
    trade.cpp \
    widget.cpp

HEADERS += \
    a-HP_rectangle.h \
    a-battle.h \
    a-character.h \
    a-skill.h \
    amywidget.h \
    apackchoice.h \
    at_f.h \
    atrue_false.h \
    buy_false.h \
    buy_true.h \
    character.h \
    game.h \
    hero.h \
    init.h \
    jiemian.h \
    menu.h \
    npc.h \
    package.h \
    reallyquit.h \
    saving.h \
    store.h \
    the_init_for_game.h \
    the_init_for_save.h \
    the_init_for_store.h \
    trade.h \
    w.h \
    widget.h

FORMS += \
    amywidget.ui \
    apackchoice.ui \
    at_f.ui \
    atrue_false.ui \
    buy_false.ui \
    buy_true.ui \
    jiemian.ui \
    menu.ui \
    package.ui \
    reallyquit.ui \
    saving.ui \
    store.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    存档.qrc
