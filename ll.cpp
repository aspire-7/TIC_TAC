#include<iostream>
#include<list>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
// };

// Node* createNode(auto dta)
// {
//     Node* nn = new Node();
//     nn->data = dta;
//     nn->next = NULL;
//     return nn;      
// }

// Node* createList(int n)
// {
//     int temp;
//     Node* head = NULL;
//     Node* crr = NULL;
//     while(n--) 
//     {
//         cin>>temp;
//         if(head == NULL)
//         {
//             head = crr = createNode(temp);
//         }
//         else 
//         {
//             crr->next = createNode(temp);
//             crr = crr->next;
//         }
//     }
//     return head;
// }

// void printList(Node* head)
// {
//     while(head != NULL)
//     {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return ;
// }

// Node* reverseList(Node* head)
// {
//     Node* prev = NULL;
//     Node* crr = head;
//     Node* nxt = NULL;
//     while(crr != NULL)
//     {
//         nxt = crr->next;
//         crr->next = prev;
//         prev = crr;
//         crr = nxt;
//     }
//     head = prev;
//     return head;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     Node* list = createList(n);
//     printList(list);
//     cout<<'\n';
//     list = reverseList(list);
//     printList(list);
//     return 0;
// }
// void showlist(list<int> l){
//     // list<int>::iterator it;
//     for(auto it:l)
//     cout<<it<<"  ";

//     cout<<endl;
// }

// int main(){
    // list<int> ll;
    // int n;
    // cin>>n;
    // while(n--){
    //     int tmp;
    //     cin>>tmp;
    //     ll.push_back(tmp);
    // }

    // for(auto x:ll)
    // cout<<x<<" ";
    // // showlist(ll);
    // // ll.reverse();
    // // showlist(ll);
    // // ll.sort();
	// list<int>::iterator it = ll.begin();
	// advance(it,2);
	// ll.insert(it,3);
	// cout<<endl;
    // showlist(ll);
	// ll.erase(it,ll.end());
	// cout<<endl;
	// showlist(ll);

    // Node* head = NULL;

// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n,k,p;
// 	cin>>n>>k>>p;
// 	vector<int> v;
// 	for(int i=0;i<n; i++)
// 	{
// 		int tmp;
// 		cin>>tmp;
// 		v.push_back(tmp);
// 	}
//     sort(v.begin(),v.end());
// 	while(p--){
// 		int s,e;
// 		cin>>s>>e;
		
// 		e=e-1;
// 		s=s-1;
// 		int tmp=e-1;
// 	bool flag = 1;
// 		while(tmp != s){
// 			// if(s==0 && tmp== 1)
// 			// {
// 			// 	flag = 1;
// 			// 	break;
// 			// }
// 			if((v[e] - v[tmp]) > k)
// 			{
// 				flag =0;
// 				break;
// 			}
// 			tmp--;
// 			e--;
// 		}
// 		if(flag)
// 		cout<<"Yes"<<endl;

// 		else cout<<"No"<<endl;
// 	}


// }


class node{
    public:
    int data;
    node* next;
    node * prev;
};

node* CreateNode(int data){
    node* tmp = new node();
    tmp->data = data;
    tmp -> next = NULL;
    tmp->prev = NULL;
    return tmp;
}
node* createlist(node* head,node * sex,int n){
     
    while(n--){
        int tmp ;
        cin>>tmp;
        if(head == NULL){
            head = CreateNode(tmp);
            sex = head;
            
        }
        else {

            sex->next = CreateNode(tmp);
            sex->next->prev = sex;
            sex = sex->next;

        }

    }
    return head;

}
void insertmid(node* head,int pos, int data){
    // int data ;
    // cin>>data;
    node* tmp = head;
    for(int i = 1; i<pos-1; i++)
    tmp = tmp->next;

    node* nxt = tmp->next;

    tmp->next = CreateNode(data);

    tmp->next->prev = tmp;
    tmp->next->next = nxt;
    nxt->prev = tmp->next;


}
void print(node * tmp){
    while(tmp){
        cout<<tmp->data<<"\t";
        tmp = tmp->next;
    }
}
int main()
{
    int n;
    cin>>n;
    node* head = NULL;
    node* sex = NULL;
   node * tmp = createlist(head,sex,n);
//    print(tmp);
   cout<<endl;
   insertmid(tmp, 3, 111);

   print(tmp);
    
}


// #include <iostream>
// #include <unordered_map>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

// void removeLastOccurrence(ListNode* head) {
//     if (!head) return;

//     // Count the frequency of each element
//     unordered_map<int, int> freq;
//     ListNode* curr = head;
//     while (curr) {
//         freq[curr->val]++;
//         curr = curr->next;
//     }

//     // Traverse the linked list and remove last occurrence of each element
//     ListNode* prev = NULL;
//     curr = head;
//     while (curr) {
//         if (freq[curr->val] > 1 && !curr->next) {  // last occurrence
//             if (!prev) {  // head node
//                 head = NULL;
//             }
//             else {
//                 prev->next = NULL;
//             }
//         }
//         else if (freq[curr->val] == 1) {  // remove single frequency element
//             if (!prev) {  // head node
//                 head = curr->next;
//             }
//             else {
//                 prev->next = curr->next;
//             }
//         }
//         else {
//             prev = curr;
//         }
//         curr = curr->next;
//     }

//     // Print the updated linked list
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     ListNode* head = NULL;
//     ListNode* curr = NULL;
//     for (int i = 0; i < n; i++) {
//         int val;
//         cin >> val;
//         if (!head) {
//             head = new ListNode(val);
//             curr = head;
//         }
//         else {
//             curr->next = new ListNode(val);
//             curr = curr->next;
//         }
//     }
//     removeLastOccurrence(head);
//     return 0;
// }
  