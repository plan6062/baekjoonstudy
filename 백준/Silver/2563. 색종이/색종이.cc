#include <iostream>

using namespace std;

int main(){
    int num, row, col, count = 0;
    cin >> num;

    int paper[100][100] = {};
    for(int i = 0; i < num; i++){
        cin >> row >> col;
        for(int j = row; j < row+10; j++){
            for(int k =col; k < col+10; k++){
                paper[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(paper[i][j] == 1){
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}