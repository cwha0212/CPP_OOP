/*
 * 파일이름:String.h
 * 작성자:하창완
 * 업데이트 정보:[2022.01.02] ver.09
 */

#ifndef __STRING_H__
#define __STRING_H__

#include "BankingCommonDecl.h"

class String{
	private:
		int len;
		char *str;
	public:
		String();
		String(const char* s);
		String(const String& s);
		~String();
		String& operator= (const String& s);
		String& operator+= (const String& s);
		bool operator== (const String& s);
		String operator+ (const String& s);

		friend ostream& operator<< (ostream& os, const String& s);
		friend ostream& operator>> (istream& is, String& s);
};
#endif
