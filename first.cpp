#include <iostream>

using namespace std;


template <typename T> T max(T a,T b);

template <typename T> T max(T a,T b){
    return (a>b)? a : b;
   }

int main(){

   int a = 10, b = 12;
   cout << max(a,b) << endl;
   
   



} 