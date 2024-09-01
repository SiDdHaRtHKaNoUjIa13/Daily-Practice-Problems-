class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";

   for(auto i : s){
     if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e'
        || i == 'i' || i == 'o' || i == 'u')
            {
                vowels+=i;
            }
        }

        //sort the vowels
        sort(vowels.begin(), vowels.end());

        //replace them one by one in original String
        int j = 0; // iterator for vowels string
        
        for(int i = 0; i<s.size(); i++){
     if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || 
        s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){

            s[i] = vowels[j];
            j++;
        }
     }

        return s;
    }
};