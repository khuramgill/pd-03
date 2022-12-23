#include<iostream>
using namespace std;
main(){
int sub01;
int sub02;
int sub03;
int sub04;
int sub05;
float sum;
float percentage;
string name;
cout <<" enter your name: ";
cin >> name;
cout <<"enter subjest 01 no. out of 100: ";
cin >> sub01;
cout << "enter subject 02 no. out of 100: ";
cin>> sub02;
cout << "enter subject 03 no. out of 100: ";
cin>> sub03;
cout <<"enter subject 04 no. out of 100: ";
cin >> sub04;
cout << "enter subject 05 no. out of 100: ";
cin >>sub05;
sum = sub01 + sub02 + sub03 + sub04 + sub05;
percentage = (sum/500) * 100;
cout << "your percentage is: "<< percentage;


}