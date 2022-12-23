#include<iostream>
using namespace std;
main(){
float vegcoin;
float fruitcoin;
float vegetableprice;
float vegetablesold;
float fruitsold;
float fruitprice;
float total;
float rstotal;
cout <<"enter vegetable price: ";
cin >>vegetableprice;
cout <<"enter sold vegetables in kgs: ";
cin >>vegetablesold;
cout << "enter fruit price: ";
cin >>fruitprice;
cout <<"enter fruitsold in kgs: ";
cin >>fruitsold;
vegcoin = vegetableprice * vegetablesold;
fruitcoin = fruitsold * fruitprice;
total = vegcoin + fruitcoin;
rstotal = total / 1.94;
cout << "Rs total: " <<rstotal;


}