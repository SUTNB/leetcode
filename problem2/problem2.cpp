/*************************************************************************
	> File Name: problem2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 16时03分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 *
 *  * Definition for singly-linked list.
 *
 **/
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(){}
     ListNode(int x) : val(x), next(NULL) {}
 };
 class Solution {
     
   public:

     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         
                 ListNode* test1 = l1;

                 ListNode* test2 = l2;

                 ListNode* node;
        //print_my(test2);
                 for(int i=0, j=0;(test1 != NULL) || (test2 != NULL);)

            {cout<<"-----"<<endl; 
                         if(test1 != NULL)

             {
                 
                                 i++;

                                 test1 = test1->next;

                             
             }

                         if(test2 != NULL)

             {
                 
                                 j++;

                                 test2 = test2->next;

                             
             }

                         if(j>i)

             {
                 
                                 node = l1;

                                 l1 = l2;

                                 l2 = node;

                                 break;

                             
             }

         //print_my(node);
                     
         }

         int carry_new = 0, carry_old = 0, k = 1;

                 ListNode* headNode = l1;

                         ListNode* pendNode = l1->next;

                                 while(l1 != NULL && l2 !=NULL)

                                         {
                                             
                                                         k = 0;

                                                         if(l1->val + l2->val + carry_old > 9)

                                             {

                                                                 carry_new = (l1->val + l2->val + carry_old) / 10;

                                                                 l1->val = (l1->val + l2->val + carry_old) % 10;

                                                             
                                             }

                                                         else

                                             {
                                                 
                                                                 carry_new = 0;

                                                                 l1->val = l1->val + l2->val + carry_old;

                                                             
                                             }

                                                         carry_old = carry_new;

                                                         if(l1->next == NULL)

                                                             pendNode = l1;

                                                         l1 = l1->next;

                                                         l2 = l2->next;

                                                     
                                         }

                                                 if(k)

                                                         {
                                                             
                                                                         carry_old = (l1->val + l2->val) / 10;

                                                                         l1->val = (l1->val + l2->val) % 10;

                                                                     
                                                         }

                                                                 if(carry_old){
                                                                     
                                                                                 ListNode* pnewNode = new ListNode(carry_old);

                                                                                 pendNode->next = pnewNode;

                                                                             
                                                                 }

                                                                         return headNode;

    }

public: void createList(ListNode* &pHead)
{
        pHead = new ListNode;
        pHead->val= 0;
        pHead->next = NULL;
        ListNode* p = pHead;
        for(int i=1; i<4; i++)
        { 
                ListNode* pNewNode = new ListNode;
                pNewNode->val = i;
                pNewNode->next = NULL;
                p->next = pNewNode;
                p = pNewNode;       
        }      
}
public: void createList2(ListNode* &pHead)
{
            pHead = new ListNode;
            pHead->val= 0;
            pHead->next = NULL;
            ListNode* p = pHead;
            for(int i=1; i<2; i++)
            { 
                            ListNode* pNewNode = new ListNode;
                            pNewNode->val = i;
                            pNewNode->next = NULL;
                            p->next = pNewNode;
                            p = pNewNode;
                        
                    }      

}
public:
    void print_my(ListNode* &p)
    {
    while(p != NULL)
        {
            cout<<p->val<<endl;
            p = p->next;
        }
    }
};
 int main()
 {
    Solution a;
    ListNode* head1, *head2;
    a.createList(head1);
    a.createList2(head2);
    head1 = a.addTwoNumbers(head1,head2);
    a.print_my(head1); 
    return 0;
}
