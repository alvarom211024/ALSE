#include <iostream>
using namespace std;

double earth_year = 31557600;

double age_on_planet(double seconds, double orbital){
    return seconds / (earth_year * orbital);
}

int main(){

    double seconds = 1000000000;

    cout<<"Earth: "<<age_on_planet(seconds,1.0)<<endl;
    cout<<"Mercury: "<<age_on_planet(seconds,0.2408467)<<endl;
    cout<<"Venus: "<<age_on_planet(seconds,0.61519726)<<endl;
    cout<<"Mars: "<<age_on_planet(seconds,1.8808158)<<endl;
    cout<<"Jupiter: "<<age_on_planet(seconds,11.862615)<<endl;
    cout<<"Saturn: "<<age_on_planet(seconds,29.447498)<<endl;
    cout<<"Uranus: "<<age_on_planet(seconds,84.016846)<<endl;
    cout<<"Neptune: "<<age_on_planet(seconds,164.79132)<<endl;

}