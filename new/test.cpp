#include <iostream>
using namespace std;


void print() {
    cout << "Hello, World!" << endl;
}

int *add(int *a,int *b){
    int *c = new int; // Allocate memory for the result

    *c = *a + *b;
    return c;

}

int main(){
    int a=3 , b=4;

    int *c = add(&a, &b);
    print();
    cout << "The sum of " << a << " and " << b << " is: " << *c << endl;
    delete c; // Free the allocated memory
}




