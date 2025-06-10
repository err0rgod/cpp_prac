#include <iostream>
using namespace std;
#include <string>


int main(){
    string m = "err0r god";

    char c[] = "err0r god";

    char *c1 = c;
    c1[1] = 'E'; // Changing the first character of the character array

    cout << "String: " << m << endl;
    cout << "Character Array: " << c1 << endl;
}