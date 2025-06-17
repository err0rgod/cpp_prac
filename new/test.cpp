#include <iostream>
using namespace std;
#include <vector>


int main(){
     int n, q;
    cin >> n >> q;

    vector<vector<int>> arr(n);  // variable-sized arrays

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr[i] = vector<int>(k);  // allocate space for k elements
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];     // input elements
        }
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }

    return 0;
}