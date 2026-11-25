class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long First = LLONG_MIN;
        long long Second = LLONG_MIN;
        long long Third = LLONG_MIN;
        for(int num : nums){
            if(num == First || num == Second || num == Third){
                continue; 
            }
            if(num > First){
                Third = Second;
                Second = First;
                First = num;
            }
            else if(num > Second){
                Third = Second;
                Second = num;
            }
            else if(num >Third){
                Third = num;
            }
        }
            if(Third == LLONG_MIN){
                return (int)First;
        }
        return (int)Third;
    }
};