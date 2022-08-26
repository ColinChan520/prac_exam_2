#include <iostream>
#include "function-2-1.cpp"
using namespace std;

extern string month_lookup(int day);

int main(){
    cout << month_lookup(3) << endl;
    cout << month_lookup(13) << endl;
    cout << month_lookup(-5) << endl;
    
    return 0;
}
