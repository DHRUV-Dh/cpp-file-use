#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
class C 
{public:
ofstream fout;
ifstream fin;
void again()
		   {
			int exit;
			
			cout<<"press 1 to shop more and 0 to leave";
			cin>>exit;
			if(exit==1)
			{
				items();
			}
			else
			{
				cout<<"your cart \n";
				fin.open("custcart.txt");
				if(fin.is_open())
				{
					string cart;
					while(fin)
					{
						cart =fin.get();
						cout<<cart;
					}
				}
				else
				{
				     bye();
				 }
			}
		  }  
	
 void bye()
 { 
 cout<<"Thank you for visting \n";
 cout<<"Please vist Again";
 }
  void items()
  {
  	fout.open("custcart.txt",fout.app);
  int v;
  cout<<"1. Iphone \n";
  cout<<"2. MacBOOK \n";
  cout<<"3. iMac \n";
  cout<<"4. Ipad \n";
  cout<<"Enter your choice : ";
  cin>>v;
  switch(v)
   {
   case 1:
   int w;
   cout<<"1. 4 GB R.A.M and  64 GB of storage \n";
   cout<<"2. 6 GB R.A.M and  64 GB of storage \n";
   cout<<"3. 6 GB R.A.M and 128 GB of storage \n";
   cout<<"4. 8 GB R.A.M and 128 GB of storage \n";
   cout<<"enter the number for the required specs \n";
   cin >>w;
   
   try
   {
   if(w==1)
  {   cout<<"added to cart \n";
       
    
    fout<<"Iphone \n";
    fout<<"4 GB R.A.M and  64 GB of storage \n";
    fout.close();

    break;
  }
  else if(w==2)
  {         cout<<"added to cart \n";
	     
	      cout<<"Iphone";
	 cout<<" 6 GB R.A.M and  64 GB of storage \n";
	 fout<<"Iphone";
     fout<<" 6 GB R.A.M and  64 GB of storage \n";
    fout.close();
	break;
 }
 else if(w==3)
 {          cout<<"added to cart \n";
		
		
       fout<<"Iphone";
     fout<<" 6 GB R.A.M and  128 GB of storage \n";
    fout.close();      

	  break;
}
else if(w==4)
{           cout<<"added to cart \n";
	     
	     
        fout<<"Iphone";
     fout<<" 8 GB R.A.M and  128 GB of storage \n";
    fout.close();
	 break;
	 }
else
{     fout.close(); 
	  throw w;
	  break;
}
}
catch(int w)
{
	cout<<"caught invalid input"<<endl;
	break;
}
  case 2:
  int h;
  cout<<"1.  8 core CPU  6  GB R.A.M and  256 GB of SSD \n";
  cout<<"2.  8 core CPU  8  GB R.A.M and  256 GB of SSD \n";
  cout<<"3. 10 core CPU  8  GB R.A.M and  512 GB of SSD \n";
  cout<<"4. 20 core CPU 12  GB R.A.M and    2 TB of SSD \n";
  cout<<"enter the number for the required specs \n";
  cin >>h;
  try{
  if(h==1)
  {
	  cout<<"added to cart \n";
	   
	  
    fout<<"MacBOOK";
    fout<<"   8 core CPU  6  GB R.A.M and  256 GB of SSD \n";
    fout.close();
	    break;
  }
  else if(h==2)
  {        cout<<"added to cart \n";
	     
	     
     fout<<"MacBOOK";
    fout<<"   8 core CPU  8  GB R.A.M and  256 GB of SSD \n";
    fout.close();
	break;
 }
 else if(h==3)
 {         cout<<"added to cart \n";
	     
	      
      fout<<"MacBOOK";
    fout<<"   10 core CPU  8  GB R.A.M and  512 GB of SSD \n";
    fout.close();
	  break;
}
else if(h==4)
{          cout<<"added to cart \n";
	     
	     
fout<<"MacBOOK";
    fout<<   "20 core CPU  12  GB R.A.M and  2 TB of SSD \n";
    fout.close();
	 break;
	 }
else
{
     fout.close();	
	 throw h;
	  break;
}
}
catch(int h)
{
	cout<<"caught invalid input"<<endl;
	break;
}

case 3:
	 int f;
  cout<<"1.  8 core CPU  6  GB R.A.M and  256 GB of SSD \n";
  cout<<"2.  8 core CPU  8  GB R.A.M and  256 GB of SSD \n";
  cout<<"3. 10 core CPU  8  GB R.A.M and  512 GB of SSD \n";
  cout<<"4. 20 core CPU 12  GB R.A.M and    2 TB of SSD \n";
  cout<<"enter the number for the required specs \n";
  cin >>f;
  try
  {
  
  if(f==1)
  {   cout<<"added to cart \n";
       
fout<<"iMac";
    fout<<"   8 core CPU  6  GB R.A.M and  256 GB of SSD \n";
    fout.close();
    break;
  }
  else if(f==2)
  {      cout<<"added to cart \n";
	  
	   
fout<<"iMac";
    fout<<"   8 core CPU  8  GB R.A.M and  256 GB of SSD \n";
    fout.close();
	break;
 }
 else if(f==3)
 {         cout<<"added to cart \n";
	       
		
    fout<<"iMac";
    fout<<"   10 core CPU  8  GB R.A.M and  512 GB of SSD \n";
    fout.close();
	  break;
}
else if(f==4)
{          cout<<"added to cart \n";
	       
		
    fout<<"iMac";
    fout<<"   20 core CPU  12  GB R.A.M and  2 TB of SSD \n";
    fout.close();
	 break;
	 }
else
{
	fout.close();
	  throw f;
	  break;
	  
}
}
catch(int f)
{
	cout<<"caught invalid input"<<endl;
	break;
}
case 4:
	 int r;
   cout<<"1. 4 GB R.A.M and  64 GB of storage \n";
   cout<<"2. 6 GB R.A.M and 128 GB of storage \n";
   cout<<"3. 6 GB R.A.M and 256 GB of storage \n";
   cout<<"4. 8 GB R.A.M and 512 GB of storage \n";
   cout<<"enter the number for the required specs \n";
   cin >>r;
   try{
   
   if(r==1)
  {   cout<<"added to cart \n";
       
   
    fout<<"Ipad";
    fout<<" 4 GB R.A.M and  64 GB of storage \n";
    fout.close();
    break;
  }
  else if(r==2)
  {         cout<<"added to cart \n";
	     
	     
     fout<<"Ipad";
    fout<< "6 GB R.A.M and  128 GB of storage \n";
    fout.close();
	break;
 }
 else if(r==3)
 {          cout<<"added to cart \n";
		
		
    fout<<"Ipad";
    fout<<" 6 GB R.A.M and  256 GB of storage \n";
    fout.close();

	  break;
}
else if(r==4)
{           cout<<"added to cart \n";
	     
	     
     fout<<"Ipad";
    fout<<" 8 GB R.A.M and  512 GB of storage \n";
    fout.close();
	 break;
	 }
else
{
	fout.close();
	  throw r;
	  break;
}
}
catch(int c)
{
	cout<<"caught invalid input"<<endl;
	break;
}
  default:
  	fout.close();
  	cout<<"invaild input"<<endl;
  	break;
}
again();
} 


};


class name : public C
{
	public:		
		string get_name()
		{
			string name;
		cout<<"enter your name"<<endl;
		cin>>name;
		return name;
		}
	
};
class SHOP 
{
	public:
  		SHOP()
 		{ 
 		 cout<<"ELECTRONIC HEAVEN \n";
 		}
 		
 };

int main()
{

  ofstream fout;
  SHOP();
  name n;
  string name2=n.get_name();
  fout.open("custcart.txt");
  fout<<name2<<"\n";
  fout.close();
  C m;
  m.items();
  return 0;
}


