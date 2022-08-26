#include <iostream>
#include <string>
using namespace std;

string* create_int_strings(int num_vals){
    
    string* var = new string[num_vals];
    
    for (int i = 0; i < num_vals; i++){
        var[i] = to_string(i);
    }
    
    return var;
}

void display_str_array(string *vals, int num_vals){
    
    for (int j = 0; j < num_vals; j++){
        cout << vals[j] << " ";
    }
    cout << endl;
}

