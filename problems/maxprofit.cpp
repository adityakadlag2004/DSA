#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
      //iterate through loop
      int minPrice = prices[0];
      int maxProfit = 0;
      for(int i = 0; i < prices.size(); i++){
      minPrice = min(minPrice,prices[i]);
      maxProfit = max(maxProfit,prices[i]-minPrice);
      }
  return maxProfit;
    }

    

int main(){
    
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;
    return 0;
}