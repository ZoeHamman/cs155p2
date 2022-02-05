/*
Some of the parts that rely on windows were added without running
becuase I have a macbook. It wouldn't let me run it so i just added them last.
So I am not sure if certain things have errors
so just let me know if there is an error and I will fix it.
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#include<math.h>
#include<windows.h>
using namespace std;

//This allows me to round the decimals to one place in Part 2
float roundToOneDec(float value)
{
float pow_10 = pow(10.0f, (float)1);
return round(value * pow_10) / pow_10;
}

int main()
{
//Part 1
//variables
double quarters, nickels, dimes;

//ask how many they have of quarters, nickels, and dimes
cout<<"Quarters: ";
cin>>quarters;

cout<<"Dimes: ";
cin>>dimes;

cout<<"Nickels: ";
cin>>nickels;

 //Calculate the amount of each coins
 quarters = quarters * 0.25;
 dimes = dimes * 0.10;
 nickels = nickels * 0.05;

 //output total amount
  cout<<endl<<"Quarters: $"<<quarters<<endl;
  cout<<"Dimes: $"<<dimes<<endl;
  cout<<"Nickels: $"<<nickels<<endl<<endl;
  cout<<"Total: $"<<1.00*(quarters + dimes + nickels);

  //This will clear the screen, change the color, and beep
  system("CLS");
  system("color 86");
  beep(880,100);

//remove before turning in
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

  //Part 2
  //variables
  int cookies;
  double sugar, butter, flour;

  //Ask how many cookies the user would like
  cout<<"How many cookies would you like to make? : ";
  cin>>cookies;

  //Calulations of each ingredient
sugar = (1.5/24) * cookies;
butter = 0.08333 * cookies;
flour = (2.5/24) * cookies;

  //How much of each ingredient they will need
  cout<<endl<<"Amount needed for "<<cookies<<" cookies"<<endl;
  cout<<"Sugar: "<<roundToOneDec(sugar)<<" Cups"<<endl;
  cout<<"Butter: "<<roundToOneDec(butter)<<" Sticks"<<endl;
  cout<<"Flour: "<<roundToOneDec(flour)<<" Cups";


//the outro
cout<<endl<<endl;
return 0;
}
