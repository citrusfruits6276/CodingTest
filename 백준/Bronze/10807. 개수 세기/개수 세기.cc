#include <iostream>

using namespace std;

int main(){
    int n, m, s, j;
    j = 0;
    cin >> n;
    int t[n];
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    cin >> s;
    for(int i=0;i<n;i++){
        if(t[i] == s){
            j++;
        }
    }
    cout << j;
    
    return 0;
    
}