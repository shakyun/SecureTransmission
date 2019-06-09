#include "codec.h"

Codec::Codec()
{
}

Codec::~Codec()
{
}

string Codec::encodeMsg()
{
	return string();
}

void* Codec::decodeMsg()
{
	return nullptr;
}

Request::Request()
{
	this->m_msg.set_cmdtype(0);
	this->m_encStr = "";
	this->m_msg.set_clientid(NULL);
	this->m_msg.set_serverid(NULL);
	this->m_msg.set_sign(NULL);
	this->m_msg.set_data(NULL);
}

Request::Request(string encstr)
{
	this->m_encStr = encstr;
	this->m_msg.set_cmdtype(0);
	this->m_msg.set_clientid(NULL);
	this->m_msg.set_serverid(NULL);
	this->m_msg.set_sign(NULL);
	this->m_msg.set_data(NULL);
}

Request::Request(int cmd, string clientID, string serverID, string sign, string data)
{
	this->m_encStr = "";
	this->m_msg.set_cmdtype(cmd);
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(serverID);
	this->m_msg.set_sign(sign);
	this->m_msg.set_data(data);
}

void Request::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void Request::initMessage(int cmd, string clientID, string serverID, string sign, string data)
{
	this->m_msg.set_cmdtype(cmd);
	this->m_encStr = "";
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(serverID);
	this->m_msg.set_sign(sign);
	this->m_msg.set_data(data);
}

string Request::encodeMsg()
{
	return string();
}

void* Request::decodeMsg()
{
	return nullptr;
}

Request::~Request()
{
}

Response::Response()
{
	this->m_encStr = "";
	this->m_msg.set_rv(0);
	this->m_msg.set_seckeyid(0);
	this->m_msg.set_clientid(NULL);
	this->m_msg.set_serverid(NULL);
	this->m_msg.set_data(NULL);
}

Response::Response(string encstr)
{
	this->m_encStr = encstr;
	this->m_msg.set_rv(0);
	this->m_msg.set_seckeyid(0);
	this->m_msg.set_clientid(NULL);
	this->m_msg.set_serverid(NULL);
	this->m_msg.set_data(NULL);
}

Response::Response(int status, int seckeyID, string clientID, string serverID, string data)
{
	this->m_encStr = "";
	this->m_msg.set_rv(status);
	this->m_msg.set_seckeyid(seckeyID);
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(serverID);
	this->m_msg.set_data(data);
}

void Response::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void Response::initMessage(int status, int seckeyID, string clientID, string serverID, string data)
{
	this->m_encStr = "";
	this->m_msg.set_rv(status);
	this->m_msg.set_seckeyid(seckeyID);
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(serverID);
	this->m_msg.set_data(data);
}

string Response::encodeMsg()
{
	return string();
}

void* Response::decodeMsg()
{
	return nullptr;
}

Response::~Response()
{
}
