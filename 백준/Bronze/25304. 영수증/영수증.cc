#include <iostream>

using namespace std;

int main(){
    int X, N;
    int c = 0;
    cin >> X;
    cin >> N;
    
    for (int i = 0; i < N; i ++){
        int a, b;

        cin >> a >> b;
        c = a * b + c;
        
    }
    if (c == X){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}