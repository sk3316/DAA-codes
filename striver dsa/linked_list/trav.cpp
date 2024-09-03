#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1) {
        data = data1; 
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;    
};

int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool isPresent(Node* head, int val){
    Node* temp = head;
    while (temp)
    {
        if(temp->data == val) return 1;
        temp = temp->next; 
    }
    return 0;
}

void print(Node* head)
{
    Node* temp = head;
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteHead(Node* head)
{
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head)
{
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
    
}


Node* deletePos(Node* head, int k)
{
    if (head == NULL) return head;
    if(k == 1)
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head; 
    }
    int count = 0;
    Node*temp = head;
    Node*prev = NULL;
    while (temp != NULL)    
    {
        count++;
        if (count==k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;        
    }
    return head;
}

Node* removeElement(Node* head, int val)
{
    if(head == NULL) return head;
    if(head->data == val)
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while (temp!= NULL)
    {
        if(temp->data == val)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;    
}


int main(){
    vector<int> arr = {2, 5, 8, 7};
    // Node* y = new Node(arr[0], nullptr);
    // cout<<sizeof(*y)<<endl; 
    // cout<<y->data<<endl;
    // cout<<y->next<<endl;

    Node* head = convertArr2LL(arr);
    // cout<<head->data<<endl;
    // Node* temp = head;
    // while(temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout<<endl;
    // cout<<lengthOfLL(head);

    // cout<<isPresent(head, 15)<<endl;

    // head = deleteHead(head);


    // head = deleteTail(head);
    // print(head);


    // head = deletePos(head, -1);
    // print(head);

    head = removeElement(head, 8);
    print(head);

    // cout<<head<<endl;
}