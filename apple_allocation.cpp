//京东
//该函数输入一个保证有解得数，输出最初的最小苹果数
int getInitial(int n) {
        int a=0;
        int i=1;
        stack<int> stk1;
        stk1.push(0);
        while(i<n)
        {
            if((a%n!=0))
            {
                a=stk1.top()+1;
                stk1.pop();
                stk1.push(a);
                i=1;
                continue;
            }
            else if((a%n==0)&&(((a+1)*n)%(n-1)==0))
            {
                i++;
                a=(a+1)*n/(n-1);
            }
            else
            {
                a=stk1.top()+1;
                stk1.pop();
                stk1.push(a);
                i=1;
                continue;
            }
                      	
        } 
        return a+1;
    }
