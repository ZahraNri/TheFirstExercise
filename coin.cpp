#include <iostream>
using namespace std;

const int num_coins = 5;
const int coins[num_coins] = { 1,2,5,10,50 };

int calcWays(int input) {
    int count = 0;
    for (int i = 0; i < num_coins; i++) {
        float temp = input % coins[i];
        if (temp == 0) {
            count++;
        }
        else if(input / coins[i] > 0) {
            count += calcWays(input / coins[i]);
        }
    }
    return count;
}

int main(){
    
    int input;
    cout<<"N ra vared konid: ";
    cin >> input;

    std::cout<<"tedade halatha: "<< calcWays(input);
}
