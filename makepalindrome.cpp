 /* print the min characters required to make a given string palindrome */
 
  #include<bits/stdc++.h>
  using namespace std;
  
   int IsPalindrome(char *s, int length)
  {
   int i=0,flag=1,l1=length;
    while(i<l1)
    { 
        if(s[i]!=s[l1])
        {
            flag=0;
            break; 
        }
        l1--;
        i++;
    }

    return flag;  	 
  }
  
  int CharacterRequired(char *s)
  {
  	 
  	int l1= strlen(s);
    int l =l1-1;
    int count=0,t=0;
    
    while(l>=0)
    {
        t=IsPalindrome(s,l );
        
        if(t==1)
          break;
          
            count++;
             l--;
    }
    
    return count;
  }
  
  
  int main()
  {
  	 
  	  int size,count=0;
  	  cout<<"Enter string length : ";
  	  cin>>size;
  	  
  	  char *s = new char[size+1];  
  	  cout<<"Enter a string: ";
  	  cin>>s;
  	  
  	  count = CharacterRequired(s); 	  
  	  cout<<count<<" Required to make it a palindrome ";	    
  	  
  	  
  	  
  }
