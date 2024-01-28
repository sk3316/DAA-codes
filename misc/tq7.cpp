// #include <iostream>
// #include <vector>
// using namespace std;

// int calculateCollisions(vector<vector<int>>& schedule) {
//     int n = schedule.size();
//     int m = schedule[0].size();
//     int collisions = 0;
//     for (int j = 0; j < m; j++) {
//         int ones = 0;
//         for (int i = 0; i < n; i++) {
//             if (schedule[i][j] == 1) {
//                 ones++;}}
//         if (ones > 1) {
//             collisions += (ones * (ones - 1)) / 2;
//         }}
//     return collisions;}
// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> schedule(N, vector<int>(M, 0));
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> schedule[i][j];
//         }}
//     int collisions = calculateCollisions(schedule);
//     cout << collisions << endl;
//     return 0;
// }





// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int reverse(int n) {
//     if (n < 10) {
//         return n;
//     }
//     return (n % 10) * pow(10, int(log10(n))) + reverse(n / 10);
// }

// int main() {
//     int N;
//     cin >> N;

//     int reversed = reverse(N);

//     cout << reversed << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int minBreaks(int m, int n) {
//     if (m == 1 || n == 1) {
//         return max(m, n) - 1;
//     }
//     return m * n - 1;
// }

// int main() {
//     int m, n;
//     cin >> m >> n;

//     int minBreak = minBreaks(m, n);

//     cout << "Minimum number of times is " << minBreak << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;
// void searchAndCount(int arr[], int n, int x) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             count++;}}
//     if (count > 0) {
//         cout << x << " - " << count << endl;
//     } else {
//         cout << x << " - 0" << endl;}}
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];}
//     int x;
//     cin >> x;
//     searchAndCount(arr, n, x);
//     return 0;}


// #include <iostream>
// using namespace std;
// int minPaintingRooms(int rooms[], int n) {
//     int red = 0, green = 0, blue = 0;
//     for (int i = 0; i < n; i++) {
//         if (rooms[i] == 1) {
//             red++;
//         } else if (rooms[i] == 2) {
//             green++;
//         } else if (rooms[i] == 3) {
//             blue++;
//         }}
//     return n - max(red, max(green, blue));}
// int main() {
//     int N;
//     cin >> N;
//     int rooms[N];
//     for (int i = 0; i < N; i++) {
//         cin >> rooms[i];}
//     int minPaint = minPaintingRooms(rooms, N);
//     cout << minPaint << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int maxRodValue(int length, int prices[], int n) {
//     vector<int> dp(length + 1, 0);
//     for (int i = 1; i <= length; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j <= i) {
//                 dp[i] = max(dp[i], prices[j] + dp[i - j]);}}}
// return dp[length];}
// int main() {
//     int N;
//     cin >> N;
//     int prices[N + 1];
//     for (int i = 1; i <= N; i++) {
//         cin >> prices[i];}
//     int maxSell = maxRodValue(N, prices, N);
//     cout << maxSell << endl;
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
//     vector<int> arr(N);
//     for (int i = 0; i < N; i++) {
//         cin >> arr[i];}
//     int multiplier;
//     cin >> multiplier;
//     for (int i = 0; i < N; i++) {
//         arr[i] *= multiplier;}
//     sort(arr.rbegin(), arr.rend());
//     for (int i = 0; i < N; i++) {
//         cout << arr[i] << " ";}
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int minRooms(int guests, vector<int>& arrival, vector<int>& duration) {
//     vector<pair<int, bool>> events; // pair of time, isArrival
//     for (int i = 0; i < guests; i++) {
//         events.push_back({arrival[i], true});
//         events.push_back({arrival[i] + duration[i], false});}
//     sort(events.begin(), events.end());
//     int roomsNeeded = 0;
//     int maxOverlaps = 0;
//     for (const auto& event : events) {
//         if (event.second) { // Arrival
//             roomsNeeded++;
//             maxOverlaps = max(maxOverlaps, roomsNeeded);
//             } else { // Departure
//             roomsNeeded--;}}
//     return maxOverlaps}
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> arrival(N);
//         vector<int> duration(N);
//         for (int i = 0; i < N; i++) {
//             cin >> arrival[i];}
//         for (int i = 0; i < N; i++) {
//             cin >> duration[i];}
//         int roomsNeeded = minRooms(N, arrival, duration);
//         cout << roomsNeeded << endl;}
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;
// int gcd(int a, int b) {
//     if (b == 0)
//         return a; return gcd(b, a % b);}
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);}
// int countDivisibleByPrimes(vector<int>& primes, int A, int B) {
//     int result = 0;
//     int n = primes.size();
//     for (int i = 1; i < (1 << n); i++) {
//         int sign = __builtin_popcount(i) % 2 == 0 ? -1 : 1;
//         int lcmValue = 1;
//         for (int j = 0; j < n; j++) {
//             if (i & (1 << j)) {
//                 lcmValue = lcm(lcmValue, primes[j]);}}
//         result += sign * (B / lcmValue - (A - 1) / lcmValue);}
//     return result;}
// int main() {
//     int X, Q;
//     cin >> X >> Q;
//     vector<int> primes(X);
//     for (int i = 0; i < X; i++) {
//         cin >> primes[i];}
//     for (int i = 0; i < Q; i++) {
//         int A, B;
//         cin >> A >> B;
//         int result = countDivisibleByPrimes(primes, A, B);
//         cout << result << endl;}
//     return 0;}









