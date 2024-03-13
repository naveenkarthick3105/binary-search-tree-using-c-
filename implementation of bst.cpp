#include<iostream.h>#include<conio.h>#include<stdlib.h>
//usingnamespacestd;void insert(int,int );voiddelte(int);
void display(int);intsearch(int);
int search1(int,int);int tree[40],t=1,s,x,i;main()
{
clrscr();intch,y;
for(i=1;i<40;i++) tree[i]=-1;while(1)
{
cout<<"1.INSERT\n2.DELETE\n3.DISPLAY\n4.SEARCH\n5.EXIT\nEnter your choice:";cin>>ch;
switch(ch)
{
case1:
cout<<"entertheelementtoinsert";cin>>ch;insert(1,ch);
break;case2:
 

cout<<"entertheelementtodelete";cin>>x;y=search(1);
if(y!=-1)delte(y);
elsecout<<"nosuchelementintree";break;
case3:
display(1);cout<<"\n";
for(inti=0;i<=32;i++)cout<<i;cout<<"\n";
break;case4:
cout<<"entertheelementtosearch:";cin>>x;y=search(1);
if(y==-1)cout<<"nosuchelementintree";else cout <<x << "is in" <<y <<"position";break;
case5:
exit(0);
}
}
}
voidinsert(ints,intch)
{
int x;if(t==1)
{
tree[t++]=ch;return;
}
x=search1(s,ch);if(tree[x]>ch)tree[2*x]=ch;elsetree[2*x+1]=ch;t++;
}
voiddelte(intx)
{
if(tree[2*x]==-1&&tree[2*x+1]==-1)tree[x]=-1;
 

elseif(tree[2*x]==-1)
{
tree[x]=tree[2*x+1];tree[2*x+1]=-1;
}
elseif(tree[2*x+1]==-1)
{
tree[x]=tree[2*x];tree[2*x]=-1;
}
else
{
tree[x]=tree[2*x];delte(2*x);
}
t--;
}

intsearch(ints)
{
if(t==1)
{
cout<<"noelementintree";return-1;
}
if(tree[s]==-1)return tree[s];if(tree[s]>x)search(2*s);else if(tree[s]<x)search(2*s+1);else
returns;
}
voiddisplay(ints)
{
if(t==1)
{cout<<"noelementintree:";return;}for(int i=1;i<40;i++) if(tree[i]==-1) cout<<"";
elsecout<<tree[i];return;
}
intsearch1(ints,intch)
{
 

if(t==1)
{
cout<<"noelementintree";return-1;
}
if(tree[s]==-1)return s/2;if(tree[s] > ch)search1(2*s,ch);
elsesearch1(2*s+1,ch);
}

