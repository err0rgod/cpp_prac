#include <iostream>
using namespace std;
#include <string>


void print(){
    cout << "Hello, World!" << endl;
}

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main(){
    int a =2;
    int b = 3;


    int c = add(a,b);
    print();
    cout << "The sum of " << a << " and " << b << " is: " << c << endl;
}

