//1528. Shuffle String
// 1678. Goal Parser Interpretation
// 1813. Sentence Similarity III by inserting an arbitary sentence
// 43. Multiply Strings
// calculator ii

// LCS https://leetcode.com/problems/longest-common-subsequence/description/

// https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1


// int ind3=str.find('.',a,n-a); //! working

// for(int i=0, j=s.length()/2 ; j<s.length() ; i++,j++)

// vowel check string="aeiouAEIOU"' & find();

// for(int i=0;i<s.length();) i+=3 , i++ etc.

// if(str.find(arr_string[i])!=string::npos) to check whether arr_string[i] is substring of str or not.

// isalnum -> Checks whether c is either a decimal digit or an uppercase or lowercase letter.

// stringstream
//   stringstream s(str); //used for breaking the words
//  string world; //to store indivisual words
//  int count=0;
//  while(s>>word) count++;// >> read something from the s
// << add a string to the s

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char aA = 'A';

    cout << isalpha(aA) << endl; // return if 'A'-'Z' 1 or 0

    cout << isalpha('z') << endl; // return if 'a'-'z' 2 or 0
    cout << isdigit('0') << endl; // return 1 or 0  -> '0'-'9'

    char bA = aA + 32;
    cout << bA << endl;

    string str = "a.s.h";
    // swap(str[1],str[3]); work
    reverse(str.begin(), str.end());
    cout << *(str.rbegin()) << endl; // last element str.back() also
    int ind = str.find('.');
    int ind1 = str.find('k'); // not -> -1
    cout << ind1 << endl;
    int ind2 = str.find('.', ind + 1); // start indx (ind+1)
    cout << "ind2 is:" << ind2 << endl;
    str.replace(ind, 1, "[.]");
    cout << str << endl;
    int a = 4;
    int n = str.size();
    // int ind3=str.find('.',a,n-a); //! working
    int ind3 = str.find('.', a);
    cout << ind3 << endl;
    string str2 = "clearOperation";
    cout << str2.back() << endl;
    str2.clear();
    cout << str2 + str << endl;

    // 1528. Shuffle String // swap s[i] and s[indices[i]], which corrects the place of item s[i] in original string
    // swap indices[i] and indices[indices[i]], which corrects the place of item indices[i] in indices array
    // i/p- codeleet o/p- leetcode;

    // 1678. Goal Parser Interpretation
    //  unordered_map<string, string> d =
    //      {
    //          { "(al)" , "al"},
    //          { "()" , "o" },
    //          { "G" , "G" },
    //      };
    //      string tmp = "", res = "";
    //      for(char c: s){
    //          tmp+=c;
    //          if(d.find(tmp)!=d.end()){
    //              res += d[tmp] ;
    //              tmp = "" ;
    //          }
    //      }

    //   1813. Sentence Similarity III by inserting an arbitary sentence
    //    while(start1<=end1&&start2<=end2)
    //         {
    //             if(s1[start1]==s2[start2]) // if start of both vectors are equal
    //             {
    //                 start1++; start2++;
    //             }
    //             else if(s1[end1]==s2[end2]) //if end of both vectors are equal
    //             {
    //                 end1--; end2--;
    //             }
    //             else  return false;
    //         }
    //         return true;
    // }

    // check which is longest/ max etc.
    // string longest=sentence1;
    //     string shortest=sentence2;

    //     if(sentence1.length()<sentence2.length())
    //     {
    //         longest=sentence2;
    //         shortest=sentence1;
    //     }

    // 43. Multiply Strings
    class Solution
    {
    public:
        string multiply(string num1, string num2)
        {
            if (num1 == "0" || num2 == "0")
                return "0";
            int l1 = num1.length(), l2 = num2.length();
            vector<int> v(l1 + l2, 0);
            int l3 = v.size();
            int i = l2 - 1;
            int pf = 0;
            while (i >= 0)
            {
                int ival = num2[i] - '0';
                i--;

                int j = l1 - 1;
                int carry = 0;
                int k = l3 - 1 - pf;

                while (j >= 0 || carry != 0)
                {
                    int jval = j >= 0 ? num1[j] - '0' : 0;
                    j--;

                    int prod = ival * jval + carry + v[k];
                    v[k] = prod % 10;
                    carry = prod / 10;
                    k--;
                }
                pf++;
            }

            // leading zeros
            string ans;
            bool flag = false;
            for (auto i : v)
            {
                if (i == 0 && flag == false)
                    continue;
                else
                {
                    flag = true;
                    char c = '0';
                    c += i;
                    ans += c;
                }
            }
            return ans;
        }
    };

    return 0;
}

// calculatpr ii
class Solution
{
public:
    int calculate(string s)
    {
        int n = s.size();
        stack<int> st;
        // char sign='+';
        for (int i = 0; i < n; i++)
        {
            int val = 0;
            while (isdigit(s[i]))
            {
                val = val * 10 + s[i] - '0';
                i++;
            }
            // st.push(val);
            if (s[i] == '+')
                st.push(val);
            else if (s[i] == '-')
                st.push(-val);
            else if (s[i] == '*')
            {
                st.push(val);
                int pop = st.pop();
                i++;
                int val1 = 0;
                while (isdigit(s[i]))
                {
                    val1 = val1 * 10 + s[i] - '0';
                    i++;
                }
                i--;
                st.push(pop * val1);
            }
            else if (s[i] == '/')
            {
                st.push(val);
                int pop = st.pop();
                i++;
                int val1 = 0;
                while (isdigit(s[i]))
                {
                    val1 = val1 * 10 + s[i] - '0';
                    i++;
                }
                i--;
                st.push(pop / val1);
            }
        }
        int ans = 0;
        while (!st.empty())
        {
            int pop = st.pop();
            ans += pop;
        }
        return ans;
    }
};