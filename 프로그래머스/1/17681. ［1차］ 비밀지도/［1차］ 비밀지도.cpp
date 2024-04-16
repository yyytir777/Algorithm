#include <iostream>
#include <string>
#include <vector>

using namespace std;

string dTob(int num, int length){
    string temp = "";
    while(num) {
        if(num % 2 == 0) temp = '0' + temp;
        else {
            temp = '1' + temp;
            num -= 1;
        }
        num /= 2;
    }
    if(temp.length() < length) {
        while(temp.length() != length) {
            temp = '0' + temp ;
            
        }
    }
    return temp;
}


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < n; i++) {
        string arr1_to_b = dTob(arr1[i], n);
        string arr2_to_b = dTob(arr2[i], n);
        
        string tmp = "";
        for(int j = 0; j < n; j++) {
            if(arr1_to_b[j] == '1' || arr2_to_b[j] == '1') tmp += '#';
            else tmp += ' ';
        }
        answer.push_back(tmp);
    }

    return answer;
}