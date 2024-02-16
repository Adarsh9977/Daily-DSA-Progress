long long toh(int n, int from, int to, int aux) {
        // Your code here
        if(n==0)return 0;
        if(n==1){
            cout<<"move disk "<< n <<" from rod "<< from << " to rod "<<to<<endl;
            return 1;}
        long long cnt=0;
        cnt = toh(n-1, from, aux, to);
         cout<<"move disk "<< n <<" from rod "<< from << " to rod "<<to<<endl;
        cnt++;
        cnt+=toh(n-1, aux , to, from);
        
        
        return cnt;
    }

