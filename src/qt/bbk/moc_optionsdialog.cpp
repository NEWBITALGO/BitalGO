/****************************************************************************
** Meta object code from reading C++ file 'optionsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/optionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OptionsDialog_t {
    QByteArrayData data[20];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionsDialog_t qt_meta_stringdata_OptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OptionsDialog"
QT_MOC_LITERAL(1, 14, 13), // "proxyIpChecks"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "QValidatedLineEdit*"
QT_MOC_LITERAL(4, 49, 10), // "pUiProxyIp"
QT_MOC_LITERAL(5, 60, 10), // "QLineEdit*"
QT_MOC_LITERAL(6, 71, 12), // "pUiProxyPort"
QT_MOC_LITERAL(7, 84, 14), // "enableOkButton"
QT_MOC_LITERAL(8, 99, 15), // "disableOkButton"
QT_MOC_LITERAL(9, 115, 16), // "setOkButtonState"
QT_MOC_LITERAL(10, 132, 6), // "fState"
QT_MOC_LITERAL(11, 139, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(12, 162, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(13, 182, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(14, 206, 17), // "updateHideOrphans"
QT_MOC_LITERAL(15, 224, 5), // "fHide"
QT_MOC_LITERAL(16, 230, 18), // "showRestartWarning"
QT_MOC_LITERAL(17, 249, 11), // "fPersistent"
QT_MOC_LITERAL(18, 261, 16), // "clearStatusLabel"
QT_MOC_LITERAL(19, 278, 15) // "doProxyIpChecks"

    },
    "OptionsDialog\0proxyIpChecks\0\0"
    "QValidatedLineEdit*\0pUiProxyIp\0"
    "QLineEdit*\0pUiProxyPort\0enableOkButton\0"
    "disableOkButton\0setOkButtonState\0"
    "fState\0on_resetButton_clicked\0"
    "on_okButton_clicked\0on_cancelButton_clicked\0"
    "updateHideOrphans\0fHide\0showRestartWarning\0"
    "fPersistent\0clearStatusLabel\0"
    "doProxyIpChecks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      16,    1,   90,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x28 /* Private | MethodCloned */,
      18,    0,   94,    2, 0x08 /* Private */,
      19,    2,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void OptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsDialog *_t = static_cast<OptionsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->proxyIpChecks((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< QLineEdit*(*)>(_a[2]))); break;
        case 1: _t->enableOkButton(); break;
        case 2: _t->disableOkButton(); break;
        case 3: _t->setOkButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_resetButton_clicked(); break;
        case 5: _t->on_okButton_clicked(); break;
        case 6: _t->on_cancelButton_clicked(); break;
        case 7: _t->updateHideOrphans((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showRestartWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showRestartWarning(); break;
        case 10: _t->clearStatusLabel(); break;
        case 11: _t->doProxyIpChecks((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< QLineEdit*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OptionsDialog::*)(QValidatedLineEdit * , QLineEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptionsDialog::proxyIpChecks)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDialog.data,
      qt_meta_data_OptionsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OptionsDialog::proxyIpChecks(QValidatedLineEdit * _t1, QLineEdit * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
