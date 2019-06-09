#include "respondFactory.h"

RespondFactory::RespondFactory(std::string encstr) :CodecFactory()
{
	this->m_encstr = encstr;
	this->m_flag = false;
}

RespondFactory::RespondFactory(RespondInfo* info) :CodecFactory()
{
	this->m_msg = info;
	this->m_flag = true;
}

Codec* RespondFactory::createCodec()
{
	Codec* c = NULL;
	if (this->m_flag == true)
		c = new RespondCodec(this->m_msg);
	else
		c = new RespondCodec(this->m_encstr);
	return c;
}

RespondFactory::~RespondFactory()
{
}