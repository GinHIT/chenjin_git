//京东
//果园里有一堆苹果，一共n头(n大于1小于9)熊来分，第一头熊把苹果均分n份后，
//多出了一个，它扔掉了这一个，拿走了自己的一份苹果，接着第二头熊重复这一
//过程，即先均分n份，扔掉一个然后拿走一份，以此类推直到最后一头熊都是这样
//(最后一头熊扔掉后可以拿走0个，也算是n份均分)。问最初这堆苹果最少有多少
//个。给定一个整数n,表示熊的个数，返回最的苹果数。保证有解。
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
