#include <iostream>
#include <string>
#include "function-1-1.cpp"
using namespace std;

extern string* create_int_strings(int num_vals);
extern void display_str_array(string *vals, int num_vals);

int main(){
    
    string* a;
    a = create_int_strings(3);
    display_str_array(a,3);
    return 0;
}
