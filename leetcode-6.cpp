class Solution {
public:
    string convert(string s, int numRows) {
      
    vector<string> result(1000);
    int n = s.length();
    int row = 0;
    int flag = 1;

    if(numRows==1){
        return s;
    }else{
        for(int i=0; i<n; i++)
    {
        if((row <= numRows-1) && flag==1){
            result[row].push_back(s[i]);
            row++;
        }else
        {
            flag = 0;
            row--;
            result[row].push_back(s[i]);
            if(row==0)
            {
                row++;
                flag=1;
            }
        }

        if(row==numRows){
                row--;
                flag=0;
            }
    }

    string total = "";

    for(int i=0; i<numRows; i++)
    {
        total+=result[i];
    }
    return total;
    }
  }
};
