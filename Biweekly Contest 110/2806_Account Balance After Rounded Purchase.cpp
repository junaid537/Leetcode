class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {//11
        int remaining=100-purchaseAmount;//89
        int leftiediv=remaining /10;//8
        int leftie=10*leftiediv;//80
        int rightie=leftie+10;//90
        if(abs(leftie-remaining) >rightie-remaining ){
            return rightie;
        }
        return leftie;
    }
};