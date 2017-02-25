#include"header.h"                                                                //user defined header file
void cbank::newac()                                                               //fuction definition starting
{
    cout<<"Enter the name of the customer: "<<endl;
    getline(cin,name);
    getline(cin,name);
    cout<<"Enter account no.: "<<endl;
    cin>>acnum;
    cout<<"Enter the address of the customer: "<<endl;
    getline(cin,address);
    getline(cin,address);
    cout<<"Enter email of the customer: "<<endl;
    getline(cin,email);
    cout<<"Enter balance in account of customer: "<<endl;
    cin>>balance;
}                                                                                 //ending function defintion
