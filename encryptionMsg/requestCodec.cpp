#include "requestCodec.h"

RequestCodec::RequestCodec()
{

}

RequestCodec::RequestCodec(string encstr)
{
	this->initMessage(encstr);
}

RequestCodec::RequestCodec(RequestInfo* info)
{
	this->initMessage(info);
}

void RequestCodec::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void RequestCodec::initMessage(RequestInfo* info)
{
	this->m_msg.set_cmdtype(info->cmdtype);
	this->m_msg.set_clientid(info->clientid);
	this->m_msg.set_serverid(info->serverid);
	this->m_msg.set_sign(info->sign);
	this->m_msg.set_data(info->data);
}

string RequestCodec::encodeMsg()
{
	string output;
	m_msg.SerializeToString(&output);
	return output;
}

void* RequestCodec::decodeMsg()
{
	m_msg.ParseFromString(m_encStr);
	return &m_msg;
}

RequestCodec::~RequestCodec()
{
}
