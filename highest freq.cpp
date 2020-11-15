#include<unordered_map>
int highestFrequency(int arr[], int n)
{
   unordered_map<int,int>hm;
    for(int i=0;i<n;i++)
    {
        hm[arr[i]]++;
    }
    int max=hm[arr[0]];
    for(int i=0;i<n;i++)
    {
        if(hm[arr[i]]>hm[max])
        {
            max=arr[i];
            return arr[i];
        }
    }
    
}
