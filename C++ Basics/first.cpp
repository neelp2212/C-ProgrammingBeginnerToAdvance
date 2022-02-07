#include <iostream>
#include <math.h>
using namespace std;

// Coding Exe 2- 
int CalculateDistance(int u,int v,int a)
{
    float distance;    
    distance=(v*v-u*u)/(2*a);    
    return distance;    
}
// Coding Exe 3 - 
int SimpleInterest(int P,int T,int R)
{
    float SI;    
    SI=P*T*R/100.0;
    return SI;
}
// Coding Exe 4 -
float CylinderVolume(int radius,int height)
{
    float volume;    
    volume=3.14*radius*radius*height;    
    return volume;
} 

int main()
{
    // Add two numbers
    /*int a,b,c;
    cout << "Enter two numbers to add" << endl;
    cin >> a >> b;
    c = a + b;
    cout << c;*/

    /*
    string name;
    cout << "Can you please tell me your name:-" << endl;
    cin >> name;
    cout << "Good morning" << name << endl;

    return 0;
    */

    // Coding exe - 1
    /*
    int b=7,h=5;
    float area;
    area=(float)b*h/2;
    cout<<area;   
   int area,breadth,height;
   area = (breadth*height)/2;
   cout << "Enter breadth and height: " << endl;
   cout << "Breadth: " << endl;
   cin >> breadth;
   cout << "Height: " << endl;
   cin >> height;
   cout << area << endl;
   CalculateDistance(2,3,4);
   */
}