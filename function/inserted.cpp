//if avail=NULL
//overflow
//exit
//New=AVAIL;
//AVAIL=Link(AVAIL)
//New(Data)=ITEM
//IF Head=NEW
//Temp=Head
//for i=1 to i<loc
//temp=temp->next
//New(link)=Temp(link)
//Temp=(link)=New


#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	
};
struct node *head;
void int_beg(int item)
{
	struct node *p=new struct node;
	if(p==NULL)
	{
		cout<<"overflow:";
		return;
	}
	p->data=item;
	p->next=head;
	head=p;
	cout<<"Node inserted:";
}

void inst_loc(int item,int loc)
{
	struct node *p=new struct node;
	struct node *temp;
	p->data =item;
	temp=head;
	for(int i=1;i<loc;i++){
		temp=temp->next;
		if(temp==NULL)
		{
			cout<<"cant inserted";
			return ;
		}
	}
	p->next =temp->next;
	temp->next=p;
	cout<<"node inserted";
	{
		void display (struct node *h);
		  {
			cout<<"list is:";
			while(n!=NULL) }
		{
			cout<<h->data<<"->";
			
			h=h->next;
		}
	}
	int main()
	{
		int item,choice,loc;
		do
		{
			cout<<"enter item:";
			cin>>item;
			cout<<"Enter loc:";
			cin>>loc;
			if(loc==0)
			{
				int_beg(item);
			}
			else
		}
		int_loc(item,loc);
	}
	diaplay(head);
	cout<<"Enter 0 to add more:";
	cin>>choice;
	if(choice!=0)
	{
		Break;
		
	}
	while(choice==0)
	return 0;
}
