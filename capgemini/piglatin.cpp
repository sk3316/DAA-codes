#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return(ch=='a'|| ch=='e'||ch=='i'||ch=='o'|| ch=='u');
}

string convertToPigLatin(string word)
{
    char firstChar = word[0];
    string pigLatinWord = word.substr(1) + firstChar;

    if(isVowel(firstChar))
    {
        pigLatinWord+="ay";
    } 
    else
    {
        pigLatinWord+="ed";
    }
    return pigLatinWord;
}
int main(){

    string sentence = "God is Great";
    istringstream ss(sentence);
    string word = "";
    string result = "";
    while (ss>>word)
    {
        // cout<<word<<endl;
        result+=convertToPigLatin(word) + " ";
    }
    if(!result.empty()){
        result.pop_back();
    }

    cout<<result<<endl;
    
    
    return 0;
}