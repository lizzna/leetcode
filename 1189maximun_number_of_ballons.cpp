class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        unordered_map<char,int> d;
        for(int i=0;i<n;i++){
            d[text[i]]++;
        }
        d['l']=d['l']/2;
        d['o']/=2;
        int a=min(d['b'],d['a']);
        int b=min(d['l'],d['o']);
        return min(a,min(b,d['n']));
    }
};