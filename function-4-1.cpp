#include <iostream>
using namespace std;

int sum_left_right(int **vals,int num_rows, int num_cols){
    int res = 0;
    for (int i = 0; i < num_rows; i++){
        for (int j = 0; j < num_cols; j++){
            if (j == 0 || j == num_cols-1){
                res += vals[i][j];
            }
        }
    }
    return res;
}
