#include <iostream>
#include <cmath>
#include "md5.h"
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

int main()
{
	string passwd;
	cin >> passwd;
	cout << encrypt(passwd);
}
