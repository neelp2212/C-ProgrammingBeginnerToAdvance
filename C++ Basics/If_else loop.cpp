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
*/
int main()
{

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
    return 0;
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
