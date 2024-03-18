class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int m=flowers.size();
        int n=people.size();
        vector<int> starting;
        vector<int> ending;
        for(int i=0;i<m;i++){
            starting.push_back(flowers[i][0]);
            ending.push_back(flowers[i][1]);
        }
        sort(starting.begin(), starting.end());
        sort(ending.begin(), ending.end());
        vector<int> result;

        for(int i=0;i<n;i++){
            int time=people[i];

            int boomed= upper_bound(starting.begin(), starting.end(), time)-starting.begin();
            int died = lower_bound(ending.begin(), ending.end(), time)-ending.begin();
            result.push_back(boomed-died);
        }
        return result;
    }
};