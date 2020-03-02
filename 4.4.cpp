#include<iostream>
using namespace std;
class complexnum
{
    float real;
    float complex;
  public:
      setComplex(float x,float y)
      {
          real=x;complex=y;
      }
      void add(complexnum c1,complexnum c2);
      void subtract(complexnum c1,complexnum c2);
      void multiply(complexnum c1,complexnum c2);
      void divide(complexnum c1,complexnum c2);
      void display(void)
      {
          cout<<"realpart: "<<real<<"complexpart: "<<complex;
      }

};
void complexnum::add(complexnum c1,complexnum c2)
{
    real=c1.real+c2.real;
    complex=c1.complex+c2.complex;


}
int main()
{
  complexnum c1,c2,c3;
  c1.setComplex (4,5);
  c2.setComplex(5,6);
  c3.add(c1,c2);
  c3.display();
}
