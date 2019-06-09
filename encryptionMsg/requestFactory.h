#pragma once
#include <iostream>
#include "codecFactory.h"
#include "codec.h"
#include "requestCodec.h"
#include "RequestMsg.pb.h"

class RequestFactory : public CodecFactory
{
public:
	RequestFactory(std::string encstr);
	RequestFactory(RequestInfo* info);
	Codec* createCodec();
	~RequestFactory();
private:
	bool m_flag;
	std::string m_encstr;
	RequestInfo* m_msg;
};