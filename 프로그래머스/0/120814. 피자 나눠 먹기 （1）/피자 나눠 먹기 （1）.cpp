#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n%7 !=0){
        answer++;
    }
    answer += n/7;
    return answer;
}