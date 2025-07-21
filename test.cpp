#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char s;
    int a, b, c;
    ss >> a >> s >> b >> s >> c;
    vector<int> result;

    result.push_back(a);
    result.push_back(b);
    result.push_back(c);
    return result;


int main(){
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (size_t i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}