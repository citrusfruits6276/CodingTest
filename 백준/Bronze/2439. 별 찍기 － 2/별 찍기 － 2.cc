#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for (int t = 0; t < N - i; t++){
            cout << " ";
        }
        for (int t = 0; t < i; t++){
            cout << "*";
        }
        cout << '\n';
    }
    
    return 0;
}