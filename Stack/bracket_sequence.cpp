//Lessons learnt:
//Vector can be used as stack (remember vec.back())
//Bracket Sequence - use stack

#include<vector>
#include<iostream>
#include<string>

using namespace std;

int isrightbracket(char c){
    if(c=='}'||c==')'||c==']'){
        return 1;
    }
    else
        return 0;
}

char reversebracket(char c){
    char ret_c;
    switch(c) {
  case '}':
    ret_c= '{';
    break;
  case ']':
    ret_c ='[';
    break;
  case ')' :
    ret_c =  '(';
    break;
}
return ret_c;
}
void print_stack(vector<char> vec){
    for(auto it=vec.begin();it!=vec.end();++it){
        cout<<*it;
    }
}

int main()
{
    string s = "[[]()()()()()]";
    
    if(isrightbracket(s[0])){
        cout<<"Invalid";
        return 0;
    }
    
    vector<char> vec;
    for(int i = 0;i<s.length();i++){
        if(isrightbracket(s[i])==0){
            vec.push_back(s[i]);
        }
        else{
            if(reversebracket(s[i])==vec.back()){
                vec.pop_back();
            }
        }
    }
    
    if(vec.empty()){
        cout<<"Valid";
    }
    else
        cout<<"Invalid";
}