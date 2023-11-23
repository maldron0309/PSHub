#include <string>
#include <vector>

using namespace std;

int num(int a, int b){
    
    if(a%b==0) return b;
    return num(b, a%b);
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    
    vector<int> answer;
    
    int a=num(num1, num2);
    int b=(denum1*num2+denum2*num1)/a;
    a=(num1*num2)/a;
    int c=num(a, b);
    
    a/=c;
    b/=c;
    
    if(a==b){
        answer.push_back(1);
        answer.push_back(1);   
    }
    
    else{
        answer.push_back(b);
        answer.push_back(a);
    }
    
    return answer;
}