// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int main() {
//     // // Example input array
//     // vector<int> arr = {1, 3, 2, 1, 4, 1, 3, 5, 2};

//     // // Create an unordered_map to store the frequency of each element
//     // unordered_map<int, int> freq;

//     // // Loop through the array and update the frequency of each element
//     // for (int i = 0; i < arr.size(); i++) {
//     //     freq[arr[i]]++;
//     // }

//     // // Output the frequency of each element
//     // cout << "Element frequencies:" << endl;
//     // for (auto it : freq) {
//     //     cout << "Element: " << it.first << " Frequency: " << it.second << endl;
//     // }

//     vector<int> v = {3,5,3,1,1,3,5,1,6};
//     unordered_map<int, int> hash;
//     for (int i = 0; i < v.size(); i++)
//     {
//         hash[v[i]]++;
//     }
//     cout<<"Element Frequencies: "<<endl;
//     for(auto it : hash)
//     {
//         cout<<it.first<<"->"<<it.second<<endl;
//     }
    


//     return 0;
// }

///////////////////////////////////////


#include <iostream>
#include <unordered_map>
#include <sstream> // for stringstream
using namespace std;

int main() {
    // // Example input string
    // string str = "this is a sample string this is sample";

    // // Create an unordered_map to store the frequency of each word
    // unordered_map<string, int> freq;

    // // Use stringstream to break the string into words
    // stringstream ss(str);
    // string word;

    // // Extract words from the string and update their frequency in the map
    // while (ss >> word) {
    //     freq[word]++;
    // }

    // // Output the frequency of each word
    // cout << "Word frequencies:" << endl;
    // for (auto &it : freq) {
    //     cout << "Word: \"" << it.first << "\" Frequency: " << it.second << endl;
    // }

    string str = "abcaababababdbsbwbbsbs";
    unordered_map<char, int> hash;
    // istringstream ss(str);
    // string word = "";

    for(auto c : str){
        hash[c]++;
    }

    // while (ss>>word)
    // {
    //     hash[word]++;
    //     // cout<<word<<endl;
    // }

    cout<<"Word Frequencies: "<<endl;
    for (auto c : hash)
    {
        cout<<c.first<<c.second;
    }
    

    


    return 0;
}
