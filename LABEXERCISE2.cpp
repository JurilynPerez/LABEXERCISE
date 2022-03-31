#include<iostream>

using namespace std

int numberofrows;
int main()
{
double aa[4][4];
double xx[4], bb[4];
double tmp;
int i, j, k, ii, jj;
cout.setf(ios::fixed);
cout.precision(6);

cout<<"\nGAUS-JORDAN METHOD:\n\n";
/* Display initial value of matrix [A|B] */
cout<<"Enter number of rows columns(n)>";
cin>>numberofrows;

cout<<"\nCoefficient and Constant Matrix\n";
for(i=1; i<numberofrows+1; i++)
    {
        for(j=1; j<numberofrows+1;j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"]=";
            cin>>aa[i][j];
        }
        cout<<"Enter b["<<i<<"]=";
        cin>>bb[i];
    }

cout<<"\n\nTransformation of matrix [A|B]:\n";
for(k=1; k<numberofrows+1; k++)
    {
    /*normalize pivot row*/
    tmp = aa[k][k];
    for(j=k; j<numberofrows+1; j++)
    aa[k][j] = aa[k][j]/tmp;
    bb[k] = bb[k]/tmp;
    
    /* Zero the elements above and below the pivot element */

for(i=1; i<numberofrows+1; i++)
    {
    if(k!=i)
    {
    tmp = aa[i][k];
    for(j=k; j<numberofrows+1; j++)
    aa[i][j] = aa[i][j] - tmp*aa[k][j];
    bb[i] = bb[i] - tmp*bb[k];
    }
    }
/*display partial results*/
cout<<"\n";
for(ii=1; ii<numberofrows+1; ii++)
    {
    for(jj=1; jj<numberofrows+1; jj++)
    cout<<aa[ii][jj]<<"\t";
    cout<<bb[ii]<<endl;
    }
}


/* Display final value of matrix [A|B] */
cout<<"\n\nGAUSS-JORDAN METHOD\n";
cout<<"Result:\n";
for(i=1; i<numberofrows+1; i++)
    {
        for(j=1; j<numberofrows+1; j++)
        cout<<aa[i][j]<<"\t";
        cout<<bb[i]<<endl;
    }

for(i=1; i<numberofrows+1; i++)
    xx[i] = bb[i];
    cout<<"\n\nValue of matrix X:\n";
    for(i=1; i<numberofrows+1; i++)
    cout<<"X"<<i+1<<" = "<<xx[i]<<endl;

return 0;
}
