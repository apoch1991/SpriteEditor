#ifndef PREVIEW_H
#define PREVIEW_H

#include <QObject>

class Preview : public QObject
{
    Q_OBJECT
public:
    explicit Preview(QObject *parent = nullptr);

signals:

};

#endif // PREVIEW_H
