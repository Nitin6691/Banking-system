#include"header.h"                                                          //user defined header file
int cbank::deposite(int account)                                            //function definition starting
{
    if(account==acnum){
    int amount;
    cout<<"Enter the ammount you want to deposite: "<<endl;
    cin>>amount;
    balance=balance+amount;
    cout<<"your new balance is: "<<balance;
    return 1;
    }
}                                                                           //function definition ending
