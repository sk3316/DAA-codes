// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N = 11;
//     int A[] = {3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9};
//     vector<int> B;

//     for (int i = 0; i < N; i++) {
//         bool found = false;

//         // Search for the next greater element cyclically
//         for (int j = (i + 1) % N; j != i; j = (j + 1) % N) {
//             if (A[j] > A[i]) {
//                 B.push_back(A[j]);
//                 found = true;
//                 break;
//             }
//             // If we've looped back to the start, break
//             if (j == N - 1 && i == 0) break;
//         }

//         // If no greater element is found, append -1
//         if (!found) {
//             B.push_back(-1);
//         }
//     }

//     // Print the result
//     for (int i = 0; i < B.size(); i++) {
//         cout << B[i] << " ";
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {8,9,10,2,4,100};
    int z = arr.size();
    vector<int> x;
    for (int i = 0; i < z; i++)
    {
        bool found = false;
        for (int  j = i + 1; j < z; j++)
        {
            if(arr[j] > arr[i])
            {
                x.push_back(arr[j]);
                found = true;
                break;
            }
        }

        if(!found){
            x.push_back(-1);
        }
    }

    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    
    return 0;
}