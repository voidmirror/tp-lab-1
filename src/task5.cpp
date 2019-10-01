#include "task5.h"
#include <cstring>
#include <iostream>

void split(char*** result, int* N, char* buf, char ch) {
	int count = 0;
	int len = strlen(buf);
	for (int i = 0; i < len; i++) {
		if (buf[i] == ch) {
			count++;
		}
	}
	//std::cout << count << "\n";
	char** arr = new char*[count++];
	char new_str[] = "\0";

	int pos = 0;
	int start_pos = 0;
	int end_pos = 0;
	for (int i = 0; i <= len; ++i) {
		if ((buf[i] == ch) || (buf[i] == '\0') ) {
			char* str = new char[end_pos - start_pos + 1];
			for (int j = 0; j <= end_pos - start_pos; j++) {
				str[j] = buf[start_pos + j];
			}
			str[end_pos - start_pos] = '\0';
			arr[pos] = str;
			start_pos = end_pos+=1;
			pos++;
		}
		else
		{
			end_pos++;
			
		}
	}
	result[0] = &arr[0];
	*N = count;
	return;
}