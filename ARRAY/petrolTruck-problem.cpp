//code for finding how much distance an truck can travel if it is tarvelling with milage 
//of 1km and petrol bunks are kept at certain distabnce

#include<iostream>
#include<queue>

using namespace std;

int petrol(petrolPump p[],int n)
{
    int deflicit=0;
    int balance=0;
    int start=0;
    
    for(int i=0;i<n;i++)
    {
        balance=p[i].petrol-p[i].distance;
        if(balance<0)
        {
            deflicit+=balance;
            start=i+1;
            balance=0;
        }
    }
    
    if(deflicit+balance<0)

        return start;
    
    else{
        return -1;
    }
}
