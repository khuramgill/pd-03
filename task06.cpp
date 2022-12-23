#include<iostream>
using namespace std;
main(){
int bagsize;
int cost;
float area;
float costPerpound;
float costperArea;
cout << "enter bag size in pounds: ";
cin >>bagsize;
cout <<"enter cost of the bag: ";
cin >>cost;
cout <<"enter area of the bag in square feet: ";
cin >>area;
costPerpound = cost / bagsize;
costperArea = cost /area;
cout <<"cost of the fertilizer per pound: "<<costPerpound <<endl;
cout <<"cost of the fertilizer area per square feet: "<<costperArea;

}