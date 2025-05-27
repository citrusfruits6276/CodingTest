#include <iostream>

using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    
    if(A != B && A !=C && B != C){
        int max;
        if (A>B){
            if (A>C){
                 max = A;
            }
            else{
                 max = C;
            }
        }
        else{
            if (B>C){
                 max = B;
            }
            else{
                 max = C;
            }
        }
        cout << max * 100;
    
    }
    else{
        if(A==B&&B==C){
            cout << 10000 + A*1000;
        }
        else{
            if (A==B || A==C){
                cout << 1000 + A*100;
            }
            else{
                cout << 1000 + B*100;
            }
        }
    }
    return 0;
}