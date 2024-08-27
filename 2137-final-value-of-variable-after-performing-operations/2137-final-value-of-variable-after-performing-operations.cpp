class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int pos = 0,neg=0;
        for(int i =0;i<operations.size();i++){

            if(operations[i]== "++X" || operations[i]=="X++"){
                pos++;
            }

            else{
                neg++;
            }
        }
        return pos-neg;
    }
};