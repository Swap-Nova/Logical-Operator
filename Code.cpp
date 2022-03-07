#include<iostream>
using namespace std;
int main() {
    bool wear_coat;
    double temperature;
    int wind_speed;

    const int wind_speed_for_coat=25;
    const double temperature_for_coat=45;
    cout<<boolalpha;

    cout<<"Enter the current temperature in (F): ";
    cin>>temperature;
    cout<<"Enter windspeed in (mph): ";
    cin>>wind_speed;

    wear_coat=(temperature<temperature_for_coat || wind_speed>wind_speed_for_coat);
    cout<<"Do you need to wear a coat using OR? "<< wear_coat <<endl;

    wear_coat=(temperature<temperature_for_coat && wind_speed>wind_speed_for_coat);
    cout<<"Do you need to wear a coat using AND? "<< wear_coat <<endl;

    return 0;
}
