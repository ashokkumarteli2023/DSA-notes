// p-2 234. Palindrome Linked List
// 21. Merge Two Sorted Lists


// https://www.geeksforgeeks.org/check-for-balanced-parenthesis-without-using-stack/

// https://www.geeksforgeeks.org/given-a-string-print-all-possible-palindromic-partition/

// C++ program to print all palindromic partitions of a given string
#include<bits/stdc++.h>
using namespace std;

// A utility function to check if str is palindrome
bool isPalindrome(string str, int low, int high)
{
	while (low < high)
	{
		if (str[low] != str[high])
			return false;
		low++;
		high--;
	}
	return true;
}

// Recursive function to find all palindromic partitions of str[start..n-1]
// allPart --> A vector of vector of strings. Every vector inside it stores
//			 a partition
// currPart --> A vector of strings to store current partition
void allPalPartUtil(vector<vector<string> >&allPart, vector<string> &currPart,
				int start, int n, string str)
{
	// If 'start' has reached len
	if (start >= n)
	{
		allPart.push_back(currPart);
		return;
	}

	// Pick all possible ending points for substrings
	for (int i=start; i<n; i++)
	{
		// If substring str[start..i] is palindrome
		if (isPalindrome(str, start, i))
		{
			// Add the substring to result
			currPart.push_back(str.substr(start, i-start+1));

			// Recur for remaining remaining substring
			allPalPartUtil(allPart, currPart, i+1, n, str);
			
			// Remove substring str[start..i] from current
			// partition
			currPart.pop_back();
		}
	}
}

// Function to print all possible palindromic partitions of
// str. It mainly creates vectors and calls allPalPartUtil()
void allPalPartitions(string str)
{
	int n = str.length();

	// To Store all palindromic partitions
	vector<vector<string> > allPart;

	// To store current palindromic partition
	vector<string> currPart;

	// Call recursive function to generate all partitions
	// and store in allPart
	allPalPartUtil(allPart, currPart, 0, n, str);

	// Print all partitions generated by above call
	for (int i=0; i< allPart.size(); i++ )
	{
		for (int j=0; j<allPart[i].size(); j++)
			cout << allPart[i][j] << " ";
		cout << "\n";
	}
}

// Driver program
int main()
{
	string str = "nitin";
	allPalPartitions(str);
	return 0;
}






//remove all consecutive duplicate elements
void removeDuplicates(char* S)
{
    // When string is empty, return
    if (S[0] == '\0')
        return;
 
    // if the adjacent characters are same
    if (S[0] == S[1]) {
         
        // Shift character by one to left
        int i = 0;
        while (S[i] != '\0') {
            S[i] = S[i + 1];
            i++;
        }
 
        // Check on Updated String S
        removeDuplicates(S);
    }
 
    // If the adjacent characters are not same
    // Check from S+1 string address
    removeDuplicates(S + 1);
}
 


// prime number
// if (n <= 2)
//         return (n == 2) ? true : false;
//     if (n % i == 0)
//         return false;
//     if (i * i > n)
//         return true;

// product of 2 numbers
// C++ Program to find Product
// of 2 Numbers using Recursion
#include <bits/stdc++.h>
using namespace std;

// recursive function to calculate
// multiplication of two numbers
int product(int x, int y)
{
	// if x is less than
	// y swap the numbers
	if (x < y)
		return product(y, x);

	// iteratively calculate
	// y times sum of x
	else if (y != 0)
		return (x + product(x, y - 1));

	// if any of the two numbers is
	// zero return zero
	else
		return 0;
}

// Driver Code
int main()
{
	int x = 5, y = 2;
	cout << product(x, y);
	return 0;
}



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// // 21. Merge Two Sorted Lists
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
//         ListNode* result;
//         if(l1==NULL) return l2;
//         if(l2==NULL ) return l1;
        
//         if(l1->val < l2->val)
//         {
//             result=l1;
//             result->next=mergeTwoLists(l1->next, l2);
//         }
//         else{
//             result=l2;
//             result->next=mergeTwoLists(l1, l2->next);
//         }
//          return result;
//     }
// };


// // p-2 234. Palindrome Linked List
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode *slow = head, *fast = head, *prev, *temp;
//         while (fast && fast->next)
//             slow = slow->next, fast = fast->next->next;
//         prev = slow, slow = slow->next, prev->next = NULL;
//         while (slow)
//             temp = slow->next, slow->next = prev, prev = slow, slow = temp;
//         fast = head, slow = prev;
//         while (slow)
//             if (fast->val != slow->val) return false;
//             else fast = fast->next, slow = slow->next;
//         return true;
//     }
// };