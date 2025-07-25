
#include <iostream>
using namespace std;

class Car{ 
private: 
        string brand;
        string model;
        float price;
        int mileage;

        public:
                Car(string b, string m, float p, int mil){ //constructor with parameters
                        brand  = b;
                        model = m;
                        price = p;
                        mileage= mil;
                }
                void display (){
                        cout<<"Car Brand"<<brand<<endl;
                        cout<<"Car Model"<<model<<endl;
                        cout<<"Car Price:$"<<price<<endl;
                        cout<<"Car Mileage"<<mileage<<"miles"<<endl;

                }
                void drive(int distance){
                        mileage += distance;
                        cout<<"Driven"<<distance<<endl;
                        cout<< "NewMileage: "<<mileage<<"miles"<<endl;
                }

};
int main (){
        Car myCar("Toyota", "Corolla", 20000, 500);
     
        cout<<"Initial Car detaails"<<endl;
        myCar.display();


        //simulate driving the car 150 miles
        cout<<"Simulate driving for 150 miles:"<<endl;
        myCar.drive(150);
        cout<<"new milage"<<endl;

        //simulate driving the car 300 miles
        cout<<"Simulate driving for 300 miles:"<<endl;
        myCar.drive(300);
        cout<<"updated milage"<<endl;


        return 0;
}