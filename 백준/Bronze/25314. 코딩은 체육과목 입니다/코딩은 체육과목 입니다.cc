#include <iostream>

using namespace std;

int main(){
    
    int N;
    string S;
    cin >> N;
    
    for (int i = 1; i <= N; i = i+4){
        S += "long ";
    }
    cout << S << "int";
    
    return 0;
}