#include <iostream>

using namespace std;

int main(){
    int line, A, B;
    cin >> line;
    
    for(int i = 0; i < line; i++){
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}