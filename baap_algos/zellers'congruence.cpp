// Zeller’s congruence is an algorithm devised by Christian Zeller to calculate the day of the week for any Julian or Gregorian calendar date. It can be considered to be based on the conversion between Julian’s day and the calendar date. 
// It is an algorithm to find the day of the week for any date. 
// For the Gregorian calendar it is: 

// h = (q + [(13*(m+1))/5] + k + [k/4] + [j/4] + 5*j) mod 7;

// where, 

// 1. h is the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, …, 6 = Friday)
// 2. q is the day of the month
// 3. m is the month (3 = March, 4 = April, 5 = May, …, 14 = February)
// 4. K is the year of the century (year % 100).
// 5. J is the zero-based century (actually ? year/100 ?) For   example, the zero-based centuries for 1995 and 2000 are 19 and 20 respectively (to not be confused with the common ordinal century enumeration which indicates 20th for both cases).


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int date, month, year;
    cout<<"Enter the date month & year whose day of the week you need to find out in DD MM YYYY format: "<<endl;
    cin>>date>>month>>year;
    if(month == 1)
    {
        month = 13;
        year--;
    }
    if (month == 2)
    {
        month = 14;
        year--;
    }
    int q = date;
    int m = month;
    int k = year % 100;
    int j = year / 100;
    int h = q + ((13*(m+1))/5) + k + (k/4) + (j/4) + (5*j);
    h = h%7;
    switch (h)
    {
    case 0:
        cout<<"Saturday"<<endl;
        break;
    case 1:
        cout<<"Sunday"<<endl;
        break;
    case 2:
        cout<<"Monday"<<endl;
        break;
    case 3:
        cout<<"Tuesday"<<endl;
        break;
    case 4:
        cout<<"Wednesday"<<endl;
        break;
    case 5:
        cout<<"Thursday"<<endl;
        break;
    case 6:
        cout<<"Friday"<<endl;
        break;
    
    default:
        break;
    }

    return 0;
}


