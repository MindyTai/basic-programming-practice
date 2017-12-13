#include<cstdlib>
#include<iostream>

using namespace std;
int inverse(int);
int getDigit(int);

int main(void){
    cout << "enter 2 num:" << '\n';
    int i,j;
    cin >> i;
    cin >> j;
    int num1 = inverse(i);
    int num2 = inverse(j);
    int sum = num1 + num2;

    std::cout << "sum:"<<sum << '\n';

    return 0;

}

int getDigit(int x) {

    int counter = 0;

    while(1) {

        //int a = x/10;
        //x = a;
        x = x/10;
        counter = counter + 1;

        if( x<10 ){
            //cout << counter+1 << '\n';
            return counter+1;
        }
    }
}

int inverse(int x){
    int xDigit = getDigit(x);
    int res = 0;
    for(int i=0 ; i<xDigit ; i++){
        int k;
        k = (x%10);
        x = (x/10);

        for(int j=i; j<xDigit-1; j++){
            k = k*10;

        }
        //cout << "K:" << k <<endl;
        res = k + res;

    }

    std::cout << "reversed:"<<res<<endl;

    return res;

}
