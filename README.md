# my-learning-c-
my practice on c++

#include<iostream>
using namespace std;
class num2;//prototype
 class num1
 {
     private:
                float x;
    public:
            friend void compare (num1 obj1,num2 obj2);
            num1()
            {
                cin>>x;
            }
 };
  class num2
 {
     private:
                float y;
    public:
            friend void compare (num1 obj1,num2 obj2);
            num2()
            {
                cin>>y;
            }

 };
 void compare(num1 obj1,num2 obj2)
 {
     if(obj1.x>obj2.y)
     cout<<"num1 is greater than num2\n";
     else 
     cout<<"num2 is greater than or equal to num1\n";

 }
 int main()
 {
     class num1 number1;
     class num2 number2;
     compare(number1,number2);
 }

