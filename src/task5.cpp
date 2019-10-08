#include <iostream>
#include <cstring>
using namespace std;

void split(char ***result, int *N, char *buf, char ch){
	int buf_len = strlen(buf);
	int i = 0;

	for (int i = 0; i < buf_len; i++) {
		if (buf[i] == ch) {
			(*N)++;
		}
	}

	(*N)++; //Получаем количество отдельных слов
	*result = new char*[*N]; //Выделяем память под N слов (массив из N указателей) 
	char *word = new char[buf_len]; //Выделяем память под отдельное слово

	int j = 0;
	int k = 0;

	for (int i = 0; i < buf_len + 1; i++){
		if ((buf[i] != ch) && (buf[i] != '\0')){
			word[j] = buf[i]; //Кладем слово побуквенно, пока не попадем либо на пробел, либо на конец строки
			j++;
		}
		if ((buf[i] == ch) || (buf[i] == '\0')){
			word[j] = '\0'; //Кладем в конец слова символ конца строки
			*(*result + k) = word; //Кладем в массив указателей указатель на данное слово
			k++; //И увеличивем счетчик слов на 1
			j = 0; //обнуляем индекс буквы слова
			word = new char[buf_len]; //выделяем память под новое слово
		}

	}
	
}