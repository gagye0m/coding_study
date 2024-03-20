#include <stdio.h>

int main()
{
    int resultarr[100] = {0,};
    int testcase=0;
    int N=0,M=0;
    scanf("%d",&testcase); //testcase에 3저장

    
    for(int idx = 0; idx<testcase ; idx++) //3번 반복(idx는 그냥 testcase 반복 계수로만 가져가자)
    {
        double result = 1;
        scanf("%d %d",&N,&M); // mCn하면 됨. ex(5C2)

        
        for(int i2 = M, i3=N; i3>0; i2--, i3--) // 처음에
        {
            result *= (double)i2 / i3;
        }
        
        printf("%d",result);
    }
}

        /*if(N==1)
        {
            resultarr[idx]=M;
            continue;
        }
        calculus=M-N+1; //3 저장

        for(int i1=calculus ; i1>=1 ; i1--) //한번 돌아서 i1이 calculus -1(2)이 됨.
        {
            for(int i2 = 0 ; i1-i2>=1; i2++) // 1넣으면 1번, 2넣으면 2번, 3넣으면 3번 실행됨.
            {
                for(int i3 = i1-i2; i3>=1; i3--) //
                {
                    result += i3;
                }
            }            
        }*/