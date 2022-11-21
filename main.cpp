#include <iostream>
#include<conio.h>
using namespace std;

 int main()

{
    double weight , height ,bmi;
cout<<"pay attention!!! this bmi not suitable for people under 19 years old and pregnantwoman and azlani athletes and people   with disease and disabilities!";
   cout<<  "enter your weight (kilogram) : " ;
   cin>>weight;

   cout<< "Enter your height (metr) : ";
   cin>>height;
   bmi=(weight)/(height*height);
   cout<<endl;


  if(bmi<18.5)
   {
       cout<< "underweight"<<endl;

   }

   else if(18.5 <= bmi <=24.9)
   {
       cout<<"your bmi is : "<<bmi<< "     "<< "your statue is :  Normal "<<endl;
   }

   else if(25.0<=bmi<=29.9)
    {
        cout<<"your bmi is : "<<bmi<< "      " <<"your statue is :overweight"<<endl;
    }

   else if(30<=bmi)
    {
        cout<<"your bmi is : "<<bmi<< "       " <<"your statue is : obese" <<endl;
    }

    getch();
    return 0;
}
