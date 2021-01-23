 #include<iostream>
 using namespace std;
 int main()
 {
int **p,nr,nc,r,c;
cout<<"Enter no of rows and columns:";
cin>>nr>>nc;
p=new int *[nr];
for(r=0;r<nr;r++)
p[r]=new int[nc];
cout<<"Enter "<<nr*nc<<"Elements";
for(r=0;r<nr;r++)
         for(c=0;c<nc;c++)
         cin>>p[r][c];
cout<<"Elements are\n";
for(r=0;r<nr;r++)
         {
         for(c=0;c<nc;c++)
         {
                  cout<<p[r][c]<<ends;
         }
         cout<<endl;
         }
delete p;
p=NULL;

 }
