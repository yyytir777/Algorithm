#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 지워진 블록
bool blanked[30][30] = {false,};
vector<pair<int, int>> point;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    
    while(1) {
         // 순회하여 지울 블록 선택 & 지울 영역을 표시하고  & blanked에 마커 (만약 지울 블록이 없으면 end = true)
        for(int i = 0; i < m - 1; i++) {
            for(int j = 0; j < n - 1; j++) {
                if(board[i][j] != '0' && 
                   board[i][j] == board[i][j+1] &&  
                   board[i][j+1] == board[i+1][j+1] && 
                   board[i+1][j] == board[i+1][j+1]) {
                    
                    point.push_back(make_pair(i,j));
                }
            }
        }
        
        int cnt = 0;
        for(auto pair : point) {
            int x = pair.first;
            int y = pair.second;
            
            if(board[x][y] != '0') cnt++;
            if(board[x+1][y] != '0') cnt++;
            if(board[x][y+1] != '0') cnt++;
            if(board[x+1][y+1] != '0') cnt++;
            
            board[x][y] = '0';
            board[x+1][y] = '0';
            board[x][y+1] = '0';
            board[x+1][y+1] = '0';
        }
        point.clear();
        if(!cnt) break;
        else answer += cnt;
        
        
        // 블록 아래로 내리기
        for(int i = m - 2; i >= 0; i--) {
           for(int j = 0; j < n; j++) {
               int temp_i = i;
               int temp_j = j;
               while(temp_i < (m - 1) && 
                     board[temp_i][temp_j] != '0' &&
                     board[temp_i + 1][temp_j] == '0'
                     ) {
                   
                   board[temp_i + 1][temp_j] = board[temp_i][temp_j];
                   board[temp_i][temp_j] = '0';
                   temp_i += 1;
               }
           }
        }        
    }
    
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) {
    //         if(board[i][j] == '0') answer++;
    //     }
    // }
    
    return answer;
}