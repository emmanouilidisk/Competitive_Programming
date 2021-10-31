/*#include <iostream>
#include <string>
using namespace std;
string str,str1;
void test(int x){
   
    
    for(int i=0;i<x-1;i++){
                if(i==0)
                    {
                    for(int j=0;j<=x;j++)
                    {
                        str+=" 1";
                    }
                    str1+= str;
                    cout<<"Q "<<str<<endl;
                    str=" ";
                   }
          if(i==1)
               {
                for(int j=0;j<=x;j++)
                {
                    str+=" 0";
                }
                str1+= str;
              cout<<"Q"<<str<<endl;
                str=" ";
              }
              if(i==2)
                    {
                    for(int j=0;j<=x/2;j++)
                    {
                        str+=" 1";
                    }
                     for(int j=0;j<=x/2;j++)
                    {
                        str+=" 0";
                    }
                     str1+= str;
                    cout<<"Q"<<str<<endl;
                    str=" ";
                     }
              if(i==3)
                    {
                    
                     for(int j=0;j<=x/2;j++)
                    {
                        str+=" 1";
                        
                    }
                     for(int j=0;j<=x/2;j++)
                    {
                        str+=" 0";
                        
                    }
                    str1+= str;
                    cout<<"Q"<<str<<endl;
                    str=" ";
                }
       
    }
   
}
int main() {
    int n;
    cin >> n;
    test(n);
  //  cout<<str;
    
    return 0;
}*/
#include <iostream> 
#include <vector> 
using namespace std; 

#define K 16

// DP lookup table 
vector<string> DP[K][K]; 


void combinations(int k) 
{ 
	string str = "";
/*int ans=1;
for(int i=0;i<k;i==)
{
    ans=ans*2;
}
int **arr;
arr=new int[ans];
	*/
	for (int len = 0; len <= k; len++) 
	{ 
		DP[len][0].push_back(str); 

		str = str + "0 "; 
	} 
	
	
	for (int len = 1; len <= k; len++) 
	{ 
		for (int n = 1; n <= len; n++) 
		{ 
			
			for (string str : DP[len - 1][n]) 
				DP[len][n].push_back("0 " + str); 

		
			for (string str : DP[len - 1][n - 1]) 
				DP[len][n].push_back("1 " + str); 
		} 
	} 
	
	string str2;
	for (int n = k; n >= 0; n--) 
	{ 
	    
		for (string str : DP[k][n]){
		   str2="";
		 
		 str2+="Q "+str;
         //cout.flush(str2);   
           cout <<str2<<endl;
           cout.flush();
	} 

} 
}


int main() 
{ 
	int k ;
	cin>>k;
	combinations(k); 

	return 0; 
} 
