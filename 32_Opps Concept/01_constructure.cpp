#include <iostream>  
using namespace std;  

class car {
    private:
        string model ;
        int price ;
    public : 
         car (string m , int p){
            model = m ;
            price = p ;
        }
         display(){
            cout << "car model is " << model << endl;
            cout << "car price is " << price << endl;
        }


};

int main()  
{  
   
   car car1("tata", 15000);
   car car2("maruti", 2300);
    
    car1.display();
    car2.display();
    


// cout << r1.age << endl ;

    return 0 ;
}  