/****************************************************************************
** Meta object code from reading C++ file 'GlaucaTabWidget.h'
**
** Created: Fri Jul 22 15:53:55 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GlaucaTabWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlaucaTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlaucaTabWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   16,   56,   16, 0x0a,
      84,   16,   16,   16, 0x0a,
     103,   97,   16,   16, 0x0a,
     131,  123,   16,   16, 0x0a,
     148,   16,   16,   16, 0x0a,
     163,   97,   16,   16, 0x0a,
     180,   16,   16,   16, 0x0a,
     194,   16,   16,   16, 0x0a,
     215,  210,   16,   16, 0x0a,
     250,  210,   16,   16, 0x0a,
     291,   97,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlaucaTabWidget[] = {
    "GlaucaTabWidget\0\0current\0"
    "currentChanged(GlaucaTabPage*)\0"
    "GlaucaWebTab*\0addBlankTab()\0changeIcon()\0"
    "index\0setCurrentPage(int)\0from,to\0"
    "moveTab(int,int)\0initTabState()\0"
    "changeState(int)\0adjustTitle()\0"
    "finishLoading()\0text\0"
    "changeStatusMessageByPage(QString)\0"
    "changeStatusMessageByLinkeHover(QString)\0"
    "currentChangeSlot(int)\0"
};

const QMetaObject GlaucaTabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GlaucaTabWidget,
      qt_meta_data_GlaucaTabWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlaucaTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlaucaTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlaucaTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlaucaTabWidget))
        return static_cast<void*>(const_cast< GlaucaTabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GlaucaTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentChanged((*reinterpret_cast< GlaucaTabPage*(*)>(_a[1]))); break;
        case 1: { GlaucaWebTab* _r = addBlankTab();
            if (_a[0]) *reinterpret_cast< GlaucaWebTab**>(_a[0]) = _r; }  break;
        case 2: changeIcon(); break;
        case 3: setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: initTabState(); break;
        case 6: changeState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: adjustTitle(); break;
        case 8: finishLoading(); break;
        case 9: changeStatusMessageByPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: changeStatusMessageByLinkeHover((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: currentChangeSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void GlaucaTabWidget::currentChanged(GlaucaTabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
