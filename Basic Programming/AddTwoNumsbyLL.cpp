#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int value){
        val = value;
        next = NULL;
    }
};

void push_front(Node** head, int new_val){
    Node* new_node = new Node(new_val);
    new_node->next = *head;
    *head = new_node;
}

void printList(Node* head){
    Node* i = head;
    while(i){
        cout<<i->val<<" ";
        i = i->next;
    }
    cout<<"\n";
}

// function to reverse a linked list
Node* reverse_it(Node* head){
    Node *prev = NULL;
     Node *curr = head, *next;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// function to convert a linked list to an integer
int to_integer(Node* head){
    int num = 0;
    Node* curr = head;
    while(curr){
        int digit = curr->val;
        num = num*10 + digit;
        curr = curr->next;
    }
    return num;
}

// function to convert a number to a linked list
// containing digits in reverse order
Node* to_linkedlist(int x){
    Node* head = new Node(0);
    if(x==0) return head;


    Node* curr = head;
    while(x){
        int d = x%10;
        x /= 10;
        curr->next = new Node(d);
        curr = curr->next;
    }
    return head->next;
}

// function to add 2 numbers given as linked lists
Node* add_list(Node* l1, Node* l2){
    // reversing the 2 linked lists
    l1 = reverse_it(l1);
    l2 = reverse_it(l2);

    // converting them into integers
    int num1 = to_integer(l1);
    int num2 = to_integer(l2);

    int sum = num1 + num2;
    // converting the sum back to
    // a linked list
    Node* ans = to_linkedlist(sum);

    return ans;
}


int main(){
    Node* l1 = NULL;

    push_front(&l1, 2);
    push_front(&l1, 4);
    push_front(&l1, 3);

    Node* l2 = NULL;

    push_front(&l2, 5);
    push_front(&l2, 6);
    push_front(&l2, 4);

    // l1-> 2 4 3
    // l2-> 5 6 4

    Node* sum = add_list(l1,l2);

    printList(sum);
    // 7 0 8
}
