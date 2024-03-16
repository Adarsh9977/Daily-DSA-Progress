
class Solution {
public:
    typedef long long ll;

    bool possible(vector<int>& batteries, ll mid, int n){
        ll target=mid*n;
        ll sum=0;
        for(int i=0;i<batteries.size();i++){
            sum += min((ll)batteries[i], mid);
            if(sum>=target){
                return true;
            }
        }
        return target<=0;
    }


    long long maxRunTime(int n, vector<int>& batteries) {
        ll l=*min_element(batteries.begin(), batteries.end());
        ll sum=0;
        for(auto& mins:batteries){
            sum+=mins;
        }
        ll r=sum;

        ll result=0;
        while(l<=r){
            ll mid=l+(r-l)/2;

            if(possible(batteries, mid,n)){
                result=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return result;
    }
};