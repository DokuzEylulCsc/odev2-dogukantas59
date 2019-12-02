#include<bits/stdc++.h> 
using namespace std; 
	/* KAYNAKÇA :	
	https://www.cokbilgi.com/yazi/roma-rakamlari-nasil-yazilir-nedir-ceviri/
    https://www.youtube.com/watch?v=_CelY_ZBXb4
    https://www.youtube.com/watch?v=KwrAArXFF30&t=1s
  */

int roman(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 
  int romanyazdirma(int sayi) 
{ 
    int onluk[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sembol[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;     
    while(sayi>0) 
    { 
      int bol = sayi/onluk[i]; 
      sayi = sayi%onluk[i]; 
      while(bol--) 
      { 
        cout<<sembol[i]; 
      } 
      i--; 
    } 
    
} 

int sayiyazdirma(string &str) 
{ 
   
    int x = 0; 
  
   
    for (int i=0; i<str.length(); i++) 
    { 
       
        int s1 = roman(str[i]); 
  
        if (i+1 < str.length()) 
        { 
            
            int s2 = roman(str[i+1]); 
  
           
            if (s1 >= s2) 
            { 
                
                x = x + s1; 
            } 
            else
            { 
                x = x + s2 - s1; 
                i++; 
            } 
        } 
        else
        { 
            x = x + s1; 
             
        } 
    } 
    return x; 
} 
  
int main() 
{ 
	int x;
	cout << "ROMAN RAKAMINI ONLUK SAYIYA CEVIRMEK ICIN (1), ONLUK SAYIYI ROMAN RAKAMINA CEVIRMEK ICIN(2)"<<endl;
	cin >> x;
	switch(x)
	{
		case 1:
		{
			
			string str; 
    		cin >> str;
    		cout << sayiyazdirma(str) << endl;
         break;
     	}
         
        case 2:
		{
        	int n;
         	cin >>n;
         	cout<<romanyazdirma(n) << endl;
         	break;
		}
		
		
	}
	
	
   
} 

