/*
Sample Input
Rene Decartes once said,
"I think, therefore I am."
Sample Output
"R
Ie
n
te
h
iD
ne
kc
,a
r
tt
he
es
r
eo
fn
oc
re
e
s
Ia
i
ad
m,
.
"
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	string in1,save[100]={""};
	int i=0,maxlen=0;
	while(getline(cin,in1))
	{
		save[i]=in1;
		if(save[i].length()>maxlen)
		{
			maxlen=save[i].length();
		}
		i++;
	}
	int num=i;
	for(int i=0;i<maxlen;i++)
	{
		for(int j=num-1;j>=0;j--)
		{
			if(i>=save[j].length())
			{
				cout<<" ";
			}
			else
			{
				cout<<save[j][i];	
			}
		}
		cout<<endl;
	}
return 0;




}

