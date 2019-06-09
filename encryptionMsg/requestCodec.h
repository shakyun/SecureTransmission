#pragma once
#include <string>
#include "codec.h"
#include "RequestMsg.pb.h"
#include "RespondMsg.pb.h"
class RequestCodec : public Codec
{
public:
	string m_encStr;
	RequestMsg m_msg;
	RequestCodec();
	RequestCodec(string encstr);
	RequestCodec(RequestMsg* info);
	void initMessage(string encstr);
	void initMessage(RequestMsg* info);
	string encodeMsg();
	void* decodeMsg();
	~RequestCodec();
};
