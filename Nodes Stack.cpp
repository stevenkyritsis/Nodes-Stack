#include<iostream>
using namespace std;

struct node;
struct info_rec;
typedef node *Ptr;
typedef node Stack;

struct info_rec{
	char name[20];
	int age, id;
	float height;
};

struct node{
	info_rec info;
	Ptr nxt;
};



Ptr start_ptr = NULL;
node *temp;

void create_stack(struct node &);
void push(struct node &, struct info_rec &, struct node *);
void DisplayStack(struct node &, struct info_rec &);
void pop(struct node &, struct node *, struct info_rec &);

int main()
{
    int input;
    

do{
    cout << "What would you like to do?\n";
    cout << "1. Create a Stack link-list.\n";
    cout << "2. Push\n";
    cout << "3. Pop\n";
    cout << "4. Display a Stack.\n";
    cout << "5. EXIT\n";
    cin >> input;
    cout << endl;

    switch(input){
        case 1:{
        	create_stack(Stack);
            break;
        }

        case 2:{
        	push(Stack, );
            break;
        }
        
        case 3:{
        	pop(s, i);
			break;
		}
        
        case 4:{
        	DisplayNode(temp);
            break;
        }

        case 5:{
            return 0;
            break;
        }

        default: cout << "Error! Please enter 1 of the numbers above.\n";
    }
}while(input != 5);

    return 0;
}

void create_stack(node &s)
{
	if(start_ptr != NULL)
	{
		cout << "Stack has not been created yet. \n\n";
	}
	else
	{
	node *temp, *temp2;
	temp = new node;
	cout << "Please enter the name of the person: \n";
	cin >> temp -> s.info.name;
	cout << "Please enter the age of the person: \n";
	cin >> temp-> s.info.age;
	cout << "Please enter the height of the person in inches: \n";
	cin >> temp-> s.info.height;
	cout << "Please enter an ID number: \n";
	cin >> temp-> s.info.id;
	temp-> nxt = NULL;
	if(start_ptr == NULL)
	{
		start_ptr = temp;
	}
	else
	{
		temp2 = start_ptr;
		while (temp2->nxt !=NULL)
		{
			temp2 = temp2->nxt;
		}
		temp2->nxt = temp;
	}
	cout << endl << endl;
	}
}

void push(struct node &s, struct info_rec &i)
{
	if(start_ptr == NULL)
	{
		cout << "You must create the list. \n\n";
	}
	else
	{
	node *temp, *temp2;
	temp = new node;
	cout << "Please enter the name of the person: \n";
	cin >> temp -> name;
	cout << "Please enter the age of the person: \n";
	cin >> temp-> age;
	cout << "Please enter the height of the person in inches: \n";
	cin >> temp-> height;
	cout << "Please enter an ID number: \n";
	cin >> temp->id;
	temp-> nxt = NULL;
	if(start_ptr == NULL)
	{
		start_ptr = temp;
	}
	else
	{
		temp2 = start_ptr;
		while (temp2->nxt !=NULL)
		{
			temp2 = temp2->nxt;
		}
		temp2->nxt = temp;
	}
	cout << endl << endl;
	}
}

void DisplayNode(struct node *temp)
{
	temp = start_ptr;
	do {
		if (temp == NULL)
		cout << "End of list \n";
		else
		{
			cout << "Name: " << temp->name << endl;
			cout << "Age: " << temp->age << endl;
			cout << "Height: " << temp->height << endl;
			cout << "ID: " << temp->id << endl;
			temp = temp->nxt;
		}
	}while(temp != NULL);
	cout << endl << endl;
}

///////////////////////////////Steve////////////////////////////////////////////
void pop(struct node & s, struct info_rec & i)
  { 
    node *temp1, *temp2; 
    if (start_ptr == NULL) 
       cout << "The list is empty!" << endl;
    else 
         {
              temp1 = start_ptr;
               while (temp1->nxt != NULL)
                 { 
                    temp2 = temp1; 
                    temp1 = temp1->nxt;
                 } 
              delete temp1;
              temp2->nxt = NULL;  
          }
   } 

