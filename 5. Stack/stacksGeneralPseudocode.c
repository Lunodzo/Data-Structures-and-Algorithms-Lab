Push(item){
    if (stack is full){
        print "stack overflow"
    }else{
        Increment top;
        Stack[top] = item;
    }
}

Pop(){
    if(stack is empty){
        print "Stack under flow"
    }else{
        Decrement top
    }
}

Top(){
    if(stack is empty){
        print "Stack under flow"
    }else{
        print the top element
    }
}

Display(){
    if(stack is empty){
        print "No elements"
    }else{
        for (i=top to 0 step -1){
            print stack[i];
        }
    }
}

//Check if stack is empty
isEmpty{
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

