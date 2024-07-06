#include<iostream>
using namespace std;
class Bank{
	private:
		char name[40],actype[40];
		int balance , acno;
		
	public :
		Bank(){
			cout<<"Enter Accouont Name:";
			cin.getline(name,40);
			cout<<"Enter account type:";
			cin.getline(actype,40);
			cout<<"Enter account number:";
			cin>>acno;
			cout<<"Enter openning Balance:";
			cin>>balance;
		}
		void diposit (int amt){
			balance=balance+amt;
			cout<<"Balance after deposit :"<<balance<<endl;
		system("pause");
		}
		void withdraw (int amt){
			if(amt>balance)
			cout<<"Sorry your balance is les than amount ... "<<endl;
			else {
				balance=balance-amt;
				cout<<"Balance after withdraw :"<<balance<<endl;
			system("pause");
		}
			}
		void display(){
			cout<<"---------Account detail -----------"<<endl;
			cout<<"Acount Name:"<<name<<endl;
			cout <<"Account type:"<<actype<<endl;
			cout<<"Account No:"<<acno<<endl;
			cout<<"Current Balance:"<<balance<<endl;
			system("pause");
		}
};
main()
{
	Bank b1;
	int amount , choice;
	do{
		system("cls"); 
		cout<<"---------Main Menu--------------"<<endl;
		cout<<"1:-Deposit Money"<<endl;
		cout<<"2:-Withdraw Money"<<endl;
		cout<<"3:-Display Account Detail"<<endl;
		cout<<"4:-Quit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				cout <<"Enter amonut to deposit ";
				cin>>amount;
				b1.diposit(amount);
				break;
			case 2:
				cout <<"Enter amount to withdraw ";
				cin>>amount;
				b1.withdraw(amount);
				break;
			case 3:
				b1.display();
				break;
			case 4:
				exit(0);
			
				
				
		}
	} while(1);
}
