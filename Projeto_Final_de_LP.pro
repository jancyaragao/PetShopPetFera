#-------------------------------------------------
#
# Project created by QtCreator 2019-05-09T12:17:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto_Final_de_LP
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        src/anfibio.cpp \
        src/anfibioexotico.cpp \
        src/anfibionativo.cpp \
        src/animal.cpp \
        src/animalexotico.cpp \
        src/animalnativo.cpp \
        src/animalsilvestre.cpp \
        src/ave.cpp \
        src/aveexotico.cpp \
        src/avenativo.cpp \
        src/cadastramento_usuario.cpp \
        src/cadastro_animal.cpp \
        src/crudtela.cpp \
        src/funcionario.cpp \
        src/main.cpp \
        src/mamifero.cpp \
        src/mamiferoexotico.cpp \
        src/mamiferonativo.cpp \
        src/reptil.cpp \
        src/reptilexotico.cpp \
        src/reptilnativo.cpp \
        src/sistema.cpp \
        src/telamenuprincipal.cpp \
        src/tratador.cpp \
        src/veterinario.cpp

HEADERS += \
        include/anfibio.h \
        include/anfibioexotico.h \
        include/anfibionativo.h \
        include/animal.h \
        include/animalexotico.h \
        include/animalnativo.h \
        include/animalsilvestre.h \
        include/ave.h \
        include/aveexotico.h \
        include/avenativo.h \
        include/cadastramento_usuario.h \
        include/cadastro_animal.h \
        include/crudtela.h \
        include/funcionario.h \
        include/mamifero.h \
        include/mamiferoexotico.h \
        include/mamiferonativo.h \
        include/reptil.h \
        include/reptilexotico.h \
        include/reptilnativo.h \
        include/sistema.h \
        include/telamenuprincipal.h \
        include/tratador.h \
        include/veterinario.h

FORMS += \
        forms/cadastramento_usuario.ui \
        forms/cadastro_animal.ui \
        forms/crudtela.ui \
        forms/sistema.ui \
        forms/telamenuprincipal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourcefile.qrc
