#include <iostream>
#include "function-3-1.cpp"
using namespace std;

extern int negative_count(int *vals,int len);
extern int* extract_negatives(int *vals,int len, int num_negative);

int main(){
    int arr[] = {-5, -3, -1, 0, 1, 2, 3, -6};
    int len = 8;
    
    cout << "number of negative integers in the given array are(calling negative_count first time):" << negative_count(arr, len) << endl;
    cout << "number of negative integers in the given array are(calling negative_count second time):" << negative_count(arr, len) << endl;
    
    int num_negative = negative_count(arr,len);
    int *a = extract_negatives(arr, len, num_negative);
    
    cout << "the array consisting of only negative values is: " << endl;
    
    for (int i = 0; i < num_negative; i++){
        cout << *(a+i) << "";
    }
    cout << "\n\n";
    return 0;
}
