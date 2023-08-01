#include "BankAccount.h"
#include <bits/stdc++.h>
using namespace std;
map<int,pair<double,int>>BankAccount::mp;
BankAccount::BankAccount(string a,int i)
{
name=a;
cout<<"welcome Mr/,Ms/ "<<name<<endl;
acc_no=i;
mp[acc_no].second=1111;
}

void BankAccount::deposit(double a)
{
   mp[acc_no].first+=a;
   cout << "deposit successful"<<endl;
}
void BankAccount::deposit(double a,int id)
{
    if(mp[acc_no].first-a>=0){
   mp[id].first+=a;
   mp[acc_no].first-=a;

   cout << "The conversion was completed successfully"<<endl;
   }
   else{
    cout << "The conversion failed"<<endl;
   }

}


void BankAccount::withdraw(double a)
{

    if(mp[acc_no].first-a>=0){
    mp[acc_no].first-=a;
        cout << "Withdrawal successful" << balance<<endl;
    }
    else{

        cout<<"Cannot Withdraw Amount"<<endl;
}
}
void BankAccount::withdraw(double a,int id)
{

    if(mp[id].first-a>=0){
    mp[acc_no].first+=a;
    mp[id].first-=a;
        cout << "The conversion was completed successfully"<<endl;
    }
    else{

        cout<<"The conversion failed"<<endl;
}
}
bool BankAccount::check(int pass,int id){
if(mp[id].second==pass){
        return true;

}
else
    return false;

}


void BankAccount::display()
{
 cout<<"your current balance is "<<mp[acc_no].first<<endl;
}

BankAccount::~BankAccount()
{
cout<<"Thank you  Mr/,Ms/ "<<name<<endl;
cout<<"----------------------------------------------------------------"<<endl;
}
