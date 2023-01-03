#include <bits/stdc++.h>
using namespace std;

char getMaxOccChar(string s){
    int arr[26] = {0};

    //creating an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        //lowercase
        int number;
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans =0;

    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;

    return finalAns;

}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count ++;
    }

    return count;
}

void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}

bool checkpalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;

}

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output

        char name[20];
        
        cin>>name;
        cout<<"Your name is: "<<name<<endl;
        int lene = getlength(name);
        cout<<"Length: "<<getlength(name)<<endl;
        reverse(name,lene);
        cout<<"reversed name is:"<< name <<endl;
        // cout<<"Palindrome or not? :"<< checkpalindrome(name,lene)<<endl;

        // cout<<"Character is: "<<toLowerCase('b')<<endl;
        // cout<<"Character is: "<<toLowerCase('A')<<endl;

        //string s;
        //cin>>s;

        //cout<<getMaxOccChar(s)<<endl;

        return 0;
}