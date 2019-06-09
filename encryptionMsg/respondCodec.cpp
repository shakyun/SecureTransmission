#include "respondCodec.h"

RespondCodec::RespondCodec()
{

}

RespondCodec::RespondCodec(string encstr)
{

}

RespondCodec::RespondCodec(int status, int seckeyID, string clientID, string serverID, string data)
{

}


void RespondCodec::initMessage(string encstr)
{
}

void RespondCodec::initMessage(int status, int seckeyID, string clientID, string serverID, string data)
{
}

string RespondCodec::encodeMsg()
{
	return string();
}

void* RespondCodec::decodeMsg()
{
	return nullptr;
}

RespondCodec::~RespondCodec()
{
}
