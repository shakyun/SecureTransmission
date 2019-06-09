#pragma once
#include <string>
#include "RequestMsg.pb.h"
#include "RespondMsg.pb.h"
using namespace std;
using namespace myRequest;
using namespace myRespond;

class Codec
{
public:
	Codec();
	virtual ~Codec();
	virtual string encodeMsg();
	virtual void* decodeMsg();
};
class Request: public Codec
{
public:
	string m_encStr;
	RequestMsg m_msg;
	Request();
	Request(string encstr);
	Request(int cmd, string clientID, string serverID, string sign, string data);
	void initMessage(string encstr);
	void initMessage(int cmd, string clientID, string serverID, string sign, string data);
	string encodeMsg();
	void* decodeMsg();
	~Request();
};
class Response: public Codec
{
	string m_encStr;
	RespondMsg m_msg;
	Response();
	Response(string encstr);
	Response(int status, int seckeyID, string clientID, string serverID, string data);
	void initMessage(string encstr);
	void initMessage(int status, int seckeyID, string clientID, string serverID, string data);
	string encodeMsg();
	void* decodeMsg();
	~Response();
};