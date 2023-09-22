#include<iostream>
using namespace std;
#include<map>

//right code
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       map<char,int> ourMap;
       for(int i=0;i<s.length();i++){
           if(ourMap.count(s[i])>0){
               ourMap[s[i]]+=1;
           }else{
               ourMap[s[i]] = 1;
           }
       }
       for(int i=0;i<ourMap.size();i++){
           if(ourMap[s[i]]==1){
               return s[i];
           }
       }
       for(int i=0;i<s.length();i++)
       return '$';
    }

};

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
