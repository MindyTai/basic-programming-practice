#include<iostream>
#include<cstdlib>
using namespace std;
int main(void) {
    int i,j,k;

    cout << "enter the number:" << '\n';
    cin >> k;

    int counter = k-1;

    for(i=0 ; i<k ; i++) {
        for(j= counter; j<k ; j++) {
            cout << "*";
        }
        cout << '\n';
        counter--;
    }
}
