#include"header.h"                                                                           //user defined header file
int cbank::withdraw(long int account)                                                        //function definition starting
{
    if(account == acnum){
    int amount;
    cout<<"Enter the amount you want to withdraw: "<<endl;
    cin>>amount;
    if(amount>balance)
        cout<<"Insufficient fund."<<endl;
    else
    {
        cout<<"Transaction successful\nyour balance is: "<<endl;
        balance=balance-amount;
        cout<<"New balance is: "<<balance<<endl;
    }
return 1;
    }
    else
        return 0;
}                                                                                             //function defintion ending
