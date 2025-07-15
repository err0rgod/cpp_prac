#include <iostream>

using namespace std;


int main(){

    int x , y;

    cin >> x;
    cin >> y;

    auto f = [](int a, int b){
        std::cout << "lAMBda function working" << std::endl;
        cout << a/b << endl;

    };
    cout << sizeof(f) << endl;


    f(x,y);





} 