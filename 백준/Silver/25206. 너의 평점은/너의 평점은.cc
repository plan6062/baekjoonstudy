#include <iostream>

using namespace std;

int main(){
    string subject, rank;
    double num, result, avg = 0;
    double count = 0;;
    for(int i = 0; i<20; i++){
        double point = 0;
        cin >> subject >> num >> rank;
        if(rank == "A+"){
            point = 4.5;
        }else if(rank == "A0"){
            point = 4.0;
        }else if(rank == "B+"){
            point = 3.5;
        }else if(rank == "B0"){
            point = 3.0;
        }else if(rank == "C+"){
            point = 2.5;
        }else if(rank == "C0"){
            point = 2.0;
        }else if(rank == "D+"){
            point = 1.5;
        }else if(rank == "D0"){
            point = 1.0;
        }else if(rank == "F"){
            point = 0.0;
        }else if(rank == "P"){
            point = 0.0;
            count = count - num;
        }
        count += num;
        avg += num * point;
    }
    result = avg/count;
    cout << result;
    return 0;
}