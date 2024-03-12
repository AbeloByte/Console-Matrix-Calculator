#include<iostream>
#include<cstdlib>
using namespace std;
int	mat1[10][10],mat2[10][10],mat3[10][10],r,c,r1,c1,choice;
char interest;
//>>>>>>>>>>>>>>>>>>>>>>>>>THIS ONE IS FOR ADDITION>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void add(){
	cout<<"HOW MANY ROWS DO U NEED FOR THE 1st MATRIX ? \n";
    cin>>r;
    cout<<"HOW MANY COLUMN DO U NEED FOR THE 1st MATRIX ? \n";
    cin>>c;
    cout<<"HOW MANY ROWS DO U NEED FOR THE 2nd MATRIX ? \n";
    cin>>r1;
    cout<<"HOW MANY COLUMN DO U NEED FOR THE 2nd MATRIX ? \n";
    cin>>c1;
    /////////////////////////////////////////////////////////////////
    if(r==r1&&c==c1){
	cout<<"Enter the first matrix element:\n";
    for(int i=0;i<r;i++){
	 {
	for(int j=0;j<c;j++)
	   {
		cin>>mat1[i][j];
	   }
	}
     }
	
	cout<<"Enter the second matrix element:\n";
    for(int i=0;i<r;i++)
     {
	for(int j=0;j<c;j++)
       {
		cin>>mat2[i][j];
	   }
    }
         
cout<<"=======THE SUM OF THIS TWO MATRIX IS :========"<<endl;
	for(int i=0;i<r;i++)
    {

	for(int j=0;j<c;j++)
	   {
		  mat3[i][j]=mat1[i][j]+mat2[i][j];
	   }
    }
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		cout<<mat3[i][j]<<" ";
	}
	cout<<endl;
}
}
	else {
	
	cout<<"PLEASE SIR BOTH OF YOUR MATRIX MUST HAVE THE SAME ROW AND COLUMN!!!"<<endl;
	cout<<"IN order to compute\n"<<endl;
}
}

//THIS ONE IS FOR SUBTRACTION>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void subs(){
cout<<"HOW MANY ROWS DO U NEED FOR THE 1st MATRIX ? \n";
cin>>r;
cout<<"HOW MANY COLUMN DO U NEED FOR THE 1st MATRIX ? \n";
cin>>c;
cout<<"HOW MANY ROWS DO U NEED FOR THE 2nd MATRIX ? \n";
cin>>r1;
cout<<"HOW MANY COLUMN DO U NEED FOR THE 2nd MATRIX ? \n";
cin>>c1;

if(r==r1&&c==c1){

	 cout<<"enter the first matrix element:\n";
    for(int i=0;i<r;i++)
    {
	for(int j=0;j<c;j++)
	   {
		cin>>mat1[i][j];
	   }
	}
	cout<<"enter the second matrix element:\n";
    for(int i=0;i<r;i++)
     {
	for(int j=0;j<c;j++)
       {
		cin>>mat2[i][j];
	   }
    }
    	cout<<"======THE SUBTRACTION OF THIS TWO MATRIX IS :======"<<endl;
	for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
	    {
		mat3[i][j]=mat1[i][j]-mat2[i][j];
		}
   }
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
       cout<<mat3[i][j]<<" ";
	}
	cout<<endl;
}
}

else {

	cout<<"\nYOUR ROW AND COLUMN MUST BE EQUAL !!\n"<<endl;

}

}
void trans(){
cout<<"How Many ROWS Do u Need  ? \n";
cin>>r;
cout<<"How Many COLUMN Do u Need  ? \n";
cin>>c;
	cout<<"Enter the  matrix element:\n";
    for(int i=0;i<r;i++){
	 {
	for(int j=0;j<c;j++)
	   {
		cin>>mat1[i][j];
	   }
	}
     }
     cout<<"======THE Transpose OF THIS MATRIX IS :======"<<endl;
	for(int i=0;i<r;++i)
   {
    for(int j=0;j<c;++j)
	    {
		mat3[j][i]=mat1[i][j];
		}
   }
for(int i=0;i<c;i++)
{
	for(int j=0;j<r;j++)
	{
       cout<<mat3[i][j]<<" ";
	}
	cout<<endl;
}
}

//THIS ONE IS FOR MULTIPLICATION>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void mult(){
	cout<<"HOW MANY ROWS DO U NEED FOR THE 1st MATRIX ? \n";
    cin>>r;
    cout<<"HOW MANY COLUMN DO U NEED FOR THE 1st MATRIX ? \n";
    cin>>c;
    cout<<"HOW MANY ROWS DO U NEED FOR THE 2nd MATRIX ? \n";
    cin>>r1;
    cout<<"HOW MANY COLUMN DO U NEED FOR THE 2nd MATRIX ? \n";
    cin>>c1;
    if((r==r1&&c==c1)||(r==c1 && c==r1)){
	cout<<"enter the first matrix element:\n";
    for(int i=0;i<r;i++)
    {
	for(int j=0;j<c;j++)
	   {
		cin>>mat1[i][j];
	   }
	}
	cout<<"enter the second matrix element:\n";
    for(int i=0;i<r;i++)
     {
	for(int j=0;j<c;j++)
       {
		cin>>mat2[i][j];
	   }
    }
    
//////////////////////////////////////////////////////////////////////////////////////
cout<<"==========The multiplication of your matrix is : ========= "<<endl;
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		int store =0;
		for(int k=0;k<c;k++)
		{
	    store+=mat1[i][k]*mat2[k][j];
		}
		mat3[i][j]=store;
	}
}
for(int i=0;i<r;i++)
{ 
cout<<"| ";
	for(int j=0;j<c;j++)
	{
		cout<<mat3[i][j]<<" ";
	}
	cout<<" |";
	cout<<endl;
}

}
else {
	cout<<"Please my friend the 1st matrix  must equal with the 2nd matrix \n or\n"<<endl;
	cout<< "The 1st row of matrix 1 with the 2nd column of matrix 2 and the 2nd column of the 1st matrix with the 1st row of the 2nd matrix must equal!!!\n"<<endl;
    }

}


/*exit()
{
	exit (0);
}*/

int main()
{
back:
cout<<"       WELCOME TO THE MARTRIX CALCULATER PROGRAM!    \n";
cout<<"--------------------------------------------------------\n";
cout<<"This program solves matrix depend on your interest"<<endl;
cout<<"--------------------------------------------------------"<<endl;
//cout<<"/////////////////////////////////////////////////////////////";
cout<<"                 _______________________________\n";
cout<<"                | which operation do you want ?| \n";
cout<<"                |For ADDITION       press 1. |\n";
cout<<"                |For MULTIPLICATION press 2. |\n";
cout<<"                |For SUBTRACTION    press 3. |\n";
cout<<"                |For TRANSPOSE      press 4. |\n";
cout<<"                |For exit           press 0. |\n";
cout<<"                 _______________________________\n";
cout<<"Enter your choice :-"<<endl;
cin>>choice;
switch(choice){
	case 1:
	add();
    break;
	case 2:
	mult();
	break;
	case 3:
	subs();
	break;
	case 4:
	trans();
	//break;
   // case 0:
	//exit();
	break;
	default:
		cout<<"Your choice must be from the given alternative \n"<<endl;
	
}
cout<<"\n DO YOU WANT TO CONTINUE  (Y/N)>>> "<<endl;
cin>>interest;
if(interest=='y'||interest=='Y')
{
	goto back;
}
else if(interest=='n'||interest=='N')
    // exit();
    cout<<"፰፮¢¢፮[®¥™]®¥፮¢፯";
}


    
