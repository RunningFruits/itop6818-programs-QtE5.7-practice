#ifndef MY_JSON_UTIL_H
#define MY_JSON_UTIL_H

#include <QByteArray>
#include <QJsonObject>
#include <QString>
#include <QStringList>
#include <QJsonDocument>
#include <QDebug>

class JsonUtil
{
public:
    explicit JsonUtil();
    ~JsonUtil();

public:
    QByteArray getJsonByteArray(QJsonObject obj);
    QString getJsonString(QJsonObject obj);
    QString getValueFromJson(QByteArray& byteArray, QStringList& ls);

    QJsonObject stringToJson(QString jsonString);
    QString jsonToString(QJsonObject jsonObject);

};

#endif // MY_JSON_UTIL_H
