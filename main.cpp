#include<iostream>
using namespace std;
int main()
{

double a1,a2,a3,a4,bb1,b1,b2,b3,b4,bb2,c1,c2,c3,c4,bb3,d1,d2,d3,d4,bb4,aa[4][4];
double xx[4], bb[4] ,cc[4];
double tmp;
int i, j, k, ii, jj;
cout.setf(ios::fixed);
cout.precision(6);

cout<<"Enter a[1][1]>";
    cin>>a1;
cout<<"Enter a[1][2]>";
    cin>>a2;
cout<<"Enter a[1][3]>";
    cin>>a3;
cout<<"Enter a[1][4]>";
    cin>>a4;
cout<<"Enter b[1]>";
    cin>>bb1;

cout<<"Enter a[2][1]>";
    cin>>b1;
cout<<"Enter a[2][2]>";
    cin>>b2;   
cout<<"Enter a[2][3]>";
    cin>>b3;
cout<<"Enter a[2][4]>";
    cin>>b4;
cout<<"Enter b[2]>";
    cin>>bb2;
    
cout<<"Enter a[3][1]>";
    cin>>c1;
cout<<"Enter a[3][2]>";
    cin>>c2;
cout<<"Enter a[3][3]>";
    cin>>c3;
cout<<"Enter a[3][4]>";
    cin>>c4;
cout<<"Enter b[3]>";
    cin>>bb3;
    
cout<<"Enter a[4][1]>";
    cin>>d1;
cout<<"Enter a[4][2]>";
    cin>>d2;
cout<<"Enter a[4][3]>";
    cin>>d3;
cout<<"Enter a[4][4]>";
    cin>>d4;
cout<<"Enter b[4]>";
    cin>>bb4;
    
aa[1][1]=a1, aa[2][1]=b1, aa[3][1]=c1, aa[4][1]=d1;
aa[1][2]=a2, aa[2][2]=b2, aa[3][2]=c2, aa[4][2]=d2;
aa[1][3]=a3, aa[2][3]=b3, aa[3][3]=c3, aa[4][3]=d3;
aa[1][4]=a4, aa[2][4]=b4, aa[3][4]=c4, aa[4][4]=d4;
bb[1]=bb1, bb[2]=bb2, bb[3]=bb3, bb[4]=bb4;
cout<<"\nGauss-Jordan Method:\n\n";
/* Display initial value of matrix [A|B] */
cout<<"\nInitial value of matrix [A|B]\n\n";
for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
cout<<aa[i][j]<<"\t";
cout<<bb[i]<<endl;
}
/*gauss-jordan method*/
cout<<"\n\nTransformation of matrix [A|B]:\n";
for(k=0; k<4; k++)
{
/*normalize pivot row*/
tmp = aa[k][k];
for(j=k; j<4; j++)
aa[k][j] = aa[k][j]/tmp;
bb[k] = bb[k]/tmp;



/* Zero the elements above and below the pivot element */

for(i=0; i<4; i++)
{
if(k!=i)
{
tmp = aa[i][k];
for(j=k; j<4; j++)
aa[i][j] = aa[i][j] - tmp*aa[k][j];
bb[i] = bb[i] - tmp*bb[k];
}
}
/*display partial results*/
cout<<"\n";
for(ii=0; ii<4; ii++)
{
for(jj=0; jj<4; jj++)
cout<<aa[ii][jj]<<"\t";
cout<<bb[ii]<<endl;
}
}


/* Display final value of matrix [A|B] */
cout<<"\n\nFinal value of matrix [A|B]:\n\n";
for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
cout<<aa[i][j]<<"\t";
cout<<bb[i]<<endl;
}

for(i=0; i<4; i++)
xx[i] = bb[i];
cout<<"\n\nValue of matrix X:\n";
for(i=0; i<4; i++)
cout<<"X"<<i+1<<" = "<<xx[i]<<endl;

return 0;

}