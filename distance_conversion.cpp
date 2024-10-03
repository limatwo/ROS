/* 
program description:
Input : Distnace in miles
output : distance in kM
conversion formula:
distnace_KM = distance_MILE* 1.609
*/

#include <iostream>
// you can use --> using namespace std but this is bad practice you need to do clean code 
// 

int main()
{
    float distance_mile = 0.0;
    std::cout << "please enter distance in mile \n";
    std::cin>> distance_mile; 
    float distance_km = distance_mile * 1.609;
    std::cout << "distance in km" << distance_km;
    return 0;
}
