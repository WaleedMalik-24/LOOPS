#include<iostream>
using namespace std;
int main()
{
int choice;
	double total=1000.0;
	double balance;
	do{
	cout<<"---bank MENU----"<<endl;
	cout<<"1-CHECK BALANCE\n";
	cout<<"2-WITHDRAW MONEY\n";
	cout<<"3-DEPOSIT MONEY\n";
	cout<<"4-EXIT\n";
	cout<<"enter a choice";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"current bill=$";
		break;
		case 2:
			cout<<"input balance to withdraw=$";
			cin>>balance;
			if(balance>total)
			{
			cout<<"invalid";
			}else 
			{
			
			cout<<"withdrawn=$"<<balance;
			}
			break;
			case 3:
				cout<<"enter amount to deposit";
				cin>>balance;
				total+=balance;
				cout<<"deposited";
				break;
				default:
					cout<<"invalid option..try again";
				}
			}while(choice!=4);
			cout<<"exited the program";
			return 0;
			
	}
