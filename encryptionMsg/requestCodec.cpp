#include "requestCodec.h"

RequestCodec::RequestCodec()
{

}

RequestCodec::RequestCodec(string encstr)
{
}

RequestCodec::RequestCodec(int cmd, string clientID, string serverID, string sign, string data)
{
}

void RequestCodec::initMessage(string encstr)
{
}

void RequestCodec::initMessage(int cmd, string clientID, string serverID, string sign, string data)
{
}

string RequestCodec::encodeMsg()
{
	return string();
}

void* RequestCodec::decodeMsg()
{
	return nullptr;
}

RequestCodec::~RequestCodec()
{
}
