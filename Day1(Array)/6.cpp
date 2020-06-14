#include<string>
using namespace std;

class interval
{
 public: 
    int start;
    int end;
 
 void show()
 {
     cout<<start<<" ";
     cout<<end<<" ";
 }
 void get()
 {
     cin>>start;
     cin>>end;
 }
    
};

int main()
{
   int t;
   cin >> t;
    
	while (t--)
	{   int pair; 
     	int k=0;
    	
    	cin>>pair;
	    interval arr[pair];
	    interval b[10];
	    
	    for(int i=0;i<pair;i++){
	        arr[i].get();
	    }
	 
	    interval temp;
	      for (int i = 0; i < pair; ++i)
	      {
	          for (int j = i + 1; j < pair; ++j)
	          {
	              if (arr[i].start > arr[j].start)
                  {
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                  }
	          }
	      }


b[0]=arr[0];
         
         for(int i=1;i<pair;i++)
           {  if(arr[i].start<=b[k].end)
                 {if((arr[i].end)<=b[k].end)
                     continue;
                  if((arr[i].end)>=b[k].end)
                     {b[k].end=arr[i].end;
                     continue;
                     }
                 }
               if(arr[i].start>=b[k].end)
               { ++k;
                 b[k]=arr[i];
                 continue;
               }
            
               
           }
           for(int i=0;i<=k;i++){
              b[i].show(); 
           }
           
	cout<<endl;
	}
	
   return 0;
}
