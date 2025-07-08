#include <iostream>
#include "link.h"
using namespace std;

int inc_mul(int a, int b){
    return((a++) * (++b));
}

int main(){

    int x,y;

    cin>>x;
    cin>>y;

    cout << inc_mul(x,y)<<endl;

    int maxi = max(x,y);

    cout<<maxi<<endl;


}