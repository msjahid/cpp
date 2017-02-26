#include <iostream>
using namespace std;
class Bicycle{
public:
    int cadence = 0;
    int speed = 0;
    int gear = 0;
void changeCadence(int newValue){
cadence = newValue;
}
void changeGear(int newValue){
gear = newValue;
}
void speedUp(int increment){
speed = speed + increment;
}
void applyBrakes(int decrement){
speed = speed - decrement;
}
void printStates(){
cout<<"cadence: " << cadence << " speed: " << speed << " gear: " << gear <<endl;
}
};
int main()
{
        Bicycle bike1;
        Bicycle bike2;
        bike1.changeCadence(50);
        bike1.speedUp(10);
        bike1.changeGear(2);
        bike1.printStates();

        bike2.changeCadence(50);
        bike2.speedUp(10);
        bike2.changeGear(2);
        bike2.changeCadence(40);
        bike2.speedUp(10);
        bike2.changeGear(3);
        bike2.printStates();
}

