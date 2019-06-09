#include "respondCodec.h"

RespondCodec::RespondCodec()
{

}

RespondCodec::RespondCodec(string encstr)
{
	this->initMessage(encstr);
}

RespondCodec::RespondCodec(RespondMsg* info)
{
	this->initMessage(info);
}


void RespondCodec::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void RespondCodec::initMessage(RespondMsg* info)
{
	this->m_msg.set_rv(info->rv);
	this->m_msg.set_seckeyid(info->seckeyid);
	this->m_msg.set_clientid(info->clientid);
	this->m_msg.set_serverid(info->serverid);
	this->m_msg.set_data(info->data);
}

string RespondCodec::encodeMsg()
{
	string ouput;
	m_msg.SerializeToString(&ouput);
	return ouput;
}

void* RespondCodec::decodeMsg()
{
	m_msg.ParseFromString(m_encStr);
	return &m_msg;
}

RespondCodec::~RespondCodec()
{
}
