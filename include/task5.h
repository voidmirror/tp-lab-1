#pragma once
#include <iostream> // библиотека, для ввода в консоль 
#include <math.h> // библиотека отвечающая за математические операции 
#include <ctime> // для корректной работы функций srand & rand
#include <cstring> // строковый тип 
using namespace std; // "Пространство имен", чтобы не использовать это перед cout & endl каждый раз, например 

/* Прототипы функций */

void split(char*** result, int* N, char* buf, char ch);