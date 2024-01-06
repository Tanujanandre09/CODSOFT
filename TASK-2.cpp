#include<iostream>
using namespace std;
int main()
{
      int a,b;
	  char op;
      int ans;
      cout<<"Enter 1st number:";
      cin>>a;
      cout<<"Enter operation to perfoem (+,-,*,/)";
      cin>>op;
      cout<<endl<<"Enter 2nd number:";
      cin>>b;
      switch(op)
      {
      	    case'+':
      		{
      			
      			cout<<endl<<"answer is:"<<(a+b);
      			break;
			}
			case'-':
      		{
      			cout<<endl<<"answer is:"<<(a-b);
      			break;
			}
			case'*':
      		{
      			cout<<endl<<"answer is:"<<(a*b);
      			break;
			}
			case'/':
      		{
      			cout<<endl<<"answer is:"<<(a/b);
      			break;
			}
			default:
				{
					cout<<endl<<"Invalid";
				}
	  }
      
}

