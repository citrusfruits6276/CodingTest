#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    
    int prise = n * 12000 + k * 2000;
    prise -= n / 10 * 2000;
    return prise;
}