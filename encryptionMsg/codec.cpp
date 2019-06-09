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
void Response::initMessage(int status, int seckeyID, string clientID, string serverID, string data)
{
	this->m_encStr = "";
	this->m_msg.set_rv(status);
	this->m_msg.set_seckeyid(seckeyID);
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(serverID);
	this->m_msg.set_data(data);
}