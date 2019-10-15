#pragma once
#include <iostream> // библиотека дл€ ввода в консоль 
#include <math.h> // библиотека, отвечающа€ за математические операции 
#include <ctime> // дл€ корректной работы функций srand & rand
#include <cstring> // строковый тип 
using namespace std; // "ѕространство имен", чтобы не использовать это перед cout & endl каждый раз, например 

/* ѕрототипы функций */

bool checkPrime(unsigned int value); // проверка числа на простоту.
unsigned long long nPrime(unsigned n); // нахождение n - ого простого числа(в р€ду).
unsigned long long nextPrime(unsigned long long value); // нахождение ближайшего следующего простого числа к value.