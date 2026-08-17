// #include <iostream>
// using namespace std;
// class shoes {
//     string brand;
//     int price;
// public:
//   shoes(string b,int p) 
//   { brand = b;
//     price = p;
// }    
//  void display() {
//     cout << "brand of shoes:" << brand << endl;
//     cout << "price of shoes:" << price << endl;
//  }
// };
// int main() {
//     shoes s1("nike",5000);
//     shoes s2("woodland",68900);
//     s1.display(); 
//     s2.display() ;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class shoes{
//     string brand;
//     int price;
// public:
//   shoes(string b , int p) {
//     brand = b;
//     price = p;
//   }    
//   shoes( shoes &s) {
//     brand = s.brand;
//     price = s.price;
//   }
//   void display() {
//     cout << "brand of shoes:" << brand << endl;
//     cout << "price of shoes:" << price << endl;
//   }
// };
// int main() {
//     shoes s1("NIKE" , 25000);
//     shoes s2 = s1;
//     cout << "original" << endl;
//     s1.display();
//     cout << "copied" << endl;
//     s2.display();
// }



#include <iostream>
using namespace std;
class shoes {
    string brand;
    int price; 
public:
  shoes(string b,int p) {
    brand = b;
    price = p;
  } 
  shoes() : shoes("NIKE", 25000){

  } 
  void display() {
    cout << "brand of shoes:" << brand << endl;
    cout << "price of shoes:" << price << endl;
  }  
};
int main() {
    shoes s1;
    shoes s2("woodland", 24000);
    cout << "shoes 1:" << endl;
    s1.display();
    cout << "shoes 2:" << endl;
    s2.display();

    return 0;
}