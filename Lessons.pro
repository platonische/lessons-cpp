QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        MyClass1.cpp \
        MySubClass1.cpp \
        MySubClass2.cpp \
        firstLessons.cpp \
        lesson10.cpp \
        lesson11.cpp \
        lesson4.cpp \
        lesson5.cpp \
        lesson6.cpp \
        lesson6hw.cpp \
        lesson7.cpp \
        lesson8.cpp \
        lesson8hw.cpp \
        lesson9.cpp \
        main.cpp \
        src/first/Bar.cpp \
        src/first/Base.cpp \
        src/first/Base.cpp \
        src/first/ClassA.cpp \
        src/first/ClassB.cpp \
        src/first/Foo.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    MyClass1.h \
    MySubClass1.h \
    MySubClass2.h \
    src/first/Bar.h \
    src/first/Base.h \
    src/first/Base.h \
    src/first/Base.h \
    src/first/ClassA.h \
    src/first/ClassB.h \
    src/first/Foo.h

QT += widgets
