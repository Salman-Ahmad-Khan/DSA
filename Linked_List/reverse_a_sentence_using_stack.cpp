#include <iostream>
// #include<string>
#include <stack>
using namespace std;

void reverseSentence(string s)
{

    stack<string> st; // create a stack object of type string

    for (int i = 0; i < s.length(); i++)
    {
        string words = ""; // creates a variable that stores words of variable sizes
        while (s[i] != ' ' && i < s.length())
        {
            words += s[i];
            i++;
        }
        st.push(words); // push words to stack
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

// reverse a sentence using stack
main()

{
    string s = "This  feature  makes  it  LIFO  data  structure.  LIFO  stands  for  Last-in-first-out.";
    reverseSentence(s);
}