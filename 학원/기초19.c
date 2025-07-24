#include <stdio.h>
int main(void)
{
    int pw, m, w=0;
    int a=0,b=0,c=0,d=0;
    printf("비밀번호를 입력하세요 : ");
    scanf("%d", &pw);
    if(w==0)
    {
        if(pw == 1004)
        {
            printf("출금액을 입력하시요 : ");
            scanf("%d", &m);
            if(m>=50000)
            {
                a = m/50000;
                m %= 50000;
            }
            else if(m>=10000)
            {
                b = m/10000;
                m %= 10000;
            }
            else if(m>=5000)
            {
                c = m/5000;
                m %= 5000;
            }
            else if(m>=1000)
            {
                d = m/1000;
                m %= 1000;
            }
            printf("5만원권 %d장, 1만원권 %d장, 5천원권 %d장, 1천원건 %d장", a, b, c, d);
        }
        else{
            w+=1;
        }
    }
    if(w==1)
    {
        printf("비밀번호를 입력하세요 : ");
        scanf("%d", &pw);
        if(pw == 1004)
        {
            printf("출금액을 입력하시요 : ");
            scanf("%d", &m);
            if(m>=50000)
            {
                a = m/50000;
                m %= 50000;
            }
            else if(m>=10000)
            {
                b = m/10000;
                m %= 10000;
            }
            else if(m>=5000)
            {
                c = m/5000;
                m %= 5000;
            }
            else if(m>=1000)
            {
                d = m/1000;
                m %= 1000;
            }
            printf("5만원권 %d장, 1만원권 %d장, 5천원권 %d장, 1천원건 %d장", a, b, c, d);
        }
        else{
            w+=1;
        }
    }
    
        if(w==1)
    {
        printf("비밀번호를 입력하세요 : ");
    scanf("%d", &pw);
        if(pw == 1004)
        {
            printf("출금액을 입력하시요 : ");
            scanf("%d", &m);
            if(m>=50000)
            {
                a = m/50000;
                m %= 50000;
            }
            else if(m>=10000)
            {
                b = m/10000;
                m %= 10000;
            }
            else if(m>=5000)
            {
                c = m/5000;
                m %= 5000;
            }
            else if(m>=1000)
            {
                d = m/1000;
                m %= 1000;
            }
            printf("5만원권 %d장, 1만원권 %d장, 5천원권 %d장, 1천원건 %d장", a, b, c, d);
        }
        else{
            w+=1;
        }
    }
    if(w==2)
    {
        printf("비밀번호를 입력하세요 : ");
    scanf("%d", &pw);
        if(pw == 1004)
        {
            printf("출금액을 입력하시요 : ");
            scanf("%d", &m);
            if(m>=50000)
            {
                a = m/50000;
                m %= 50000;
            }
            else if(m>=10000)
            {
                b = m/10000;
                m %= 10000;
            }
            else if(m>=5000)
            {
                c = m/5000;
                m %= 5000;
            }
            else if(m>=1000)
            {
                d = m/1000;
                m %= 1000;
            }
            printf("5만원권 %d장, 1만원권 %d장, 5천원권 %d장, 1천원건 %d장", a, b, c, d);
        }
        else{
            w+=1;
        }
    }
    if(w==3)
    {
        printf("계정 잠금");
        return 0;
        
    }

}