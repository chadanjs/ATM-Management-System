#include<iostream>
#include<string>
using namespace std;

class ATM
{
private:

	int balance = 1000;
	string history = "";

	void CheckAccountBalance()
	{
		cout << "Checking account balance..." << endl;
		cout << "Your account balance is: $" << balance << endl;
		cout << "Account balance check complete." << endl;
	}

	void DepositMoney()
	{
		int amount;
		cout << "...Depositing Money..." << endl;
		cout << "Enter the amount to deposit: ";
		cin >> amount;
		balance = balance + amount;

		//History Updation
		history = history + "Deposited :$" + to_string(amount) + "\n";
		cout << "Transaction History: " << history << endl;

		cout << "Deposit Complete Successfully!" << endl;
		cout << "Your new account balance is: $" << balance << endl;
	}

	void WithdrawMoney()
	{
		int amount;

		cout << "...Withdrawing Money..." << endl;
		cout << "Enter the amount to withdraw: ";
		cin >> amount;
		if (amount <= balance)
		{
			balance = balance - amount;
			cout << "Withdrawal Complete Successfully!" << endl;
			cout << "Your new account balance is: $" << balance << endl;
			cout << "Thank you for using our ATM service!" << endl;

			//History Updation
			history = history + "Withdrawn :$" + to_string(amount) + "\n";
			cout << "Transaction History: " << history << endl;
		}
		else
		{
			cout << "Insufficient funds. Withdrawal failed." << endl;
			cout << "Your account balance is: $" << balance << endl;
		}
	}

	void SendMoney()
	{
		int AccountNumber;
		int amount;
		cout << "...Sending Money..." << endl;
		cout << "Enter the Account Number to send Money: ";
		cin >> AccountNumber;
		if (AccountNumber == 1001)
		{
			cout << "Account Holder : Numiphy" << endl;
		}
		else if (AccountNumber == 1002)
		{
			cout << "Account Holder : Numion" << endl;
		}
		else if (AccountNumber == 1003)
		{
			cout << "Account Holder : Krimson" << endl;
		}
		else if (AccountNumber == 1004)
		{
			cout << "Account Holder : John" << endl;
		}
		else
		{
			cout << "Invalid Account Number. Sending failed." << endl;
			return;
		}

		cout << "Enter the amount to send: ";
		cin >> amount;
		if (amount <= balance)
		{
			balance = balance - amount;
			cout << "Sending Amount Complete Successfully!" << endl;
			cout << "Your new account balance is: $" << balance << endl;
			cout << "Thank you for using our ATM service!" << endl;

			//History Updation
			history = history + "Sent :$" + to_string(amount) + "\n";
			cout << "Transaction History: " << history << endl;
		}
		else
		{
			cout << "Insufficient funds. Sending failed." << endl;
			cout << "Your account balance is: $" << balance << endl;
		}
	}

	void TransactionHistory()
	{
		cout << "Transaction History: " << endl;
		cout << history << endl;
	}
public:
	void DisplayMenu()
	{
		int option = 0;
		while (option != 6)
		{
			cout << "Welcome to the ATM!" << endl;
			cout << "Please select an option:" << endl;
			cout << "1. Check account balance" << endl;
			cout << "2. Deposit " << endl;
			cout << "3. Withdraw" << endl;
			cout << "4. Sending Amount" << endl;
			cout << "5. Transaction History" << endl;
			cout << "6. Exit" << endl;

			cout << "Enter your Task that you want to perform : ";
			cin >> option;

			if (option == 1)
			{
				CheckAccountBalance();
			}
			else if (option == 2)
			{
				DepositMoney();
			}
			else if (option == 3)
			{
				WithdrawMoney();
			}
			else if (option == 4)
			{
				SendMoney();
			}
			else if (option == 5)
			{
				TransactionHistory();
			}
		}
	}
};
int main()
{
	ATM atm;
	atm.DisplayMenu();
	return 0;
}