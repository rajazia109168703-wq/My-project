#include <iostream>
using namespace std;
int main() 
{
float salary1, salary2, salary3, bonus1,bonus2,bonus3,firsttotal_salary, second_total_salary,third_total_salary, bonus_rate,total_salary,second_salary;
cout<<"enter  first salary"<<endl;
cin>>salary1;
cout<<"enter second salary"<<endl;
cin>>salary2;
cout<<"enter third salary"<<endl;
cin>>salary3;
cout<<"enter bonus rate" <<endl;
cin>>bonus_rate;
bonus1=salary1*bonus_rate;
bonus2=salary2*bonus_rate;
bonus3=salary3*bonus_rate;
firsttotal_salary=bonus1+salary1;
second_total_salary=bonus2+salary2;
third_total_salary=bonus3+salary3;
cout<<"first total salary="<<firsttotal_salary<<endl;
cout<<"second total salary="<<second_total_salary<<endl;
cout<<"third total salary="<<third_total_salary<<endl;
total_salary =firsttotal_salary +second_salary+third_total_salary;
cout<<"total salary is="<<total_salary<<endl;
    return 0;
    }