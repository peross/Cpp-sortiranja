#include <iostream>

using namespace std;

void selectionSort(int A[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        int iMin = i;
        for(int j=i+1;j<n;j++)
        {
            
            if(A[j]<A[iMin])
                iMin = j; //azuriraj index najmanjeg elemneta
        }
        //zamjena mjesta clanovima niza
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main()
{
    int br;
    cout<<"Unesite broj clanova niza: ";
    cin>>br;
    int A[br];
    

    for(int i=0;i<br;i++)
    {
        cout<<"Unesite "<<i+1<<". clan"<<endl;
        cin>>A[i];
    }
    //ispisi sortirani niz
    selectionSort(A,br);
    cout<<"Sortirani niz glasi: ";
    for(int j=0;j<br;j++)
    {
        cout<<A[j]<<" ";
    }
    cout<<endl;
    return 0;
}