#include <iostream>

using namespace std;

int main(){
    int A;
    int t = 0;
    cin >> A;
    
    for(int i=0;i<=A;i++){
    t = i + t;
    }
    cout << t;
    
    return 0;
}