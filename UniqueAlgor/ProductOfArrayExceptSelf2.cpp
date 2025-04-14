 #include<iostream>
 #include<vector>
 using namespace std;
 //we have to solve this problem in o(n) time and without division
 //below code exceeds timelimit
  
 /* vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> b;
       
       for(int i=0;i<nums.size();i++)
        {
           int mul=1;
           for(int j=0;j<nums.size();j++)
           {
               if(i!=j)
               {
                   mul*=nums[j];
                   //cout<<mul<<" ";
               }
              
           }
           b.push_back(mul);
            
        }
        
        return b;
       // vector<int>::iterator it;
        //for(it=b.begin();it!=b.end();it++)
        //for(int i=0;i<4;i++)
       //cout<<*it<<" ";
        
    } */

//Below code works with effective time but uses extra space as left and right array.
//But output array result is allowed
/* vector<int> productExceptSelf(vector<int> nums)
{
    int n=nums.size();
    vector<int> left(n,1);
    vector<int> right(n,1);
    vector<int> res(n,1);
    for(int i=1;i<n;i++)
    {
        left[i]=left[i-1]*nums[i-1];
    }

    
    for(int i=n-2;i>=0;i--)
    {
        right[i] = right[i+1] * nums[i+1];
    }

    for(int i=0;i<n;i++)
    {
        res[i]=left[i]*right[i];
    }

    
    
return res;

} */

//Below code does not use extra space

vector<int> productExceptSelf(vector<int> nums)
{
    int n=nums.size();
    vector<int> res(n,1);

    for(int i=1;i<n;i++)
    {
        res[i] = res[i-1] * nums[i-1];
        
        //res[1]=res[0] * nums[0]=1*1=1
        //res[2] = res[1]*nums[1] = 1*2=2
        //res[3] =res[2]*nums[2]=2*3=6
        //res[4]=res[3]*nums[3]=6*4=24

        cout<<" left "<<res[i]<<" i= "<<i<<endl;
    }
    int rightProd=nums[n-1];
    cout<<endl;
   for(int i=n-2;i>=0;i--)
   {
       res[i]*=rightProd;
       cout<<" final "<<res[i]<<endl;
       rightProd*=nums[i];
       cout<<" rightProd "<<rightProd<<endl;

   }
return res;

}


int main()
{
    vector<int> nums={1,2,3,4};
    vector<int> b;
    vector<int>::iterator it;
    for(it=nums.begin();it!=nums.end();it++)
      cout<<*it<<" ";
    
    b=productExceptSelf(nums);
    cout<<endl;
    for(it=b.begin();it!=b.end();it++)
      cout<<*it<<" ";

    
}