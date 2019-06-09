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
	RespondCodec(int status, int seckeyID, string clientID, string serverID, string data);
	void initMessage(string encstr);
	void initMessage(int status, int seckeyID, string clientID, string serverID, string data);
	string encodeMsg();
	void* decodeMsg();
	~RespondCodec();
};