#include <cstdlib>
#include<iostream>

using namespace std;
//print out left-top square
int main(void) {
    /* code */
    int i = 0;
    int j;
    int k;
    int counter = 0;
    cout << "enter the number:" << endl;
    cin >> k ;
    for(j=0;j<k;j++){
        for(i=counter;i<k;i++){
            cout << "*";
        }
        cout <<'\n';
        counter++;
     }

    return 0;
}

//int main(void) {
    //int i,j,k;

    //cout << "enter the number:" << '\n';
    //cin >> k;
    //int counter = k;

    //for(i=0 ; i < k ; i++) {
        //for(j= counter ; j > 0 ; j--) {
        //    cout << "*";
        //}
        //cout << '\n';
        //counter--;
    //}
//}
