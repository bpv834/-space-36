#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<ctype.h>


	int cot(const char* s) {
		int count = 0;
		while (s[0] != '\0') {
			if (isspace(s[0]))
				count++;
				s++;
		}
		return count;
	}

	int main() {
		char str[64] = "this program/ttests const pointer to string.\n";

		puts(str);
		printf("공백 문자의 개수:%d", cot(str));
	
	}