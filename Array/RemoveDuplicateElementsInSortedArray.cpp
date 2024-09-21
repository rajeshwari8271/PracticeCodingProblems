 #include<iostream>
 #include<set>
 #include<iterator>
 using namespace std;
 int RemoveDuplicate(int a[],int n)
 {
     set<int> tmp;
     for(int i=0;i<n;i++)
     {
         if(a[i]!=a[i+1])
         {
             tmp.insert(a[i]);
         }
     }
    tmp.insert(a[n-1]);
     set<int>::iterator it;
     for(it=tmp.begin();it!=tmp.end();it++)
     cout<<*it<<" ";

     return tmp.size();
 }
 int main()
 {
     int a[]={1,2,2,2,8,1,1};
     
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
     cout<<endl;
     int cnt = RemoveDuplicate(a,n);
     if(cnt)
     cout<<"\nno of elements in new list "<<cnt;

 }