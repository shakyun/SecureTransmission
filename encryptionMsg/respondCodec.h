#pragma once
#include <iostream>
#include "codec.h"
#include "RespondMsg.pb.h"
using namespace std;
struct RespondInfo
{
	int rv;
	int seckeyId;
	string clientId;
	string serverId;
	string data;
};
class RespondCodec : public Codec
{
public:
	RespondCodec();
	RespondCodec(string encstr);
	RespondCodec(RespondInfo* info);
	void initMessage(string encstr);
	void initMessage(RespondInfo* info);
	string encodeMsg();
	void* decodeMsg();
	~RespondCodec();
private:
	string m_encStr;
	RespondMsg m_msg;
};