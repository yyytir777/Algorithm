#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



string solution(int n, int t, int m, vector<string> timetable) {
    string answer = "";
    vector<int> timeline;
    
    // timeline에 기록
    for(string t : timetable) {
        string h_string = to_string(t[0] - 48) + to_string(t[1] - 48);
        string m_string = to_string(t[3] - 48) + to_string(t[4] - 48);
        
        int h = stoi(h_string);
        int m = stoi(m_string);
        
        timeline.push_back(60 * h + m);
    }
    
    sort(timeline.begin(), timeline.end());
    int temp;
    int first_time = 60 * 9;
    int idx = 0;
    for(int i = 0; i < n; i++) {
        int taken = 0;
        for(int j = idx; j < timeline.size(); j++) {
            if(timeline[j] > first_time) break;
            if(timeline[j] <= first_time) {
                taken += 1;
                idx += 1;
                if(taken == m) break;
            }
        }
        
        //마지막 버스 -> 꼭 태워야 함 -> 한 자리를 남겨놓기?
        if(i == (n-1)) {
            if (taken == m) temp = timeline[idx-1] - 1;
            else temp = first_time;
        }
        
        first_time += t;
    }
    
    string answer_h = to_string(temp / 60).length() == 1 ? "0" + to_string(temp / 60) : to_string(temp / 60);
    string answer_m = to_string(temp % 60).length() == 1 ? "0" + to_string(temp % 60): to_string(temp % 60);
    
    answer = answer_h + ":" + answer_m;
    return answer;
}