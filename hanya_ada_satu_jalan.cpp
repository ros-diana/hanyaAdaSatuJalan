//hanya ada satu jalan
// Nama: Sarah Rosdiana Tambunan

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
	int b,k,i,j,sb,sk,F=0,eb,ek;
	char a[10][10];
	
	cin >> b >> k;
	for(i=0;i<b;i++)
	{
		for(j=0;j<k;j++)
		{
			cin >> a[i][j];
			if(a[i][j]=='S')
			{
				sb = i;
				sk = j;
			}
			if(a[i][j]=='E')
			{
				eb = i;
				ek = j;
			}
		}
	}
	
	do{	
		if(a[sb-1][sk]=='.' || a[sb-1][sk]=='E')
		{
			if(a[sb-1][sk]=='E')
			{
				F=1;
			}else
			{
				a[sb][sk]='X';
			sb=sb-1;
			a[sb][sk]='S';
			
			}
			cout << "U";		
		}
		else if(a[sb+1][sk]=='.' || a[sb+1][sk]=='E'){
			if(a[sb+1][sk]=='E'){
				F=1;
			}else{
				a[sb][sk]='X';
				sb=sb+1;
				a[sb][sk]='S';
			}
			cout << "D";
		}
		else if(a[sb][sk-1]=='.' || a[sb][sk-1]=='E'){
			if(a[sb][sk-1]=='E'){
				F=1;
			}else{
			a[sb][sk]='X';
			sk=sk-1;
			a[sb][sk]='S';
			}
			cout << "L";
		}
		else if(a[sb][sk+1]=='.' || a[sb][sk+1]=='E')
		{
			if(a[sb][sk+1]=='E'){
				F=1;
			}else{
			a[sb][sk]='X';
			sk=sk+1;
			a[sb][sk]='S';
			}
			cout << "R";
		}
	}while(F!=1);
}
