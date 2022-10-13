#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int neg[5];
    int pos[5];
    int k=0,p=0;
    int a;
    int sum1=0,sum2=0;

    for (int  i = 0; i <10; i++)
    {
        cout<<"ENTER HEIGHT OF WRESTLER "<<i+1<<" : ";
        cin>>arr[i];
        cout<<endl;
    }

    for (int j = 0; j < 10; j++)
    {
        if (arr[j]<0)
        {
            neg[k]=arr[j];
            k++;
        }
        else
        {
            pos[p]=arr[j];
            p++;
        }
    }

    cout<<"The wrestlers with the following heights are selected : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        a=(65-(neg[i]));
        cout<<a<<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        sum1+=neg[i];
        sum2+=pos[i];
    }

    cout<<"+ve Height Sum :  "<<sum2<<endl;
    cout<<"-ve Height Sum :  "<<sum1<<endl;

    return 0;
}
