#include<iostream>
#include <vector>
using namespace std;

int profit(vector<int> price){
int pri_size=price.size();

for (int i=0; i<pri_size;i++){
    for (int j=i+1;j<pri_size;j++){
        if (price[i]<price[j]&& max<price[i]-price[j]){
            max=price[i]<price[j];
        }
    }
}
return max;

}
int main (){

    vector<int> stock_price={7,1,5,3,6,4};
    cout<<profit(stock_price) ;

    return 0;
}




