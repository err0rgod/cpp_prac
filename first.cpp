#include <iostream>

using namespace std;


int main(){

    auto f = [](int a, int b){
        std::cout << "lAMBda function working" << std::endl;
        cout << a/b << endl;

    };

    f(10,2);





} 