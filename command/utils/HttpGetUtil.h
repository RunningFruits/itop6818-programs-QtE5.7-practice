#ifndef MY_HTTPGETUTIL_H
#define MY_HTTPGETUTIL_H

#include <QObject>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QDebug>

class HttpGetUtil : public QObject
{
    Q_OBJECT
public:
    explicit HttpGetUtil(QObject *parent = 0);

signals:


public:
    void get(QString url) ;
public slots:
    void requestFinished(QNetworkReply* reply);

};

#endif // MY_HTTPGETUTIL_H
