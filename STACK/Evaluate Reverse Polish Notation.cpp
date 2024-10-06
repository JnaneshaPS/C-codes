//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
//Evaluate the expression. Return an integer that represents the value of the expression.
//The valid operators are '+', '-', '*', and '/'.
//Each operand may be an integer or another expression.
//The division between two integers always truncates toward zero.
//There will not be any division by zero.
//The input represents a valid arithmetic expression in a reverse polish notation.
//The answer and all the intermediate calculations can be represented in a 32-bit integer.

//Input: tokens = ["2","1","+","3","*"]
//Output: 9
//Explanation: ((2 + 1) * 3) = 9

   int evalRPN(vector<string> &tokens)
{
        stack<int> st;

    for(const string &token:tokens)
{
       if(token=="/"||token=="+"||token=="-"||token=="*")
         int num2=st.top();st.pop();
         int num1=st.top();st.pop();

       if (token == "+") st.push(num1 + num2);
            else if (token == "-") st.push(num1 - num2);
            else if (token == "*") st.push(num1 * num2);
            else if (token == "/") st.push(num1 / num2)
              }
else
{
    st.push(stoi(token));
}
}
return st.top();
}
