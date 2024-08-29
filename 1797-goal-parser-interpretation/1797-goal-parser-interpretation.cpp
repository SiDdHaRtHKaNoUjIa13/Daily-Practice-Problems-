class Solution {
public:
    string interpret(string command) {
        string s;
        int n = command.size();
        int i=0;
        while(i < n)
        {
            if(command[i] == 'G')
            {
                s.push_back('G');
                i++;
            }
            else if(command[i] == '(' && command[i+1] == ')')
            {
                s.push_back('o');
                i = i + 2;
            }
            else
            {
                s.push_back('a');
                s.push_back('l');
                i = i + 4;
            }
        }
        return s;
    }
};