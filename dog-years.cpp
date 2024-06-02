#include <iostream>

int main(){

    int dog_age, later_years;
    int first_years = 21;
    int human_age;

    std::cout<<"Enter the age of your dog(greater than 2 years): ";
    std::cin>>dog_age;

    later_years = (dog_age - 2) * 4;
    human_age = first_years + later_years;

    std::cout<<"Your dogs age is "<<human_age<<" in human years.\n";


}