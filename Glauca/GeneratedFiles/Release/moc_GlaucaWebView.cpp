/****************************************************************************
** Meta object code from reading C++ file 'GlaucaWebView.h'
**
** Created: Fri Jul 22 15:53:53 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GlaucaWebView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlaucaWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlaucaWebView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,
      49,   44,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   14,   14,   14, 0x0a,
     111,   14,   14,   14, 0x0a,
     131,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlaucaWebView[] = {
    "GlaucaWebView\0\0query\0searchRequest(QString)\0"
    "type\0createWindowRequest(QWebPage::WebWindowType)\0"
    "viewPageSource()\0addSelectedToWiki()\0"
    "addPageToWiki()\0"
};

const QMetaObject GlaucaWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_GlaucaWebView,
      qt_meta_data_GlaucaWebView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlaucaWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlaucaWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlaucaWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlaucaWebView))
        return static_cast<void*>(const_cast< GlaucaWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int GlaucaWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: createWindowRequest((*reinterpret_cast< QWebPage::WebWindowType(*)>(_a[1]))); break;
        case 2: viewPageSource(); break;
        case 3: addSelectedToWiki(); break;
        case 4: addPageToWiki(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GlaucaWebView::searchRequest(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlaucaWebView::createWindowRequest(QWebPage::WebWindowType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
