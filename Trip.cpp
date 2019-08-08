#include <iostream>
#include <iomanip>
/* Akhil Humane
PRN : 10303320171124510016*/
using namespace std;
float round(float avg)
{
    float value=(int)(avg*100+0.5);
    return (float)value/100;
}
int main() {
	
	while(1)
	{
	    
	    long int n;
	    cin>>n;
	    repeat:
	    float sum=0,avg=0;
	    float a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    avg=avg+a[i];
	    }
	    avg=avg/n;
	    avg=round(avg);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>avg)
	        {
	          sum=sum+(a[i]-avg);
	        }
	    }
	    cout<<sum<<endl;
	    cin>>n;
	    if(n!=0)
	     goto repeat;
	    else  break;
	}
	return 0;
}
