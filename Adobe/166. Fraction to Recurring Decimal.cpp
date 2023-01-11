class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        int isNegative = false;
        if((numerator < 0 && denominator > 0)||(numerator > 0 && denominator < 0)){
            isNegative = true;
        }
        
        //now take numerator and denominator +ve for calculation
        long long n = abs(numerator);
        long long d = abs(denominator);
    
        long long q = n / d;
        long long r = n % d;
        
        string ans = to_string(q);
        if(r==0) {
            if(isNegative){
            ans = "-" + ans;
            }
            return ans;
        }
        else ans.push_back('.');
        
        unordered_map<int,int> mp; //{remender,position}

        while(r != 0){
            r = r * 10;
            ans.push_back(r / d + '0');
            r = r % d;
            if(mp.count(r) > 0){
                ans = ans.substr(0,mp[r]) + "(" + ans.substr(mp[r]) + ")";
                break;
            }else{
                mp[r] = ans.size();
            }
        }
        
        if(isNegative){
            ans = "-" + ans;
        }
        return ans;
    }
};
