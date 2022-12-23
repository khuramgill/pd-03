#include<iostream>
using namespace std;
main(){
string name;
float adult;
float child;
float soldAduldTickets;
float soldChildTickets;
float donation;
float TotalAmount;
float afterdonation;
cout <<"enter movie name: ";
cin >>name;
cout << "Adult ticket price: ";
cin >>adult;
cout <<"Child ticket price: ";
cin >>child;
cout <<"enter no. of adult tickets sold: ";
cin >>soldAduldTickets;
cout <<"enter no. of child tickets sold: ";
cin >>soldChildTickets;
cout <<"enter percentage to donated: ";
cin >> donation;
TotalAmount = (adult *  soldAduldTickets) + (child * soldChildTickets);
cout <<"grand total amount: "<<TotalAmount<<endl;
afterdonation = TotalAmount - (TotalAmount/100 * donation);
cout <<"amount after donation: "<<afterdonation;




}