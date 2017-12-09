#include<iostream>
#include<cstdlib>

using namespace std;

/*int main(void){
    int i,j,k,l;
    int counter = 0;

    std::cout << "Enter a num:" << '\n';
    std::cin >> k;

    int lcounter = k;

    for( i=0;i<k;i++){
        //space
        for(j=counter;j<k-1;j++){
            std::cout << " " ;
        }
        counter++;
        // *
        for( l=lcounter;l>k-1;l--){
            std::cout << "*" ;
        }
        lcounter++;

        std::cout << '\n';
    }
    return 0;
}
*/

int main(void){
    int input;
    std::cout << "enter the num:" << '\n';
    std::cin >> input;
    for(int i=0;i<input;i++){
        //space
        //for(int j = i; j < input-1 ; j++){
        for(int j = 0 ; j < input - i - 1 ; j++) {
            std::cout << " " ;
        }
        //star
        //for(int l = input ; l < input+i+1  ;l++ ){
        for(int l = 0 ; l < i + 1 ; l++) {
            std::cout << "*" ;
        }
        std::cout <<'\n';
    }
    return 0;
}
