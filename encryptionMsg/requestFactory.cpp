#include "requestFactory.h"

RequestFactory::RequestFactory(std::string encstr) :CodecFactory()
{
	this->m_encstr = encstr;
	this->m_flag = false;
}

RequestFactory::RequestFactory(RequestInfo* info) :CodecFactory()
{
	this->m_msg = info;
	this->m_flag = true;
}

Codec* RequestFactory::createCodec()
{
	Codec* c = NULL;
	if (this->m_flag == true)
		c = new RequestCodec(this->m_msg);
	else
		c = new RequestCodec(this->m_encstr);
	return c;
}

RequestFactory::~RequestFactory()
{
}
