//Queue using linkedlist
//library
#include<iostream>
//coping linkedlist 
#include"ll.cpp"

using namespace std;

class Que
{//giving access
 public:  	//two variables in stack
 Node*end;
 Node*front;
 Linkedlist l1;	//object from class Linkedlist
 Que()		//constructor function
{
end=l1.head;	//end points to the last element added
front=l1.tail;	//front points to the last element to be deleted
}


void Enqueue(int value)	//function which adds the element in the last of stack
{	
l1.insertAt(1,value);	//to insert at the position of head
end=l1.head;		//pointing head to the element inserted
if(front==NULL)front=l1.head;}

void Dequeue()	//to delete the first element
{
l1.tail=front;	
l1.delet();
if(end==NULL)
cout<<"the stack is empty"<<endl;
else
front=l1.tail;

}

bool isEmpty()	//to check whether the queue is empty
{
 
if(end==NULL)return true;	//if end become null
	return false;
	}

	int size(){		//counting numr same as linkedlist
	return l1.countItems();

	}
void Display(){		//displaying the elements

	}
	void display()
{
l1.display();
}

};

int main()	//execution starts
{int i,c;
Que q1;			//object from class queue
for(i=0;i<5;i++){
q1.Enqueue(i);}		//inserting value till 5
q1.display();
cout<<q1.size()<<endl;
q1.Dequeue();
if(q1.isEmpty()==0)
{cout<<"stack is not empty"<<endl;}
else
{cout<<"stack is empty"<<endl;}
q1.display();
cout<<q1.size()<<endl;
q1.Dequeue();
q1.display();
cout<<q1.size()<<endl;
q1.Dequeue();
q1.display();
cout<<q1.size()<<endl;
q1.Dequeue();
q1.display();
cout<<q1.size()<<endl;
q1.Dequeue();
q1.display();
cout<<q1.size()<<endl;
return 0;		//execution stops
}
