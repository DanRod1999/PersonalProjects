//classPrac.cpp 

#include <iostream> 

#include <string> 

using namespace std; 

  

class Car { 

        public: 

            string brand; 

            string model; 

            int year; 

}; 

  

int main(){ 

    Car car1; 

    car1.brand = "Ford"; 

    car1.model = "Mustang"; 

    car1.year = 1999; 

  

    cout<< car1.brand << " " << car1.model << " " << car1.year << "\n"; 

    return 0; 

} 