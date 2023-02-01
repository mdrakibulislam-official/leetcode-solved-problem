class Solution {
public:
    long long int myAtoi(string s) {
        int len = s.length();
    long long int intValue = 0;
    int whiteSpace = 0;
    int negative = 0;
    int positive =0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            if(intValue<INT_MIN || intValue>INT_MAX){
                break;
            }
            intValue=intValue*10 + (s[i]-48);
            whiteSpace=1;
        }
        else if(s[i]==32)
        {
            if(positive==1 || negative==1){
                break;
            }
            else if(whiteSpace==0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if(s[i]=='-' && whiteSpace==0)
        {
            if(negative==1 || positive==1)
            {
                break;
            }
            else
            {
                negative = 1;
            }
        }
        else if(s[i]=='+' && whiteSpace==0)
        {
            if(positive==1 || negative==1)
            {
                break;
            }
            else
            {
                positive = 1;
            }
        }
        else if(intValue<-2147483648 || intValue>=2147483647 )
        {
            intValue = 2147483648;
            if(negative==0)
            {
                intValue = 2147483647;
            }

        }
        else
        {
            break;
        }
    }

    if(negative==1)
    {
        intValue = - intValue;
    }

    if(intValue<INT_MIN || intValue>INT_MAX )
    {
        if(negative==0)
        {
            intValue = INT_MAX;
        }
        else if(negative==1)
        {
            intValue = INT_MIN;
        }
    }

    return intValue;
    }
};
