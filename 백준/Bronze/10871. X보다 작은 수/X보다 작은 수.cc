#include <iostream>

using namespace std;

int main(){
    int X, n;
    int a;
    cin >> X >> n;
    for(int i = 0; i < X; i++){
        cin >> a;
        if(a < n){
            cout << a << " ";
        }
    }
    return 0;
}