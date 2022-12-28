#include <iostream>
using namespace std;

int main() {
    int earth_weight = 0;
    int planet_num = 0;
    cout<< "1. Mercury\n";
    cout<< "2. Venus\n";
    cout<< "3. Mars\n";
    cout<< "4. Jupiter\n";
    cout<< "5. Saturn\n";
    cout<< "6. Uranus\n";
    cout<< "7. Neptune\n";

    weight:
    cout<< "\nEnter your earth weight: ";
    cin>> earth_weight;
    cout<< "Enter the number of planet you wants to fight on: ";
    cin>> planet_num;

    if(planet_num == 1){
    cout<<"Your fight will be on planet Mercury.\n";
    cout<<"Your weight there is " << earth_weight * 0.38 << " kg\n";
    goto weight;
    }
    else if(planet_num == 2){
    cout<<"Your fight will be on planet Venus.\n";
    cout<<"Your weight there is " << earth_weight * 0.91 << " kg\n";
    goto weight;
    }
    else if(planet_num == 3){
    cout<<"Your fight will be on planet Mars.\n";
    cout<<"Your weight there is " << earth_weight * 0.38 << " kg\n";
    goto weight;
    }
    else if(planet_num == 4){
    cout<<"Your fight will be on planet Jupiter.\n";
    cout<<"Your weight there is " << earth_weight * 2.34 << " kg\n";
    goto weight;
    }
    else if(planet_num == 5){
    cout<<"Your fight will be on planet Saturn.\n";
    cout<<"Your weight there is " << earth_weight * 1.06 << " kg\n";
    goto weight;
    }
    else if(planet_num == 6){
    cout<<"Your fight will be on planet Uranus.\n";
    cout<<"Your weight there is " << earth_weight * 0.92 << " kg\n";
    goto weight;
    }
    else if(planet_num == 7){
    cout<<"Your fight will be on planet Neptune.\n";
    cout<<"Your weight there is " << earth_weight * 0.91 << " kg\n";
    goto weight;
    }
    else{
    cout<<"Invalid planet number.\n";
    goto weight;
    }
  
  return 0;

}