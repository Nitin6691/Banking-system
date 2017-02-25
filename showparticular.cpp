#include"header.h"                                                                  //user defined header file
int cbank::showparticular(long int account)                                         //function definition starting
{
    if(account == acnum){
            cout<<"Name : "<<name<<endl;
            cout<<"Account number : "<<acnum<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Email: "<<email<<endl;
            cout<<"Account balance"<<balance<<endl;
            return 1;
    }
    else
        return 0;
}                                                                                   //function definition ending
