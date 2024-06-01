class Solution {
public:
    bool isPalindrome(int x) {
        long int num=x;      //copy x to num
        long int ans=0;
        if (x<0) return false;      //a negative number is not a palindrome (-121 != 121-)
        while (x!=0){
            ans=ans*10+x%10;      //updating ans
            x/=10;
        }
        if (num==ans){        //checking if the reverse of the number is equal to the original number
            return true;
        }
        else{
            return false;
        }
    }
};

//Time Complexity: O(N)
