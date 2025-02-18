bool isValid(char* s) {
    int len = strlen(s);
    char stack[len]; //create a stack with size of s
    int top = -1; //empty stack

    for (int i = 0; i < len; i++) {
        //if the current char is open bracket
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i]; //push the char onto the stack
        }

        //if the current bracket is closed bracket
        else {

            //if stack is empty or the matching bracket not at the top of the stack
            if (top == -1 ||
                (s[i] == ')' && stack[top] != '(') ||
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{')) {

                    return false; //return false
            }
            top--; //pop the matching open bracket out of the stack
        }
    }

    //check if the stack is empty
    return top == -1;
}