#pragma once
#include <iostream>
#include "codecFactory.h"
#include "codec.h"
#include "respondCodec.h"
#include "RespondMsg.pb.h"

class RespondFactory : public CodecFactory
{
public:
	RespondFactory(std::string encstr);
	RespondFactory(RespondInfo* info);
	Codec* createCodec();
	~RespondFactory();
private:
	bool m_flag;
	std::string m_encstr;
	RespondInfo* m_msg;
};