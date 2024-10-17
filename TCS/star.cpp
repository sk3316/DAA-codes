#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n = 4; // Number of rows
    
    // // Outer loop for each row
    // for (int i = 1; i <= n; i++) {
        
    //     // Inner loop to print spaces
    //     for (int j = i; j < n; j++) {
    //         cout << " ";
    //     }
        
    //     // Inner loop to print stars
    //     for (int k = 1; k <= (2 * i - 1); k++) {
    //         cout << "*";
    //     }
        
    //     // Move to the next line after each row
    //     cout << endl;
    // }

    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *


    //7
    //7+1 / 2;


    int n = 5;
    for (int i = 1; i <= (1+1)/2; i++)
    {
        for (int j = 1; j <= i  ; j++)
        {
            cout<<"*";
        }
        // for (int k = i; k < n; k++)
        // {
        //     cout<<" ";
        // }
        cout<<endl;    
    }
    for (int i = 1; i <= 1/2; i++)
    {
        // int j;
        for (int j = (1/2)-(i-1); j >= 1; j--)
        {
            cout<<"*";
        }
        // j--;
        // for (int k = 0; k < count; k++)
        // {
        //     /* code */
        // }
        cout<<endl;
    }
    
    
    return 0;
}