#include<iostream>
using namespace std;
class time
{public:
    int hours,minutes,seconds;
public:
    time()
    {
       hours=0;
       minutes=0;
       seconds=0;
    }
    time(int hh,int mm,int ss)
    {
      hours=hh;
      minutes=mm ;
      seconds=ss;
    }
    add(time t1,time t2)
    {
        hours=t1.hours+t2.hours;
        minutes=t1.minutes+t2.minutes;
        seconds=t1.seconds+t2.seconds;
        seconds=seconds%60;
        minutes=(minutes+seconds/60)%60;
        hours=(hours+minutes/60);
    }
    void display(void)
    {
        cout<<"hours: "<<hours<<" minutes: "<<minutes<<" seconds:"<<seconds;
    }


};
int main()
{
    time t1(10,20 ,40),t2(12,40,35),t3;
    t3.add(t1,t2);
    t3.display();
}

