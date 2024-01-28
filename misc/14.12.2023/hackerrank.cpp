
// #include <iostream>
// #include <vector>

// using namespace std;

// int calculateTurns(int targetScore, const vector<int> &scores)
// {
//     int totalScore = 0;
//     int turns = 0;

//     for (int score : scores)
//     {
//         totalScore += score;
//         turns++;

//         if (totalScore >= targetScore)
//         {
//             break;
//         }
//     }
//     return turns;
// }
// int main()
// {
//     int targetScore;
//     cin >> targetScore;

//     vector<int> scores;
//     while (true)
//     {
//         int score;
//         cin >> score;
//         if (score == 0)
//         {
//             break;
//         }
//         scores.push_back(score);
//     }
//     int result = calculateTurns(targetScore, scores);
//     cout << "The number of turns is " << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Pipe {
//     int houseFrom;
//     int houseTo;
//     int diameter;
// };

// int main() {
//     int n, p;
//     cin >> n >> p;

//     vector<Pipe> pipes(p);
//     for (int i = 0; i < p; ++i) {
//         cin >> pipes[i].houseFrom >> pipes[i].houseTo >> pipes[i].diameter;
//     }

//     // Sort pipes based on diameter in descending order
//     sort(pipes.begin(), pipes.end(), [](const Pipe &a, const Pipe &b) {
//         return a.diameter > b.diameter;
//     });

//     vector<int> tankHouses, tapHouses;
//     for (const Pipe &pipe : pipes) {
//         if (find(tapHouses.begin(), tapHouses.end(), pipe.houseFrom) == tapHouses.end()) {
//             tankHouses.push_back(pipe.houseFrom);
//             tapHouses.push_back(pipe.houseTo);
//         }
//     }

//     int numPairs = tankHouses.size();

//     // Output
//     cout << numPairs << endl;
//     for (int i = 0; i < numPairs; ++i) {
//         cout << tankHouses[i] << " " << tapHouses[i] << " " << pipes[i].diameter << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {   int m, n;
//     cin >> m >> n;
//     vector<int> A(m);
//     vector<int> B(n);
//     for (int i = 0; i < m; ++i)
//     {
//         cin >> A[i];
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> B[i];
//     }
//     vector<int> mergedArray;
//     int i = 0, j = 0;
//     while (i < m && j < n)
//     {
//         if (A[i] <= B[j])
//         {
//             mergedArray.push_back(A[i]);
//             i++;
//         }
//         else
//         {
//             mergedArray.push_back(B[j]);
//             j++;
//         }
//     }
//     while (i < m)
//     {
//         mergedArray.push_back(A[i]);
//         i++;
//     }
//     while (j < n)
//     {
//         mergedArray.push_back(B[j]);
//         j++;
//     }
//     for (int k = 0; k < m + n; ++k)
//     {
//         cout << mergedArray[k] << " ";
//     }
//     return 0;
// }

// SELECT train_name
// FROM Train
// WHERE source = 'Chennai' AND destination = 'Mumbai'
//   AND train_name NOT LIKE '%Chennai%' AND train_name NOT LIKE '%Mumbai%'
// ORDER BY train_name DESC;

// SELECT DISTINCT
//   t.train_number,
//   t.train_name,
//   t.source,
//   t.destination,
//   ttf.superfast_charge,
//   ttf.service_tax
// FROM
//   Train t
//   JOIN Train_Ticket_Fare ttf ON t.train_number = ttf.train_number
// WHERE
//   ttf.type = 'superfast' AND
//   ttf.service_tax = 0
// ORDER BY
//   t.train_name ASC;

// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;
// class Graph
// {
//     int vertices;
//     vector<vector<int>> adjList;

// public:
//     Graph(int V) : vertices(V), adjList(V) {}
//     void addEdge(int u, int v)
//     {
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
//     void dfs(int node, int parent, int time, vector<int> &disc, vector<int> &low, vector<bool> &visited, set<int> &result)
//     {
//         int children = 0;
//         disc[node] = time;
//         low[node] = time;
//         time++;
//         visited[node] = true;
//         for (int neighbor : adjList[node])
//         {
//             if (!visited[neighbor])
//             {
//                 children++;
//                 dfs(neighbor, node, time, disc, low, visited, result);
//                 low[node] = min(low[node], low[neighbor]);
//                 if (low[neighbor] >= disc[node] && parent != -1)
//                 {
//                     result.insert(node);
//                 }
//             }
//             else if (neighbor != parent)
//             {
//                 low[node] = min(low[node], disc[neighbor]);
//             }
//         }
//         if (parent == -1 && children > 1)
//         {
//             result.insert(node);
//         }
//     }
//     set<int> findArticulationPoints()
//     {
//         vector<int> disc(vertices, -1);
//         vector<int> low(vertices, -1);
//         vector<bool> visited(vertices, false);
//         set<int> result;
//         for (int i = 0; i < vertices; ++i)
//         {
//             if (!visited[i])
//             {
//                 dfs(i, -1, 0, disc, low, visited, result);
//             }
//         }
//         return result;
//     }
// };
// int main()
// {
//     int vertices, edges;
//     cin >> vertices >> edges;
//     Graph g(vertices);
//     for (int i = 0; i < edges; ++i)
//     {
//         int u, v;
//         cin >> u >> v;
//         g.addEdge(u, v);
//     }
//     set<int> articulationPoints = g.findArticulationPoints();
//     for (int point : articulationPoints)
//     {
//         cout << point << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <queue>
// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };
// Node* insert(Node* root, int value) {
//     if (root == nullptr) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->left = newNode->right = nullptr;
//         return newNode;
//     }
//     if (value < root->data) {
//         root->left = insert(root->left, value);
//     } else if (value > root->data) {
//         root->right = insert(root->right, value);
//     }
//     return root;
// }
// int height(Node* root) {
//     if (root == nullptr) {
//         return 0;
//     }
//     int leftHeight = height(root->left);
//     int rightHeight = height(root->right);
//     return 1 + max(leftHeight, rightHeight);
// }
// int diameter(Node* root) {
//     if (root == nullptr) {
//         return 0;
//     }
//     int leftDiameter = diameter(root->left);
//     int rightDiameter = diameter(root->right);
//     int leftHeight = height(root->left);
//     int rightHeight = height(root->right);
//    return max({leftDiameter, rightDiameter, leftHeight + rightHeight + 1});
// }
// int main() {
//     Node* root = nullptr;
//     int value;
//     while (cin >> value && value > 0) {
//         root = insert(root, value);
//     }
//     cout << diameter(root) << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// void buildSegmentTree(const vector<int>& arr, vector<int>& segmentTree, int low, int high, int pos) {
//     if (low == high) {
//         segmentTree[pos] = arr[low];
//         return;
//     }
//     int mid = (low + high) / 2;
//     buildSegmentTree(arr, segmentTree, low, mid, 2 * pos + 1);
//     buildSegmentTree(arr, segmentTree, mid + 1, high, 2 * pos + 2);
//     segmentTree[pos] = max(segmentTree[2 * pos + 1], segmentTree[2 * pos + 2]);
// }
// int queryMax(const vector<int>& segmentTree, int qlow, int qhigh, int low, int high, int pos) {
//     if (qlow <= low && qhigh >= high) {
//         return segmentTree[pos];
//     }
//     if (qlow > high || qhigh < low) {
//         return INT_MIN; // Return a very small value for minimum
//     }
//     int mid = (low + high) / 2;
//     return max(queryMax(segmentTree, qlow, qhigh, low, mid, 2 * pos + 1),
//                queryMax(segmentTree, qlow, qhigh, mid + 1, high, 2 * pos + 2));
// }
// int main() {
//     int n;
//     cin >> n;
//    vector<int> arr(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//     int nextPowerOfTwo = 1;
//     while (nextPowerOfTwo < n) {
//         nextPowerOfTwo *= 2;
//     }
//     vector<int> segmentTree(2 * nextPowerOfTwo - 1);
//     buildSegmentTree(arr, segmentTree, 0, n - 1, 0);
//     for (int i = 0; i < segmentTree.size(); ++i) {
//         cout << segmentTree[i] << " ";
//     }
//     cout << endl;
//     int q;
//     cin >> q;
//     while (q--) {
//         int qlow, qhigh;
//         cin >> qlow >> qhigh;

//         int result = queryMax(segmentTree, qlow - 1, qhigh - 1, 0, n - 1, 0);
//         cout << result << " ";
//     }
//     return 0;
// }

// #include <stdio.h>
// #define N 10
// void printMaze(int maze[N][N])
// {
//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = 0; j < N; ++j)
//         {
//             printf("%d ", maze[i][j]);
//         }
//         printf("\n");
//     }
// }
// int isSafe(int maze[N][N], int x, int y)
// {
//     return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 0);
// }
// int solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
// {
//     if (x == N - 1 && y == N - 1)
//     {
//         sol[x][y] = 1;
//         return 1;
//     }
//     if (isSafe(maze, x, y))
//     {
//         sol[x][y] = 1;
//         // Move right
//         if (solveMazeUtil(maze, x, y + 1, sol))
//         {
//             return 1;
//         }
//         // Move down
//         if (solveMazeUtil(maze, x + 1, y, sol))
//         {
//             return 1;
//         }
//         // If no valid move, backtrack
//         sol[x][y] = 0;
//         return 0;
//     }
//     return 0;
// }
// void solveMaze(int maze[N][N])
// {
//     int sol[N][N] = {{0}};
//     if (solveMazeUtil(maze, 0, 0, sol))
//     {
//         printf("Path found:\n");
//         printMaze(sol);
//     }
//     else
//     {
//         printf("No path found.\n");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int maze[N][N];
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             scanf("%d", &maze[i][j]);
//         }
//     }
//     solveMaze(maze);
//     return 0;
// }

// #include <stdio.h>
// long long calculateContribution(int arr[], int l, int r, int k, int n)
// {
//     long long contribution = 0;
//     for (int i = l - 1; i < r; ++i)
//     {
//         int start = (i - k >= 0) ? i - k : 0;
//         int end = i;

//         for (int j = start; j <= end; ++j)
//         {
//             contribution += arr[j];
//         }
//     }
//     return contribution;
// }
// int main()
// {
//     int N, Q;
//     scanf("%d %d", &N, &Q);
//     int arr[N];
//     for (int i = 0; i < N; ++i)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int q = 0; q < Q; ++q)
//     {
//         int operation;
//         scanf("%d", &operation);
//         if (operation == 1)
//         {
//             int l, r, k;
//             scanf("%d %d %d", &l, &r, &k);
//             long long contribution = calculateContribution(arr, l, r, k, N);
//             printf("%lld\n", contribution);
//         }
//         else if (operation == 2)
//         {
//             int i, X;
//             scanf("%d %d", &i, &X);
//             arr[i - 1] = X;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
// Node structure for a circular singly linked list
struct Node {
 int data;
 struct Node* next;
};
// Function to create a new node with the given data
struct Node* createNode(int data) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 if (newNode == NULL) {
 printf("Memory allocation failed\n");
 exit(1);
 }
 newNode->data = data;
 newNode->next = NULL;
 return newNode;
}
// Function to insert a node at the left of the circular singly linked list
struct Node* insertLeft(struct Node* head, int data) {
 struct Node* newNode = createNode(data);
 if (head == NULL) {
 newNode->next = newNode;
 return newNode;
 }
 struct Node* last = head;
 while (last->next != head) {
 last = last->next;
 }
 newNode->next = head;
 last->next = newNode;
 return newNode;
}
// Function to insert a node at the right of the circular singly linked list
struct Node* insertRight(struct Node* head, int data) {
 struct Node* newNode = createNode(data);
 if (head == NULL) {
 newNode->next = newNode;
 return newNode;
 }
 newNode->next = head->next;
 head->next = newNode;
 return head;
}
// Function to insert a node at a specified position in the circular singly linked list
struct Node* insertPos(struct Node* head, int position, int data) {
 if (position < 1) {
 printf("Invalid position\n");
 return head;
 }
 struct Node* newNode = createNode(data);
 if (position == 1) {
 return insertLeft(head, data);
 }
 struct Node* current = head;
 for (int i = 1; i < position - 1; ++i) {
 if (current == NULL) {
 printf("Invalid position\n");
 return head;
 }
 current = current->next;
 }
 if (current == NULL) {
 printf("Invalid position\n");
 return head;
 }
 newNode->next = current->next;
 current->next = newNode;
 return head;
}
// Function to display the circular singly linked list
void displayList(struct Node* head) {
 if (head == NULL) {
 printf("List is empty\n");
 return;
 }
 struct Node* current = head;
 do {
 printf("%d ", current->data);
 current = current->next;
 } while (current != head);
 printf("\n");
}
int main() {
 struct Node* head = NULL;
 int choice, data, position;
 do {
 printf("1. Insert at left\n");
 printf("2. Insert at right\n");
 printf("3. Insert at position\n");
 printf("4. Display\n");
 printf("5. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter the element to be inserted (at left): ");
 scanf("%d", &data);
 head = insertLeft(head, data);
 break;
 case 2:
 printf("Enter the element to be inserted (at right): ");
 scanf("%d", &data);
 head = insertRight(head, data);
 break;
 case 3:
 printf("Enter the position and the element to be inserted: ");
 scanf("%d %d", &position, &data);
 head = insertPos(head, position, data);
 break;
 case 4:
 printf("List: ");
 displayList(head);
 break;
 case 5:
 printf("Exiting the program\n");
 break;
 default:
 printf("Wrong choice\n");
 }
 } while (choice != 5);
 return 0;
}