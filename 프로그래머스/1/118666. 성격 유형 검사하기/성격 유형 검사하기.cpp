#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<pair<char, int>> types; 
char element[8] = {'R', 'T', 'F', 'C', 'M', 'J', 'A', 'N'};

int findIndex(char letter) {
    int index;
    for(int i = 0; i < 8; i++) {
        if(element[i] == letter) index = i;
    }
    return index;
}

string solution(vector<string> survey, vector<int> choices) {
    
    for(int i = 0; i < 8; i++) {
        char vol = element[i];
        types.push_back(make_pair(vol, 0));
    }
    
    for(int i = 0; i < choices.size(); i++) {
        int weight = choices[i];
        
        // 비동의
        if(weight < 4) {
            int index = findIndex(survey[i][0]);
            types[index].second += 4 - weight;
        }
        // 동의
        else if(weight > 4) {
            int index = findIndex(survey[i][1]);
            types[index].second += weight - 4;
        }
    }
    
    string answer = "";
    for(int i = 0; i < 8; i+=2){
        if(types[i].second > types[i+1].second) {
            char letter = types[i].first;
            answer += letter;
        }
        else if(types[i].second < types[i+1].second) {
            char letter = types[i+1].first;
            answer += letter;
        }
        else {
            answer += types[i].first > types[i+1].first ? types[i+1].first : types[i].first;
        }
    }
    
    // for(auto asdf : types) {
    //     char axis = asdf.first;
    //     int score = asdf.second;
    //     cout << axis << " " << score << endl;
    // }
    
    return answer;
}