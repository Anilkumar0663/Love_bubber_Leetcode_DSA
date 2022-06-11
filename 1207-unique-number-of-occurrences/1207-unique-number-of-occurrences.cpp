class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         int arr2[1000], i=0, count=0, j=0, k=0;
    sort(arr.begin(),arr.end());
    
    while(i!=arr.size()){
        if(arr[i]==arr[j]){
            count++;
            i++;
            continue;
        }
        
        else if(arr[i]>arr[j]){
            arr2[k]=count;
            count=0;
            k++;
            j=i;
            continue;
        }
    }
    arr2[k]=count;
    
    i=0;
    while(i<=k){
        j=i+1;
        while(j<=k){
            if(arr2[i]==arr2[j]){
                return false;
            }
            j++;
        }
        i++;
    }
    return true;
}
};