/*Name:Ng Ke Rong*/
/*I/C No:990124-07-5449*/
/*Date:2July2018*/

#define N 3

#include <stdio.h>

int main()
{
	/*Function Prototype*/
	float calculatePrice(char comboType);

	/*Declaration*/
	float customerPayment[N];
	char comboType;
	int Qty;
	char addOn;
	int addQty;
	float ordPrice;
	float price;
	float addPrice;
	int counter;
	int Line;
	float addOrd;
	float grandTotal;
	int customer;

	/*Initialize*/
	grandTotal=0;

	/*Display Selection List*/
	clrscr();
	printf("\t\t\t\tSATAY RESTAURANT\n\t");
	Line=1;
	while(Line<70)
	{
		printf("%c",196);
		Line++;
	}
	printf("\n\tCombo Type\t\t\tItem\t\t\tPrice(RM)\n\t");
	Line=1;
	while(Line<70)
	{
		printf("%c",196);
		Line++;
	}
	printf("\n\t A\t\t25 Chicken Satay+25Beef Satay\t\t40.00\n");
	printf("\t B\t\t30 Chicken Satay+20 Mutton Satay\t52.00\n");
	printf("\t C\t\t10 Mutton Satay+40 Beef Satay\t\t46.00\n");
	printf("\tAdd-On\t\t1 Ketupat\t\t\t\t0.60\n\t");
	Line=1;
	while(Line<70)
	{
		printf("%c",196);
		Line++;
	}

	/*Loop*/
	for(customer=0;customer<N;customer++)
	{
		/*Input Customer*/
		printf("\n\tCustomer%2d:\n\t",customer+1);
		Line=1;
		while(Line<12)
		{
			printf("-");
			Line++;
		}

		/*Initialize*/
		counter=1;
		customerPayment[customer]=0;

		/*Input First Combo Type*/
		printf("\n\t\t%d.Enter Combo Type(A/B/C or X to end)\t:",counter);
		scanf("%c",&comboType);
		fflush(stdin);

		/*Convert to Uppercase*/
		comboType=toupper(comboType);

		/*Loop*/
		while(comboType!='X')
		{
			/*Input Quantity*/
			printf("\t\t  Enter quantity\t\t\t:");
			scanf("%d",&Qty);
			fflush(stdin);

			/*Call Function*/
			price=calculatePrice(comboType);

			/*Calculate Order Price*/
			ordPrice=price*Qty;

			/*Display Order Price*/
			printf("\t\t  Order Price for combo %c\t\t:RM%.2f\n\n",comboType,ordPrice);

			/*Accumulate Total Order Price*/
			customerPayment[customer]+=ordPrice;

			/*Increase counter by one*/
			counter++;

			/*Input Next Combo Type*/
			printf("\t\t%d.Enter combo type(A/B/C or X to end)\t:",counter);
			scanf("%c",&comboType);
			fflush(stdin);

			/*Convert to Uppercase*/
			comboType=toupper(comboType);
		}
		/*Input Add-On*/
		printf("\n\tAdd-on Ketupat(Y/N)\t\t\t\t:");
		scanf("%c",&addOn);
		fflush(stdin);

		/*Convert to Uppercase*/
		addOn=toupper(addOn);

		/*Input Adds-On Quantity*/
		printf("\tEnter Ketupat quantity\t\t\t\t:");
		scanf("%d",&addQty);
		fflush(stdin);

		/*Selection*/
		if(addOn=='Y')
			addPrice=0.60;
		else
			addPrice=0.00;

		/*Calculate Order Price*/
		addOrd=addPrice*addQty;

		/*Display Add-On*/
		printf("\tOrder Price for ketupat\t\t\t\t:Rm%.2f\n\n",addOrd);

		/*Calculate Total Order Price*/
		customerPayment[customer]+=addOrd;

		/*Display Total Price*/
		printf("Total order price for customer%2d\t\t:Rm%.2f\n\t",customer+1,customerPayment[customer]);
		Line=1;
		while(Line<70)
		{
			printf("%c",196);
			Line++;
		}
		/*Accumulate Grand Total*/
		grandTotal+=customerPayment[customer];
	}
	/*Display Order Price Summary*/
	printf("\n\n\t\t\tOrder Price Summary\n\t");
	Line=1;
	while(Line<70)
	{
		printf("%c",196);
		Line++;
	}
	printf("\n\tCustomer No\t\t\tTotal Order Price(RM)\n\t");
	Line=1;
	while(Line<70)
	{
		printf("%c",196);
		Line++;
	}
	/*Loop*/
	for(customer=0;customer<N;customer++)
	{
		/*Display Customer and Total Order Price*/
		printf("\n\t\t%d\t\t\t\t%.2f",customer+1,customerPayment[customer]);
	}
	printf("\n\t");
	Line=1;
	while(Line<70)
	{
		printf("%c",196);
		Line++;
	}
	/*Display Grand Total*/
	printf("\n\tGrand Total\t\t\t\t%.2f\n\t",grandTotal);
	Line=1;
	while(Line<70)
	{
		printf("%c",209);
		Line++;
	}

	getch ();
	return 0;
}

/*Function Name:calculatePrice*/
/*Parameter:char comboType*/
/*Return:float*/

float calculatePrice(char comboType)
{
	/*Declaration*/
	float price;

	/*Selection*/
	if(comboType=='A')
		price=40.00;
	else if(comboType=='B')
		     price=52.00;
	     else if(comboType=='C')
			  price=46.00;
		  else
			  price=0.00;

	return price;
}