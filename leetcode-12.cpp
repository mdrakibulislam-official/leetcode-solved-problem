class Solution {
public:
    string intToRoman(int num) {
        int number = num;
        string roman ="";

    while(number != 0)
    {
        if(number>=1000)
        {
            number-=1000;
            roman +="M";
        }
        else if(number>=900)
        {
            number-=900;
            roman +="CM";
        }
        else if(number>=500)
        {
            number-=500;
            roman +="D";
        }
        else if(number>=400)
        {
            number-=400;
            roman +="CD";
        }
        else if(number>=100)
        {
            number-=100;
            roman +="C";
        }
        else if(number>=90)
        {
            number-=90;
            roman +="XC";
        }
        else if(number>=50)
        {
            number-=50;
            roman +="L";
        }
        else if(number>=40)
        {
            number-=40;
            roman +="XL";
        }
        else if(number>=10)
        {
            number-=10;
            roman +="X";
        }
        else if(number>=9)
        {
            number-=9;
            roman +="IX";
        }
        else if(number>=5)
        {
            number-=5;
            roman +="V";
        }
        else if(number>=4)
        {
            number-=4;
            roman +="IV";
        }
        else if(number>=1)
        {
            number-=1;
            roman +="I";
        }
    }

    return roman;
    }
};
