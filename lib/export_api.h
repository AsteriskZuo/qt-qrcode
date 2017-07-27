
#ifndef EXPORT_API_H
#define EXPORT_API_H

#ifdef QT_QRCODE_LIB
#define QT_QRCODE_API Q_DECL_EXPORT
#else
#define QT_QRCODE_API Q_DECL_IMPORT
#endif

#endif //EXPORT_API_H