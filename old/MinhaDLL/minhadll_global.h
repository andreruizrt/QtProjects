#ifndef MINHADLL_GLOBAL_H
#define MINHADLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MINHADLL_LIBRARY)
#  define MINHADLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MINHADLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MINHADLL_GLOBAL_H
