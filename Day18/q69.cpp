 #include<iostream>
 using namespace std;
 int binarysearch(int arr[],int size,int key)
 {
    int start=0;
    int end=size-1;
    int mid;
    mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
 }
 int main()
{
    int evenarr[6]={10,20,30,40,50,60};
    int oddarr[5]={1,2,3,4,5};
    cout<<"The index of 4 is:"<<binarysearch(oddarr,5,4)<<endl;
    cout<<"The index of 30 is:"<<binarysearch(evenarr,6,30);
}