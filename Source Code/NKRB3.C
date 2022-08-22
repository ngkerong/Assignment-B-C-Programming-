/*Name:Ng Ke Rong*/
/*I/C No:990124-07-5449*/
/*Date:21June2018*/

#include <stdio.h>

int main()
{
	/*Function Prototype*/
	float calculatePrice(char comboType);

	/*Declaration*/
	char comboType;
	int Qty;
	char addOn;
	int addQty;
	float ordPrice;
	float price;
	float addPrice;
	int counter;
	float totalPrice;
	int Line;
	float addOrd;

	/*Initialize*/
	counter=1;
	totalPrice=0;

	/*Display Selection List*/
	clrscr();
	printf("\t\t\t\t  SATAY RESTAURANT\n\t");
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

	/*Input Combo Type*/
	printf("\n\n\t%d.Enter Combo Type(A/B/C or X to end)\t:",counter);
	scanf("%c",&comboType);
	fflush(stdin);

	/*Convert to Uppercase*/
	comboType=toupper(comboType);

	/*Loop*/
	while(comboType!='X')
	{
		/*Input Quantity*/
		printf("\tEnter quantity\t\t\t\t:");
		scanf("%d",&Qty);
		fflush(stdin);

		/*Call Function*/
		price=calculatePrice(comboType);

		/*Calculate Order Price*/
		ordPrice=price*Qty;

		/*Display Order Price*/
		printf("\tOrder Price for combo %c\t\t\t:RM%.2f\n\n",comboType,ordPrice);

		/*Accumulate Total Order Price*/
		totalPrice+=ordPrice;

		/*Increase counter by one*/
		counter++;

		/*Input Next Combo Type*/
		printf("\t%d.Enter combo type(A/B/C or X to end)\t:",counter);
		scanf("%c",&comboType);
		fflush(stdin);

		/*Convert to Uppercase*/
		comboType=toupper(comboType);
	}
	/*Input Add-On*/
	printf("\n.\tAdd-on Ketupat(Y/N)\t\t\t:");
	scanf("%c",&addOn);
	fflush(stdin);

	/*Convert to Uppercase*/
	addOn=toupper(addOn);

	/*Input Add-On Quantity*/
	printf("\tEnter Ketupat quantity\t\t\t:");
	scanf("%d",&addQty);

	/*Selection*/
	if(addOn=='Y')
		addPrice=0.60;
	else
		addPrice=0.00;

	/*Calculate Order Price*/
	addOrd=addPrice*addQty;

	/*Display Add-On*/
	printf("\tOrder Price for ketupat\t\t\t:Rm%.2f\n\n",addOrd);

	/*Calculate Total Order Price*/
	totalPrice+=addOrd;

	/*Display Total Order Price*/
	printf("\tTotal Order Price\t\t\t:RM%.2f",totalPrice);

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
}
