#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int balance= 5000;
	int withdraw_amount, deposit_amount;
	int option;
	
	cout<< "Welcome to My Bank ATM\n";
	cout<<"1. Check Balance\n";
	cout<<"2.Withdraw Cash\n";
	cout<<"3.Deposite Cash\n";
	cout<<"4.EXIT\n";
	
	cout<<"slect an option\n";
	cin>>option;
	
	switch(option)
	{
		case 1:
			cout<<"Your current balance is:"<<balance<<endl;
			main();
			break;
			
			case 2:
				cout<<"Ente amount to withdraw:";
				cin>>withdraw_amount;
				
				if(withdraw_amount<=balance)
				{
					balance -= withdraw_amount;
					cout<<"Please take your cash. Your new balance is:"<<balance<<endl;
					
				}
				
				else
				{
					cout<<"Insufficient amount. YOur current amount is :"<<balance<<endl;
					
					
				}
				main();
				break;
				
				case 3:
					cout<<"Enter amount to deposite\n";
					cin>>deposit_amount;
					
					balance += deposit_amount;
					
					cout<<"Your new balance after deposite is:"<<balance<<endl;
					main();
					break;
					
					case 4:
						cout<<"Thank You For using my atm!!\n";
						break;
						
						default:
							cout<<"Please choose between 1-4\n";
							main();
	}
	
//	main();
}
