#include <iostream>
#include <cmath>
#include "md5.h"
#include <fstream>
using namespace std;

string encrypt(string src)
{
	Md5Encode encode_obj;
	string ret = encode_obj.Encode(src);
	//cout << "info: " << src.c_str() << endl;
	//cout << "md5: " << ret.c_str() << endl;
	char result[33];
	strcpy_s(result, ret.c_str());
	return result;
}

int main(int argc, char* argv[])
{
	//string passwd;
	//cin >> passwd;
	//cout << encrypt(passwd);

	fstream file("cache", ios::out | ios::trunc);
	if (argc == 1)
	{
		file << "$";
		return 0;
	}
	string passwd = argv[1];
	string md5 = encrypt(passwd);
	file << md5;
	return 0;
}
