class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();
        if(n==1){
            if(arr[0] == 1){
                return 2;
            }else{
                return 1;
            }
        }

        int lim = n - 1;
        int ans;
        int i = 0;
        while(i < n){
            if(arr[i] < n && arr[i] != i && arr[i] > 0 && arr[i] != arr[arr[i]]){
                int temp = arr[arr[i]];
                arr[arr[i]] = arr[i];
                arr[i] = temp; 
            }else{
                i++;
            }
        }

        for(int i = 1; i < n; i++){
            if(arr[i]!=i){
                return i;
                
            }
        }

        int lastPlus1 = arr[n - 1] + 1;
        if(arr[0] == lastPlus1){
            return arr[0] + 1;
        }else{
            return lastPlus1;
        }
    }
};