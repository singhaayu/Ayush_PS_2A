 vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        // code here
        vector<long long> v;
        vector<long long> v1;
        for(int i =0;i<n;i++){

            if(arr[i]<k){
                v.push_back(arr[i]);
            }
        }

        for(int i =0;i<v.size();i++)
        {
            int k =v[i];
            while(k>0){
                int ld1 =k%10;
                int ld2 =k%100;
                if(abs(ld1-ld2)==1){
                    v1.push_back(k);
                }
            }
        }
        return v1;
    }
