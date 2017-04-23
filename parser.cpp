#include "parser.h"
#include <QDebug>

Parser::Parser(QJsonDocument doc)
{
    json = doc.object();
}

Parser::Parser()
{

}

bool Parser::verifyId(quint64 id)
{
    return true;
    //return json["id"].toString().toULongLong() == id;


}

QString Parser::get(const QString &key)
{
    return json[key].toString();
}

ClientInfo Parser::getClientInfo()
{
    ClientInfo clInfo;
    QJsonObject infoObject = json["info"].toObject();
    clInfo.read(infoObject);
    return clInfo;

}

QJsonObject Parser::getJson()
{
    return json;
}

