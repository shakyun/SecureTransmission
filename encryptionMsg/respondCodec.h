#pragma once
#include <string>
#include "codec.h"
#include "RequestMsg.pb.h"
#include "RespondMsg.pb.h"
class RespondCodec : public Codec
{
	string m_encStr;
	RespondMsg m_msg;
	RespondCodec();
	RespondCodec(string encstr);
	RespondCodec(RespondMsg *info);
	void initMessage(string encstr);
	void initMessage(RespondMsg* info);
	string encodeMsg();
	void* decodeMsg();
	~RespondCodec();
};