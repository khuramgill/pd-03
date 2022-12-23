#include<iostream>
using namespace std;
main(){
float initialVelocity;
float finalVelocity;
float time;
float accerlation;
cout <<"Initial velocity: ";
cin >> initialVelocity;
cout <<"final Velocity: ";
cin >> finalVelocity;
cout << "Time: ";
cin >> time;
accerlation = (finalVelocity - initialVelocity) / time;
cout <<"Accerlation: "<< accerlation;


}