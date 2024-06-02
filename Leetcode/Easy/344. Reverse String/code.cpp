//There are Three approaches to this question
//1. Using Built-in Function
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};

//Time Complexity: O(N)

//2. By creating a temporary variable to swap the elements using two pointer method
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end= s.size()-1;
        while (start<=end){
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
};

//Time Complexity: O(N)

//3. By using swap function to swap the elements
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end= s.size()-1;
        while (start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};

//Time Complexity: O(N)
