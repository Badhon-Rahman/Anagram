#include <bits/stdc++.h>

using namespace std;

bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2){
        return false;
    }

    for(int i = 0; i < n1; i++){
        str1[i] = tolower(str1[i]);
    }
    for(int i = 0; i < n2; i++){
        str2[i] = tolower(str2[i]);
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 != str2){
        return false;
    }
    else{ return true; }
}

int main()
{
    string str1 = "aBaBB";
    string str2 = "ABbAb";
    if (areAnagram(str1, str2))
        cout << "Those string are anagram.";
    else
        cout << "The two strings are not anagram of each other";

    return 0;
}
