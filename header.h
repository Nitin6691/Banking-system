#include<iostream>                                              //header file
#include<stdlib.h>                                              //header file
using namespace std;                                            //standard namespace

class cbank                                                     //starting class "cbank"
    {
        private:
            string name;                                        //private data member
            long int acnum;                                     //private data member
            string address;                                     //private data member
            long int mob;                                       //private data member
            string email;                                       //private data member
            int balance;                                        //private data member


        public:
            void newac();                                       //public member funtion
            void showall();                                     //public member funtion
            int showparticular(long int);                       //public member funtion
            int withdraw(long int);                             //public member funtion
            int deposite(int);                                  //public member funtion
            int checkbalance(long int);                         //public member funtion

    };                                                          //ending class

