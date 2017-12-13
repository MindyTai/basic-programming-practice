#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(void){


    for(;;) {
        int input;


        cout << "enter the num:";
        cin >> input;

        // deal with 1 or 2
        if(input==1){
            cout << "this is not a prime." << '\n';
            continue;
        }else if(input==2){
            cout << "this is the first prime." << '\n';
            continue;
        }
        // other nums
        int res = (int)sqrt(input);
        //std::cout << res << '\n';

        int isPrime = 1;

        for(int i=2 ; i<=res; i++){
            if(input % i == 0){
                isPrime = 0;
                break;
            }
        }

        // prime or not
        if(isPrime){
            std::cout << "this is a prime." << '\n';
        }else {
            std::cout << "this is not a prime." << '\n';
        }

    }

    return 0;
}
