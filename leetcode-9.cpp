class Solution {
public:
    bool isPalindrome(long long int x){
    long long int number = x;
    long long int newNumber=0;
    
    if(x<0){
        return false;
    }

    while(number != 0){
        newNumber = newNumber*10 + number%10;
        number = number/10;
    }

    if(x==newNumber){

        return true;
    }
    else{

        return false;
    }

}
};
