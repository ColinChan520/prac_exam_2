#include <iostream>
using namespace std;

int negative_count(int *vals,int len){
    int count = 0;
    for (int i = 0; i < len; i++){
        if (vals[i] < 0){
            count++;
        }
    }
    return count;
}

int* extract_negatives(int *vals,int len, int num_negative){
    int *negative = new int[num_negative];
    int j = 0;
    for (int i = 0; i < len; i++){
        if (vals[i] < 0){
            negative[j] = vals[i];
            j++;
        }
    }
    return negative;
}
