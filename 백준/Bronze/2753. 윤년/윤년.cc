#include <iostream>

using namespace std;

int main(){
    int years;
    
    cin >> years;
    
    if (years % 4 == 0){
        if(years % 400 == 0){
            cout << 1;
        }
        else if(years % 100 != 0){
            cout << 1;
        }
        else cout << 0;
    }
    else {
        cout << 0;}
    
    return 0;
}