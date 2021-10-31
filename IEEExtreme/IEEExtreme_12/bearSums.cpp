#include <iostream>

using namespace std;

int main() {
    int a, b, c, x=0;

    cin >> a;
    for (int i=0; i<a; i++)
        {
            int f=0, g=0;
            cin>>b>>c;
            //int d;
            int d[c]={0};
            for(int j=0; j<c; j++)
            {
                cin>>d[j];


            }
            for (int k=0; k<c-1; k++)
            {
                 for (int l=k+1; l<c; l++)
                    {
                            
                      
                            if(b==d[l]+d[k])
                        {   
                            if(d[k]==d[l])
                                {
                                    x=d[k];
                                    f=1;
                                    g=1;
                                    break;
                                }
                                if(d[k]<d[l] || d[k]>d[l])
                                {
                                if(d[k]<d[l])
                                {
                                cout<<d[k]<<" "<<d[l]<<endl;
                                f=1;
                                g=0;
                                break;
                                }
                                else {
                                cout<<d[l]<<" "<<d[k]<<endl;
                                f=1;
                                g=0;
                                break;
                                }
                                }
                        }
                            
                        
                        

                    }
                         if(f==1 && g==0)
                            break;
            }
             if(f==1 && g==1)
                    {
                        
                                cout<<x<<" "<<x<<endl;
                               
                    }
                if(f==0)
                {
                    cout<<"!OK"<<endl;
                }
            }
        }
