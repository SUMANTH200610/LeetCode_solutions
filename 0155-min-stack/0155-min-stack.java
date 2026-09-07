class MinStack {
    ArrayDeque<Integer> st;
    ArrayDeque<Integer> mnst;
    public MinStack() {
        this.st = new ArrayDeque<>();
        this.mnst = new ArrayDeque<>();
    }
    
    public void push(int value) {
        //Insert the value into the original stack normally
      st.push(value);
      // Insert the minimum into the minstack
        if(mnst.isEmpty()){
            mnst.push(value);

        }
        else{
            mnst.push(Math.min(value,mnst.peek()));
        }
    }
    
    public void pop() {
        //pop from original stack
        st.pop();
        //pop from min stack
        mnst.pop();
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        // Iterate through stack elements,find mid
        return mnst.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */