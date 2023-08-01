#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
string name;
int acc_no;
double balance;
static map<int,pair<double,int>>mp;
public:
BankAccount(string s,int i);
void deposit(double a);
void deposit(double a,int b);
void withdraw(double a);
void withdraw(double a,int b);
bool check(int pass,int id);
void display();
~BankAccount();


};

#endif // BANKACCOUNT_H
