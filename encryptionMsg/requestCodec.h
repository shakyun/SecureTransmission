#pragma once
#include <iostream>
#include "codec.h"
#include "RequestMsg.pb.h"
using namespace std;
struct RequestInfo
{
	int cmdtype;
	string clientid;
	string serverid;
	string sign;
	string data;
};
class RequestCodec : public Codec
{
public:
	RequestCodec();
	RequestCodec(string encstr);
	RequestCodec(RequestInfo* info);
	void initMessage(string encstr);
	void initMessage(RequestInfo* info);
	string encodeMsg();
	void* decodeMsg();
	~RequestCodec();
private:
	string m_encStr;
	RequestMsg m_msg;
};
