#include <bits/stdc++.h>
using namespace std;

bool checkAllSmall(string word){
    for(int i=0 ; i<word.size() ; i++){
        if(isupper(word[i]))
            return false;
    }
    return true;
}

bool checkAllCapital(string word){
    for(int i=0 ; i<word.size() ; i++){
        if(islower(word[i]))
            return false;
    }
    return true;
}

bool checkStandard(string &word){
    if(islower(word[0]))
        return false;
    if(isupper(word[0])){
        for(int i=1 ; i<word.size() ; i++){
            if(isupper(word[i]))
                return false;
        }
    }
    return true;
}
    
bool detectCapitalUse(string word) {

    if(checkAllCapital(word)){
        return true;
    }
    else if(checkStandard(word)){
        return true;
    }
    else if(checkAllSmall(word)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string word;
    cin >> word;

    if(detectCapitalUse(word))
        cout << "true" << endl;
    else   
        cout << "false" << endl;
}