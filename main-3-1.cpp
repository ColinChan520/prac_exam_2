#include <iostream>
#include "function-3-1.cpp"
using namespace std;

extern int negative_count(int *vals,int len);
extern int* extract_negatives(int *vals,int len, int num_negative);

int main(){
    int vals[] = {-2, -7, 5, 6, -8};
    int num_negative = negative_count(vals, 5);
    extract_negatives(vals, 5, num_negative);
    return 0;
}
