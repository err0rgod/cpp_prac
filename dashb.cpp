#include <iostream>
using namespace std;

struct studentdata{
    char name[];
    int roll[];
    float sub1[];
    float sub2[];
    float sub3[];

}

int main(){
    struct studentdata s1;

    cout<<"Enter Your Option" << endl;
    cout << "Option 1 fetch all students name" << endl;
    
    char name1 = 'error';

    s1.name[0] = name1;
    s1.roll[0] = 1;
    s1.sub1[0] = 12.2;




}