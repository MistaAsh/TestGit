#include <iostream>

using namespace std;

/*int LCM(int a, int b)
{
    if(a%b==0)  return a;
    else if(b%a==0) return b;

    else
    {
            
    }
}*/

int HCF(int a, int b)
{
    if (b == 0)
        return a;
    return HCF(b, a%b); 
}

int main()
{
    int n, lcm=1, hcf;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<endl<<endl<<"Enter the array: ";
    for(int i=0; i<n; i++)  
    {
        cin>>arr[i];

        if(i==0)    hcf=arr[i];

        //lcm=LCM(arr[i], lcm);
        hcf=HCF(arr[i], hcf);
    }

    cout<<"\nHCF is: "<<hcf;
    return 0;
}