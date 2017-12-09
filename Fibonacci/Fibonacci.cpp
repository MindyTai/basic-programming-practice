#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){

    int input;
    cout << "enter the num:" << '\n';
    cin >> input;
    if(input == 0){
        cout << 0;
    }else if(input == 1){
        cout << 1;
    }else{
        int numA = 0;
        int numB = 1;
        int res = 0;

        for(int i = 0;i < input-1;i++){
            res = numA + numB;
            numA = numB;
            numB = res;
        }
        cout << res << endl;
    }
    return 0;
}
/*
input  numA   numB   res
0   -> x      x      dont care (0)
1   -> x      x      dont care (1)
2   -> 0      1      1
3   -> 1      1      2
4   -> 1      2      3
5   -> 2      3      5

F3 = F2 + F1
   = F1 + F0


Fn = F(n-1) + F(n-2)
F(n+1) = F(n) + F(n-1)
*/
