#include <iostream>

using namespace std;


int main(){

    int x , y;

    cin >> x;
    cin >> y;

    auto f = [x,y](int a, int b)-> int{
       
        cout <<"by param : " << a/b << endl;
        cout <<  "by cl : "<<x/y << endl;
        return a/b;
        

    };
    cout << sizeof(f) << " : " << f(12,2) << endl;






} 