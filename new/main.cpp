#include <iostream>
using namespace std;
#include <string>




int add(int a, int b) {
    int c = a + b;
    return c;
}

int main(){
    int a =2;
    int b = 3;

    int c = add(a,b);
    cout << "The sum of " << a << " and " << b << " is: " << c << endl;
}