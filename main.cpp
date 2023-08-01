#include <bits/stdc++.h>
#include "BankAccount.h"
using namespace std;

int main()
{

for(int o=1;o<=5;o++){
string n;
int q;
        cout<<"please enter your name"<<endl;cin>>n;
        cout<<"please enter your id "<<endl;cin>>q;
BankAccount client(n,q);
cout<<" enter 1 to deposit and 2 to withdraw and 3 to transfer "<<endl;
int x;
cin>>x;
if(x==1){
        cout<<"please enter the money you want to deposit "<<endl;
double y;cin>>y;
client.deposit(y);
}
else if(x==2){
cout<<"please enter the money you want to withdraw "<<endl;
double y;cin>>y;
client.withdraw(y);
}
else if(x==3){
    cout<<"please enter id you want to exchange money with "<<endl;
    int id;cin>>id;
    cout<<"enter the password "<<endl;
    int p;cin>>p;
   if(client.check(p,id)){
    cout<<"password valid enter 1 to deposit and 2 withdraw"<<endl;
    int i;cin>>i;
    if(i==1){
cout<<"please enter the money you want to deposit "<<endl;
double y;cin>>y;
client.deposit(y,id);
}
else if(i==2){
cout<<"please enter the money you want to withdraw "<<endl;
double y;cin>>y;
client.withdraw(y,id);
}
else{
    cout<<"the number you are entered is not valid "<<endl;
}


   }
   else{
    cout<<"Wrong password"<<endl;
   }

}



else{
    cout<<"the number you are entered is not valid "<<endl;
}
client.display();

}

 return 0;}
