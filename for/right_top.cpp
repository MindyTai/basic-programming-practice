#include<cstdlib>
#include<iostream>
using namespace std;
int main(void){
    int i,j,k,l;
    int counter=0;

    cout << "enter the number:" << '\n';
    cin >> k;

    int icounter=k-1;
    
    for(i=0;i<k;i++){
        for(l=icounter;l<k-1;l++){
            cout << " " ;
        }
        icounter--;

        for(j=counter;j<k;j++){

            cout << "*" ;
        }
        cout <<'\n';
        counter++;

    }
    return 0;
}
