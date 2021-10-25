#include<stdio.h>
void main()
{
	//variable declaration
	int phy,che,mat,eng,tot;
	
	   //Initialisation
	   phy=60;
	   che=50;
	   mat=40;
	   eng=30;
	   
	   //caluculation
	   tot=phy+che+mat+eng;
	   
	   //output
	   printf("Marks in physics: %d\n",phy);
	   printf("Marks in chemistry:%d\n",che);
	   printf("Marks in maths:%d\n",mat);
	   printf("Marks in english:%d\n",eng);
	   printf("Total:%d",tot);
}
