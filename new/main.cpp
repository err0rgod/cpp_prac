#include <iostream>
using namespace std;

void Inc(int &x) {
    x++;
}

int main() {
    int a = 5;
    Inc(a);

    cout << "Value of a after increment: " << a << endl;

    return 0;
}


