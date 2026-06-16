#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    int maxFreq = 0;
    int maxElement;
    for(int i=0;i<7;i++)
    {
        int count = 0;
        for(int j=0;j<7;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq;
}