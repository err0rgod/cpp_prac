#include <iostream>

using namespace std;


int main(){

    int x , y;

    cin >> x;
    cin >> y;

    auto f = [](int a, int b)-> int{
       
        cout << a/b << endl;
        return a/b;

    };
    cout << sizeof(f) << " : " << f(12,2) << endl;


    f(x,y);





} 