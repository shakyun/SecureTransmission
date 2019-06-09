#include <iostream>
#include <string>
#include "codec.h"
#include "requestCodec.h"
#include "codecFactory.h"
#include "requestFactory.h"
#include "respondFactory.h"

using namespace std;

int main()
{
	cout << "hi" << endl;
	//序列化数据
	RequestInfo info{ 1, "clientid", "serverid", "sign", "data" };
	CodecFactory* codecF = new RequestFactory(&info);
	Codec* codec = codecF->createCodec();
	string str = codec->encodeMsg();
	cout << "序列化数据:" << str << endl;
	delete codec;
	delete codecF;
	cout << "----------------------------------" << endl;
	//反序列化数据
	codecF = new RequestFactory(str);
	codec = codecF->createCodec();
	RequestMsg* r1 = (RequestMsg*)codec->decodeMsg();
	cout << "cmdType:" << r1->cmdtype()
		<< "  clientid:" << r1->clientid()
		<< "  server:" << r1->serverid()
		<< "  sign:" << r1->sign()
		<< "  data:" << r1->data() << endl;
	delete codec;
	delete codecF;

	cout << "==================================" << endl;

	//序列化数据
	RespondInfo resinfo{ 1, 999, "luffy", "zoro", "change world 666 !" };
	codecF = new RespondFactory(&resinfo);
	codec = codecF->createCodec();
	str = codec->encodeMsg();
	cout << "序列化数据:" << str << endl;
	delete codec;
	delete codecF;
	cout << "----------------------------------" << endl;
	//反序列化数据
	codecF = new RespondFactory(str);
	codec = codecF->createCodec();
	RespondMsg* r2 = (RespondMsg*)codec->decodeMsg();
	cout << "rv:" << r2->rv()
		<< "  seckeyId:" << r2->seckeyid()
		<< "  clientId:" << r2->clientid()
		<< "  serverId:" << r2->serverid()
		<< "  data:" << r2->data() << endl;
	delete codec;
	delete codecF;
	cout << "==================================" << endl;
	system("pause");
	return 0;
}