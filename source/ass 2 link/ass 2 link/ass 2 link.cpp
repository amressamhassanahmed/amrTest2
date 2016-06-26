// ass 2 link.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"
#include <iostream>
#include "queue.h"
#include "global.h"
#include "stack.h"
#include <string>
using namespace std;
int se(Queue Q)
{
int d=0;
	Customer c;
while (!QueueEmpty(& Q)){
				dequeue(&Q,&c);
				d++;
			}
return d;

}

int main()


{

	system("CLS");
	Queue p;
	Customer c;
	Stack stack;
	CreateQueue(&p);
	CreateStack(&stack);


	cout << "1. Add a New Customer.\n2. Serve a Customer.\n3. How many Customers are waiting?\n4. Display Customers Information.\n5. Display Customers information in a \most-recent Order.\n6. Exit\n";
	int x;
	int y = 0;
	cout << "please enter = ";
	cin >> x;
	while (x != 7){
		switch (x)
	{
		case 1:
			if (!QueueFull(&p)){
			system("CLS");

			
			printf("enter your name: ");
			scanf("%s", c.name);
			printf("enter your id:");
			scanf("%d", &c.id);
			printf("enter your model year:");
			scanf("%d", &c.ModelYear);
			Enqueue(&p, c);

				cout << "\n done \n";
			}
			else {
				printf("\n Sorry!! Full Stack");
			}
			break;
		case 2:
			system("CLS");
			if (!QueueEmpty(&p)){
				dequeue(&p,&c);
				cout << "Customer name is " << c.name;
				cout << "\nCustomer id is " << c.id;
				cout << "\nCustomer year is " << c.ModelYear << "\n\n\n";
			}

			else{
				cout << " No Customer\n\n";
			   }
			break;

		case 3:
			system("CLS");
			int size;
			size = QueueSize(&p);
			if (size == 0)
				cout << "\n no custmers\n";
			system("CLS");
			cout << "Number of Customers = " <<size<<"\n\n\n";

			break;
		case 4:
			int s;
			size = QueueSize(&p);
			if (size != 0){
				Customer copy[50];
				while (!QueueEmpty(&p))
				{
					system("CLS");

					for ( s= 1; s <= size; s++){
						
						dequeue(&p, &copy[s-1]);
						cout << "customer " <<s << "\n";
						cout << "Customer name is " << copy[s-1].name;
						cout << "\nCustomer id is " << copy[s-1].id;
						cout << "\nCustomer year is " << copy[s-1].ModelYear << "\n\n";
					}

				}
				int l = 0;
				while (!QueueFull(&p)&& s>l+1){
				Enqueue(&p, copy[l]);
					l++;
				}
			}
			else
				cout << "\n  no customers \n";

			

			break;




		case 5:
			{
			system("CLS");
			int sizee=0,i=0;
			sizee = QueueSize(&p);
			if (sizee != 0){
				Customer c[50];
				while (!QueueEmpty(&p))
				{
					dequeue(&p, &c[i]);
					i++;
				}
			int	i = 0;
				while (!QueueFull(&p) &&  sizee>i)
				{
					Push(c[i], &stack);
					Enqueue(&p, c[i]);
					i++;
				}

				
				while (!StackEmpty(&stack)){
					for (int s = 0; s < sizee; s++){
						Pop(&c[s], &stack);
						cout << "customer " << s+1 << "\n";
						cout << "Customer name is " << c[s].name;
						cout << "\nCustomer id is " << c[s].id;
						cout << "\nCustomer year is " << c[s].ModelYear << "\n\n";
					}
				}
				
			}
			else
			{
				cout << "\n no custmers\n";
			}
			break;

			}
	case 6:{
		
		y=	se(p);
		cout<<y;
		system("pause");
		break;
		}

		}
	
	cout << "1. Add a New Customer.\n2. Serve a Customer.\n3. How many Customers are waiting?\n4. Display Customers Information.\n5. Display Customers information in a \most-recent Order.\n6. Exit\n";
	cout << "please enter = ";
	cin >> x;
}

system("pause");
}
