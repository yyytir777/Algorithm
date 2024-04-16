#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
    vector<int> v;
    
    string temp = "";
    for(int i = 0; i < dartResult.length(); i++){
        
        // 점수일 때
        if(dartResult[i] >= '0' && dartResult[i] <= '9') {
            temp += dartResult[i];
        }
        
            
        // 보너스일 때
        else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            int num = stoi(temp);
            
            if(dartResult[i] == 'S') v.push_back(num);
            else if(dartResult[i] == 'D') v.push_back(num * num);
            else if(dartResult[i] == 'T') v.push_back(num * num * num);
            temp = "";
        }
            
        // 옵션일 때
        else {
            if(dartResult[i] == '*') {
                if(v.size() == 1){
                    v[v.size() - 1] *= 2;
                }
                else {
                    v[v.size() - 1] *= 2;
                    v[v.size() - 2] *= 2;
                }
            }
            else if(dartResult[i] == '#')
                v[v.size() - 1] *= -1;
        }
    }
    
    int answer = 0;
    for(auto n : v) answer += n;
    
    return answer;
}