//
// Created by fiskirton on 10/1/19.
//

unsigned long long sumPrime(unsigned int hbound){
    unsigned int array_size = hbound + 1;
    auto * array = new unsigned int[array_size];
    unsigned long long int sum_counter = 0;
    if (array_size > 0){
        array[1] = 0;
    }
    for (int k = 0; k < array_size; ++k) {
        array[k] = k;
    }
    for (int i = 2; i*i < array_size; ++i) {
        if (array[i] != 0) {
            for (unsigned int k = i * i; k < array_size; k += i) {
                array[k] = 0;
            }
        }
    }
    for (unsigned int j = 2; j < array_size; ++j) {
        if (array[j] != 0){
            sum_counter += array[j];
        }
    }

    return sum_counter;
}