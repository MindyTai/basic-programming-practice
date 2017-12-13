#include<cstdlib>
#include<iostream>

using namespace std;
int gcd(int x,int y);

int main(void){
    int i,j;
    while (1) {
        std::cout << "enter the nums:" << '\n';
        std::cin >> i>>j;
        int res = gcd( i , j );
        std::cout << res << '\n';
    }

    return 0;
}

int gcd( int x,int y ){
    if(x % y == 0){
        return y;
    }else if(y % x == 0){
        return x;
    }else if(x > y && x % y != 0){
        int z = x%y;
        return gcd(z,y);
    }else if(x < y && x % y != 0){
        int t = y % x;
        return gcd( x , t );
    }

}

// sol2
/*
#include<cstdlib>
#include<iostream>

using namespace std;
int gcd(int x,int y);

int main( void ){
    int i,j,res;

    for(;;){
    std::cout << "Enter the nums:" << '\n';
    std::cin >> i>> j;
    if( i > j ){
        res = gcd(i,j);
    }else{
        res = gcd(j,i);
    }
    std::cout << "GCD:" << res <<endl;
    }

    return 0;
}

int gcd(int x,int y){
    if(x%y == 0){
        return y;
    }else{
        return gcd(y , x%y);
    }
}
*/
