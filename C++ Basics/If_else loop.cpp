#include <iostream>
using namespace std;

/*program for finding maximum of 2 nos using conditional statements

// Calculate discounted bill amount
void Discount(int amount)
{
    float disAmount;
    
    if(amount>=5000)
    {
        disAmount=amount-amount*20/100.0;
        cout<<disAmount;
    }
    else
    {
        if(amount>=2000 && amount<5000)
        {
            disAmount=amount-amount*10/100.0;
            cout<<disAmount;
        }
        else
        {
            disAmount=amount-amount*5/100.0;
            cout<<disAmount;
        }
    }
}
// Find suitable hour
void Working(int hour)
{
    if (hour >= 9 && hour <= 18)
        cout << "working";
    else
        cout << "leisure";
}

// Find maximum 3 number
void Max3(int a, int b, int c)
{

    if (a > b && a > c)
    {
        cout << a;
    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
}

// Find month name

void MonthName(int m)
{
    if(m==1)
        cout<<"jan";
    else if(m==2)
        cout<<"feb";
    else if(m==3)
        cout<<"mar";
    else if(m==4)
        cout<<"apr";
    else if(m==5)
        cout<<"may";
    else if(m==6)
        cout<<"jun";
    else if(m==7)
        cout<<"jul";
    else if(m==8)
        cout<<"aug";
    else if(m==9)
        cout<<"sep";
    else if(m==10)
        cout<<"oct";
    else if(m==11)
        cout<<"nov";
    else 
        cout<<"dec";
}
// Digit to word
void DigitToWord(int d)
{
     if(d==1)
        cout<<"one";
    else if(d==2)
        cout<<"two";
    else if(d==3)
        cout<<"three";
    else if(d==4)
        cout<<"four";
    else if(d==5)
        cout<<"five";
    else if(d==6)
        cout<<"six";
    else if(d==7)
        cout<<"seven";
    else if(d==8)
        cout<<"eight";
    else if(d==9)
        cout<<"nine";
    else if(d==0)
        cout<<"zero";
}


*/
int main()
{

    /*
    int x, y;

    cout << "enter 2 nos";
    cin >> x >> y;
    if (x > y)
    {
        cout << "maximum is" << x;
    }
    else
    {
        cout << "maximum is" << y;
    }
    */
   int day;
   cout << "Enter day number:" << endl;
   cin >> day;
   if (day == 1)
   {
       cout << "Sunday" << endl;
   }
   else if (day == 2)
   {
       cout << "Monday" << endl;
   }
   else if (day == 3)
   {
       cout << "Tuesday" << endl;
   }
   else if (day == 4)
   {
       cout << "Wednesday" << endl;
   }
   else if (day == 5)
   {
       cout << "Thursday" << endl;
   }
   else if (day == 6)
   {
       cout << "Friday" << endl;
   }
   else if (day == 7)
   {
       cout << "Saturday" << endl;
   }
   else
   {
       cout << "You have to enter number between 1 to 7";
   }
   return 0;
}
