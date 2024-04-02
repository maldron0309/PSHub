#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int hol = 0;
    int jak = 0;
    
    for (int i = 0; i < num_list.size(); i++){
        if (num_list[i] % 2 == 0){
            jak++;
        }
        else {
            hol++;
        }
    }
    answer.push_back(jak);
    answer.push_back(hol);
        
    return answer;
}