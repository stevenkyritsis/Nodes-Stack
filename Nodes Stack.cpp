#include<iostream>
using namespace std;

struct node;
typedef node *Ptr;
struct node{
	char name[20];
	int age, id;
	float height;
	Ptr nxt;
};

Ptr start_ptr = NULL;
node *temp;

void createNode();
void AddNode();
void DisplayNode(struct node*);
void SearchNode();
void delete_end_node();
void delete_middle_node();

int main()
{
    int input;

do{
    cout << "What would you like to do?\n";
    cout << "1. Create a link-list.\n";
    cout << "2. Add a node.\n";
    cout << "3. Delete a node.\n";
    cout << "4. Search a node.\n";
    cout << "5. Modify a node.\n";
    cout << "6. Display a node.\n";
    cout << "7. EXIT\n";
    cin >> input;
    cout << endl;

    switch(input){
        case 1:{
        	createNode();
            break;
        }

        case 2:{
        	AddNode();
            break;
        }

        case 3:{
        	int input2;
        	cout << "Do you want to delete from the end or from the middle?\n";
        	cout << "1. End \t 2. Middle\n";
        	cin >> input2;
        	if (input2 == 1)
        	{
        		delete_end_node();
        	}
        	else if (input2 == 2)
        	{
        		delete_middle_node();
        	}
        	else
        	{
        		cout << "Error! Please enter either 1/2!\n";
        		cout << endl;
        	}
            break;
        }

        case 4:{
        	SearchNode();
            break;
        }

        case 5:{
            break;
        }

        case 6:{
        	DisplayNode(temp);
            break;
        }

        case 7:{
            return 0;
            break;
        }

        default: cout << "Error! Please enter 1 of the numbers above.\n";
    }
}while(input != 7);

    return 0;
}

void createNode()
{
	if(start_ptr != NULL)
	{
		cout << "Node already made. \n\n";
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

void AddNode()
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

void SearchNode()
{
	int target;
	int f = 1;
	cout << "Enter ID of user: \n";
	cin >> target;
	node * current = start_ptr;
	while(current != NULL)
	{
		if(current -> id == target)
		{
			f = 1;
			break;
		}	
		else
			f = 0;
		current = current -> nxt;
	}
	if(f == 0)
		cout << "Data Not Found! \n\n";
	else if(f == 1)
		cout << "Data Found! \n\n";
	
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
void delete_end_node()
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

void delete_middle_node()
{
	node *temp1, *temp2, *temp3;
	int input;

	cout << "Enter the id of the node you would like to delete:\n";
	cin >> input;
	cout << endl;

	if (start_ptr == NULL)
		cout << "This list is empty!\n";
	else
	{
		temp1 = start_ptr;
		while (input != temp1->id)
		{
			temp2 = temp1;
			temp1 = temp1 -> nxt;
		}
		temp3 = temp1 -> nxt;
		delete temp1;
		temp2 -> nxt = temp3;
	}
}
