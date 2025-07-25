#include<iostream>
using namespace std;
int main(){
float weight,BMI,height;
cout<<"enter weight in kilograms"<<endl;
cin>>weight;
cout<<"enter height in meters"<<endl;
cin>>height;
BMI = weight/height*height;

if(BMI>0&&BMI>=18.5){
cout<<"Underweight"<<endl;
}

else if(BMI<=18.5 &&BMI>=24.9){
cout<<"Normal weight"<<endl;
}

else if(BMI<=25 &&BMI>=29.9){
cout<<"Overweight"<<endl;
}
else{
  cout<<"Obesity"<<endl;
return 0;
}