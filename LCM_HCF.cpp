#include <iostream>

using namespace std;

int HCF(int a, int b)
{
    if (b == 0)
        return a;
    return HCF(b, a%b); 
}

int LCM(int a, int b)
{
    return (a*b)/HCF(a, b);
}

int main()
{
    int n, lcm, hcf;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<endl<<endl<<"Enter the array: ";
    for(int i=0; i<n; i++)  
    {
        cin>>arr[i];

        if(i==0)    hcf=arr[i];

        lcm=LCM(arr[i], lcm);
        hcf=HCF(arr[i], hcf);
    }

    cout<<"\nHCF is: "<<hcf;
    cout<<"\nLCM is: "<<lcm;
    return 0;
}