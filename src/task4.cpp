#include <string.h>
#include <iostream>
#include <cstdlib>
using namespace std;

char * sum(char *x, char *y) {
	int len;
	char * ans;
	int len_x = strlen(x); //Сначала используем для сравнения
	int len_y = strlen(y);

	if (len_x > len_y) {
		len = len_x;
	}
	else {
		len = len_y;
	} 

	int ans_len = len + 1; //Длина массива символов с ответом

	ans = (char*)malloc((ans_len)*sizeof(char)); // Выделяем память под массив символов с ответом с одним дополнительным разрядом 

	int term_x = 0;
	int term_y = 0;
	int sum_xy = 0;
	for (int i = 0; i < (ans_len); i++) {
		term_x = 0; 
		term_y = 0;
		if (i < len_x) {
			term_x = (*(x + len_x - 1 - i) - '0');
		}
		if (i < len_y) {
			term_y = (*(y + len_y - 1 - i) - '0');
		}
		sum_xy = sum_xy + term_x + term_y;
		ans[ans_len - 1 - i] = sum_xy % 10 + '0'; //записываем в элемент массива последнюю цифру результа сложения
		sum_xy = sum_xy / 10; //переносим десяток в следующий разряд
	}
	ans[ans_len] = '\0'; // Добавляем символ окончания строки, чтобы не было мусора
	if (*ans == '0') {
		for (int i = 0; i <= ans_len; i++)
		{
			*(ans + i) = *(ans + i + 1);
		}
	}
		
	return ans;
}