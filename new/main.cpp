#include <iostream>
using namespace std;
#include <string>


void enter(int age){
    if(age > 18){
        cout << "welcome you are " << age << " years old andd allowed to enter in the bar" << endl;
    }
    else if (age == 0){
        cout << "BSDK pehle paida to hole" << endl;
    }
    else{
        cout << "get the fuck out of here you are not old enough just " << age << " years old" << endl;
    }
}


int main(){
    int age;
   // cout << "What is yout age" << endl;
    //cin >> age;

    for(size_t i; i < 60; i++){
        enter(i);
    }
    
}

