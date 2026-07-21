#include<bits/stdc++.h>

using namespace std;
string longestValidParenthesis(string s){
     stack<int> st;
    st.push(-1);

    int maxLength = 0;
    int startIndex = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();

            if (st.empty()) {
                st.push(i);
            } else {
                int len = i - st.top();

                if (len > maxLength) {
                    maxLength = len;
                    startIndex = st.top() + 1;
                }
            }
        }
    }

    return s.substr(startIndex, maxLength);

}

int main(){

    string str;
    cout<<"Please provide the input string > "  <<endl;
    cin>>str;

    cout<<"The result string will be : "<<longestValidParenthesis(str)<<endl;


    return 0;
}