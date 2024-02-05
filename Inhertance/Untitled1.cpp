#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right ;
	
	class BST{
		private:
			node *rpot;
			public:
				BST(){
					root=NULL;
				}
				int isempty(){root==NULL;
				}
				void insert();
				void inorertrav();
				void inorder(node*);
				void preordertrav();
				void preorder(node*);
				void postordertrav();
				void postorder(node*);
				node *search(int item );
				node *rt=root;
				if(rt==NULL){
					return NULL;
				}
				while(rt){
					if(item==rt->data){
						return rt;
					}
				else if(item<rt->data){
					rt=tr->left;
					
				}
				else{
					rt=tr->right;
				}
				}
				return NULL;
				
			
	}
};



void BST::insert(int item){
	
}

int main(){
return 0;
}

