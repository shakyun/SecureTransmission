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
	RequestCodec(int cmd, string clientID, string serverID, string sign, string data);
	void initMessage(string encstr);
	void initMessage(int cmd, string clientID, string serverID, string sign, string data);
	string encodeMsg();
	void* decodeMsg();
	~RequestCodec();
};
