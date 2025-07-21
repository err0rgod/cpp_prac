#include <iostream>

using namespace std;


template <typename T> T maxi(T a,T b);

template <typename T> T maxi(T a,T b){
    return (a>b)? a : b;
   }

int main(){

   int num;

   int a = 10, b = 12;
   cout << maxi(a,b) << endl;
   
   
} 