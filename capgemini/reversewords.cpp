#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hey how are you doing";
    vector<string> result ;
    istringstream ss(s);
    string word = "";
    vector<string> front_back;
    while (ss>>word)
    {
        front_back.push_back(word);
        reverse(word.begin(), word.end());
        result.push_back(word);
    }
    cout<<front_back[1]<<endl;

    // while (ss>>word)
    // {
    //     reverse(word.begin(), word.end());
    //     result.push_back(word);
    //     // break;
    // }
    // cout<<result<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }

    string substr1 = front_back[0] + " " + front_back.back();
    cout<<substr1;
    
    
    return 0;
}