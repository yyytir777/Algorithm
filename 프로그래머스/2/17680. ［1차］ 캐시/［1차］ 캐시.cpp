#include <iostream>
#include <string>
#include <vector>
#include <deque>

using namespace std;
deque<string> cache;

//0보다 크면 hit, 음수이면 miss
int hit(string city) {
    for(int i = 0; i < cache.size(); i++) {
        if(cache.at(i) == city) return i;
    }
    return -1;
}


//true이면 hit, false이면 miss
bool request_cache(int cacheSize, string city) {
    
    int idx = hit(city);
    if(cacheSize == 0) return false;
    
    // hit이면
    else if(idx >= 0) {
        string tmp = cache[idx];
        cache.erase(cache.begin() + idx);
        cache.push_back(tmp);
        return true;
    }
    // miss이면
    else if(idx == -1) {
        if(cacheSize == cache.size()) {
            cache.push_back(city);
            cache.pop_front();
        }
        else {
            cache.push_back(city);
        }
        return false;
    }
    
}

string lower(string tmp) {
    string result = "";
    for(int i = 0 ; i < tmp.length(); i++) {
        char letter = tolower(tmp[i]);
        result += letter;
    }
    return result;
}


int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    
    // 소문자 변경
    vector<string>::iterator iter;
    for(iter = cities.begin(); iter != cities.end(); iter++) {
        string before_city =  *iter;
        string after_city = lower(before_city);
        *iter = after_city;
    }
    
    
    for(string city : cities) {
        bool hit = request_cache(cacheSize, city);
        if(hit) {
            answer += 1;
        }

        else {
            answer += 5;
        }
    }

    return answer;
}