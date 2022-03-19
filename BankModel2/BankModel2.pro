TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Bank.cpp \
        CanaraBank.cpp \
        CanaraBankBranch.cpp \
        Customer.cpp \
        HDFCBank.cpp \
        HDFCBankBranch.cpp \
        LinkedList.cpp \
        SBIBank.cpp \
        SBIBankBranch.cpp \
        main.cpp

HEADERS += \
    Bank.h \
    CanaraBank.h \
    CanaraBankBranch.h \
    Customer.h \
    HDFCBank.h \
    HDFCBankBranch.h \
    LinkedList.h \
    SBIBank.h \
    SBIBankBranch.h
