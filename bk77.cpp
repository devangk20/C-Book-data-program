#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class book
{
	public:
	char title[20], author[20], pubn[20],t[20],a[20],pn[20];
	float price,pr;
	int copy,cpy,book[100],i,n;
	
	void get()
	{
		cout<<"\nEnter the name of book : ";
		cin>>title;
		cout<<"\nEnter the name of author : ";
	   cin>>author;
		cout<<"\nEnter the name of publication : ";
		cin>>pubn;
		cout<<"\nEnter the price : ";
		cin>>price;
		cout<<"\nEnter the number of copies : ";
		cin>>copy;
		}
	
	void check()
	{	
		
		cout<<"\nEnter the name of book to check its availability : ";
		cin>>t;
		cout<<"\nEnter the name of author to check its availability : ";
		cin>>a;
		cout<<"\nEnter the name of publication to check its availability : ";
		cin>>pn;
		cout<<"\nEnter the number of copies : ";
		cin>>cpy;
		
		if(strcmp(title,t)==0 && strcmp(author,a)==0 && strcmp(pubn,pn)==0)
		{
				if(cpy<=copy && copy!=0)
				{
			 		cout<<"\nThe book is available";
			 		pr=price*cpy;
			 		cout<<"\nThe total amount is :"<<pr;
			 	
				}
				else
				{
					cout<<"\nInsufficient Copies";
				
				}
		}
		else
			{
				cout<<"\nBook not available";
			}
		
		}
	
};
int main()
{	int i,n;
	book bk[5];
	cout<<"Enter the number of book";
	cin>>n;
	for(i=0;i<n;i++)
	{
	bk[i].get();
	bk[i].check();
}}
