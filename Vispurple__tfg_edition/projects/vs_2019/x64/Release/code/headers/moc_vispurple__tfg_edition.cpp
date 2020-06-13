/****************************************************************************
** Meta object code from reading C++ file 'vispurple__tfg_edition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../code/headers/vispurple__tfg_edition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vispurple__tfg_edition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Vispurple__tfg_edition_t {
    QByteArrayData data[9];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vispurple__tfg_edition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vispurple__tfg_edition_t qt_meta_stringdata_Vispurple__tfg_edition = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Vispurple__tfg_edition"
QT_MOC_LITERAL(1, 23, 6), // "update"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "set_delta_time"
QT_MOC_LITERAL(4, 46, 10), // "load_image"
QT_MOC_LITERAL(5, 57, 13), // "export_report"
QT_MOC_LITERAL(6, 71, 24), // "update_available_windows"
QT_MOC_LITERAL(7, 96, 21), // "select_current_window"
QT_MOC_LITERAL(8, 118, 26) // "update_accessibility_index"

    },
    "Vispurple__tfg_edition\0update\0\0"
    "set_delta_time\0load_image\0export_report\0"
    "update_available_windows\0select_current_window\0"
    "update_accessibility_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vispurple__tfg_edition[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Vispurple__tfg_edition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vispurple__tfg_edition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->set_delta_time(); break;
        case 2: _t->load_image(); break;
        case 3: _t->export_report(); break;
        case 4: _t->update_available_windows(); break;
        case 5: _t->select_current_window(); break;
        case 6: _t->update_accessibility_index(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Vispurple__tfg_edition::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Vispurple__tfg_edition.data,
    qt_meta_data_Vispurple__tfg_edition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Vispurple__tfg_edition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vispurple__tfg_edition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vispurple__tfg_edition.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Vispurple__tfg_edition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
