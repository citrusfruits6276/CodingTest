#include <iostream>

using namespace std;

int main(){
    int H, M, D;
    cin >> H >> M >> D;
    
    int min = H*60 + M + D;
    int hours = min/60%24;
    int mins = min%60;
    
    cout << hours << " " << mins;
    
}