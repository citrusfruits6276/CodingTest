#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    string answer = "";
    for(char c : my_string){
        if(find(vowels.begin(), vowels.end(), c) == vowels.end()){
            answer += c;
        }
        
    }
    return answer;
}