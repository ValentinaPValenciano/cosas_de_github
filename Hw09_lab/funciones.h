#include<stdio.h> 
using namespace std;

float dydt(float y, float t) 
{ 
    return v; 
} 

float dvdt(float v, float t) 
{ 
    return -g; 
} 


float rungeKutta(float x0, float y0, float x, float h , dydt) 
{  
    float k1, k2, k3, k4, k5; 
   
    float y = y0; 
    for (int i=1; i<=n; i++) 
    {  
        k1 = h*dydt(x0, y); 
        k2 = h*dydt(x0 + 0.5*h, y + 0.5*k1); 
        k3 = h*dydt(x0 + 0.5*h, y + 0.5*k2); 
        k4 = h*dydt(x0 + h, y + k3); 
  
        y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);; 
  
        x0 = x0 + h; 
     
    return y; 
        
    double * y = new double[20]
        
        for (int i =0; i<2; i++)
            cout << y[i] << endl;
        return 0;
  
   
} 


//con ayuda de GeeksforGeeks
