#include <iostream>
using namespace std;
#include <bits/stdc++.h>

struct ListNode{
    int data ;
    ListNode* next;

    ListNode(int x){
        data  = x ;
        next = NULL ;
    }

};

void middleNode(ListNode* head) {
       ListNode* temp = head ;
       int n = 0 ;

       while(temp->next != NULL){
           n++;
           temp = temp->next;
       }
       int half ;
       if(n%2 == 0){
         half = n/2;
       }
       else{
           half = n/2 + 1 ;
       }
       temp = head ;
       while(half--){
        temp = temp->next;
       }
       cout<<"middle_elemen"<<temp->data<<" ";
       

    }

    void middle_elemnt(ListNode* head){
        //using slow and fast pointer
        ListNode* slow , *fast ;
        slow = fast = head ;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        } 
        cout<<slow->data;
    }

    void display(ListNode* head){
        // ListNode* temp = head ;
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }


int main(){
 
 ListNode* head = new ListNode(5);
 head->next = new ListNode(2);
 head->next->next = new ListNode(3);
 head->next->next->next = new ListNode(10);
 display(head);

//  middleNode(head) ;
 middle_elemnt(head) ;

    return 0;
}