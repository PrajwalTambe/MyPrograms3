#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int no)
{
	PNODE temp= *Head;
 PNODE newn = new NODE;
 
 newn->data =no;
 newn->lchild=NULL;
 newn->rchild=NULL;
 
 if(*Head ==  NULL)
 {
	 *Head=newn;
 }
 
 else
 {
	 
	 
   	 while(1) // unconditional Loop
	 {
		if(temp -> data == no)
		{
			cout<<"Duplicate node\n";
			
			delete newn;
			break;
		}			
		else if(temp -> data >no)  // lahan data
		{
			if(temp->lchild==NULL)
			{
				temp->lchild=newn;
				break;
			}
			temp=temp->lchild;
		}
		else if(temp -> data <no)  // motha data
		{
			if(temp->rchild==NULL)
			{
				temp->rchild=newn;
				break;
			}
			temp=temp->rchild;
		}
	 }
	 
 }
 
}

 bool Search(PNODE Head, int no)
 {
	 
    if(Head == NULL) // if tree is empty 
	{
		return false;
	}		
	else // tree contains atleast one node 
	{
		while(1)
		{
			if(Head->data == no)// node sapadla
			{
	              
				break;
			}
			else if(no>(Head->data))
			{
				Head=Head->rchild;
			}
			else if(no<(Head->data))
			{
	          		Head=Head->lchild;	
			}
		}
		if(Head == NULL)
		{
			return false;
			
		}
		else
		{
			return true;
		}
	}
 }
 
int main()
{
	int no=0;
	PNODE first =NULL;
	int bret=0;
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	
	cout<<"enter number to search\n";
	cin>>no;
	
	bret=Search(first,no);
	if(bret == true)
	{
		cout<<"Data is there \n";
	}
  else
  { 
	cout<<"Number is not there\n";
  }
	return 0;
}