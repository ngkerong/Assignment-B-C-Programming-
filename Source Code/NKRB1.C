/*Name:Ng Ke Rong*/
/*I/C No:990124-07-5449*/
/*Date:21June2018*/

#include <stdio.h>

int main()
{
	/*Declaration*/
	char comboType;
	int Qty;
	char addOn;
	int addQty;
	float ordPrice;
	float price;
	float addPrice;

	/*Display Selection List*/
	clrscr();
	printf("\t\t\t\tSATAY RESTAURANT\n");
	printf("\t-----------------------------------------------------------------\n");
	printf("\tCombo Type\t\t\tItem\t\t\tPrice(RM)\n");
	printf("\t-----------------------------------------------------------------\n");
	printf("\t A\t\t25 Chicken Satay+25Beef Satay\t\t40.00\n");
	printf("\t B\t\t30 Chicken Satay+20 Mutton Satay\t52.00\n");
	printf("\t C\t\t10 Mutton Satay+40 Beef Satay\t\t46.00\n");
	printf("\tAdd-On\t\t1 Ketupat\t\t\t\t0.60\n");
	printf("\t-----------------------------------------------------------------\n\n");

	/*Input Combo Type*/
	printf("\tEnter Combo Type(A/B/C)\t:");
	scanf("%c",&comboType);
	fflush(stdin);

	/*Convert to Uppercase*/
	comboType=toupper(comboType);

	/*Input Quantity*/
	printf("\tEnter quantity\t\t:");
	scanf("%d",&Qty);
	fflush(stdin);

	/*Selection*/
	if(comboType=='A')
		price=40.00;
	else if(comboType=='B')
		     price=52.00;
	     else if(comboType=='C')
			  price=46.00;
		  else
			  price=0.00;

	/*Calculate Order Price*/
	ordPrice=price*Qty;

	/*Input Add-On*/
	printf("\tAdd-on Ketupat(Y/N)\t:");
	scanf("%c",&addOn);
	fflush(stdin);

	/*Convert to Uppercase*/
	addOn=toupper(addOn);

	/*Input Add-On Quantity*/
	printf("\tEnter Ketupat quantity\t:");
	scanf("%d",&addQty);

	/*Selection*/
	if(addOn=='Y')
		addPrice=0.60;
	else
		addPrice=0.00;

	/*Calculate Order Price*/
	ordPrice+=addQty*addPrice;

	/*Display Order Price*/
	printf("\tOrder Price\t\t:RM%.2f",ordPrice);

	getch ();
	return 0;
}