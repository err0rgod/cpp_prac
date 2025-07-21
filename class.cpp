#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "123 45";

    int a, b;
    ss >> a >> b;

    cout << a << " " << b << endl;
}
