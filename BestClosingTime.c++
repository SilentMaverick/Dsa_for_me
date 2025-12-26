class Solution {
public:
    int bestClosingTime(string customers) {
    int penalty = 0;
    for(c:characters) if(c == 'Y') penalty++;
    int minpenalty = penalty , closingtime = 0;
    for(int i = 0 ; i < customers.size() ; i++){
        if(customers[i] == "Y") penalty--;
        else penalty++;
        if(penalty < minpenalty){
          minpenalty = penalty;
          besthour = i+1;
        }
      }
      return besthour;
    }
};
      
