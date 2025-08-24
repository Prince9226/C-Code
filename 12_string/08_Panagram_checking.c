#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// User function Template for C

bool isPanagram(char str[]) {

    // Your code here
    int alphabet[26]={0};
    int i = 0;
    while(str[i]!='\0'){
        char ch = tolower(str[i]);
        if(ch>='a' && ch<='z'){
            alphabet[ch-'a']=1;
        }
        i++;
    }
    for (int j = 0;j<26;j++){
        if(alphabet[j]==0)
            return 0;
    }
    return 1;
}

int main() {
    printf("%d\n", isPanagram("Thequickbrownfoxjumpsoverthelazydog"));  // Output: 1
    printf("%d\n", isPanagram("HeavyDuty"));                            // Output: 0
    return 0;
}
