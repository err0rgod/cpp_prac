#include <iostream>
#include "link.h"
using namespace std;

int inc_mul(int a, int b){
    return((a++) * (++b))
}

int main(){

    cout << inc_mul(12,90)<<endl;

    int maxi = max(2,3);

    cout<<maxi<<endl;


}