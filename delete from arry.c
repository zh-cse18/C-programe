#include<stdio.h>
main()
{

	{int array[20],k,i,j,n,item;
	char ch;
	printf("How many element are in the array:");
	scanf("%d",&n);
	printf("Input %d integer number",n);
	for(i=0;i<=n;i++)
		scanf("%d",&array[i]);
	printf("\nInitially the arry contain ......");
	for(i=0;i<=n;i++)
		printf("\nElement at position %d=%d",i,array[i]);
	start:
		printf("\n\nEnter polsition of the array to be deleted:");
		scanf("%d",&k);
		item=array[k];

	for(j=k;j<=n-1;j++)
		array[j]=array[j+1];
	n=n-1;
	printf("\n\nAfter deleting the element (%d).....\n",item);
	printf("\n\nRThe array contain%....");
	for(i=0;i<=n;i++)
		printf("\nElement at position %d=%d",i,array[i]);
	printf("\n\nDo u want to continue.........( press y )");
	scanf("%c",&ch);
	if(ch=='y')
		goto start;
	else
		exit(0);}



	}




{
	printf("\n\nYou want to insert:....\n\n\n\n");




	{int array[20],k,i,j,n,item;
	char ch;
	printf("How many element are in the array:");
	scanf("%d",&n);
	printf("Input %d integer number",n);
	for(i=0;i<=n;i++)
		scanf("%d",&array[i]);
	printf("\nInitially the arry contain ......");
	for(i=0;i<=n;i++)
		printf("\nElement at position %d=%d",i,array[i]);
	startt:
		printf("\n\nEnter polsition of the array to be insert:\n");
		scanf("%d",&item);
		printf("\nInput the insertion number:");
		scanf("%d",&k);
		j=n;
		while(j>=k)
		{
			array[j+1]=array[j];
			j=j-1;

		}
		array[k]=item;
		n=n+1;

	printf("\n\nAfter inserting the element (%d).....\n",item);
	printf("\n\nRThe array contain%....");
	for(i=0;i<=n;i++)
		printf("\nElement at position %d=%d",i,array[i]);
	printf("\n\nDo u want to continue.........( press y)");
	scanf("%c",&ch);
	if(ch=='y')
		goto startt;
	else
		exit(0);}

}




/*switch(l)

{

case 1:
	insert();
	break;
case 2:
	break;
default :
	exit(0);


}*/



}
