#include<stdio.h>
#include<conio.h>
#include<string.h>

struct deduct
{
	int sss;
	int pag;
	float ph;
	float wtax;
	float taxinc;
	float netsal;	
};

struct name
{
	char Fn [30];
	char Mn [30];
	char Ln [35];
};

struct emprec
{
	struct name empname;
	char cstat[20];
	int salary;
	struct deduct kaltas;
	
} p[100];

int main()
{
	int i, n;

	printf ("How many records do you want to enter? ");
    scanf ("%d", &n);
    
    /*read employee details*/
    for(i = 0; i<n; i++) 
    {
	    printf("\nPlease Enter Employee #%d Details:\n", (i+1));
	    
	    printf("First Name: ");
    	scanf("%s", p[i].empname.Fn);
    	
    	printf("Middle Name: ");
		scanf("%s", p[i].empname.Mn);
			
		printf("Last Name: ");
    	scanf("%s", p[i].empname.Ln);
    
	    printf("Civil Status: ");
	    scanf("%s", p[i].cstat);
	    
	    printf("Basic Salary: ");
	    scanf("%d", &p[i].salary);
	}
	
    
	/*print employee details*/
	for(i=0; i<n; i++) 
	{
		printf("*************************************** \n\n");
		printf("\nEmployee #%d Record:\n", (i+1));
		printf("Employee Name: %s %s %s\n", p[i].empname.Fn, p[i].empname.Mn, p[i].empname.Ln);
		printf("Civil Status: %s\n", p[i].cstat);
		printf("Basic Salary: %d\n\n", p[i].salary);
		printf("Your Salary Deductions are:\n\n");
	
    /*print salary deductions*/
    
    /*computing government mandated salary deductions*/
    
    /*Pag-ibig Deduction*/
    p[i].kaltas.pag=100;
    printf("Pag-ibig Contribution: %d\n", p[i].kaltas.pag);
    
    /*PhilHealth Deduction*/
    if (p[i].salary==10000)
	{
		p[i].kaltas.ph=(p[i].salary*0.03);
		printf("PhilHealth Contribution: %f\n", p[i].kaltas.ph);
	}
        
    else if (p[i].salary<60000 && p[i].salary>10000)
	{
		p[i].kaltas.ph=(p[i].salary*0.03)*0.5;
		printf("PhilHealth Contribution: %f\n", p[i].kaltas.ph);
	}
	
	else if (p[i].salary>=60000)
	{
		p[i].kaltas.ph=900;
		printf("PhilHealth Contribution: %f\n", p[i].kaltas.ph);
	}
    
    /*SSS Deduction*/
	if (p[i].salary<10249.99 && p[i].salary>9750)
	{
		p[i].kaltas.sss=400;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
        
    else if (p[i].salary<10749.99 && p[i].salary>10250)
	{
		p[i].kaltas.sss=420;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
    
    else if (p[i].salary<11249.99 && p[i].salary>10760)
	{
		p[i].kaltas.sss=440;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<11749.99 && p[i].salary>11250)
	{
		p[i].kaltas.sss=460;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<12249.99 && p[i].salary>11750)
	{
		p[i].kaltas.sss=480;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
    
    else if (p[i].salary<12749.99 && p[i].salary>12250)
	{
		p[i].kaltas.sss=500;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<13249.99 && p[i].salary>12760)
	{
		p[i].kaltas.sss=520;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<13749.99 && p[i].salary>13250)
	{
		p[i].kaltas.sss=540;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<14249.99 && p[i].salary>13750)
	{
		p[i].kaltas.sss=560;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
    
    else if (p[i].salary<14749.99 && p[i].salary>14250)
	{
		p[i].kaltas.sss=580;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<15249.99 && p[i].salary>14750)
	{
		p[i].kaltas.sss=600;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<15749.99 && p[i].salary>15250)
	{
		p[i].kaltas.sss=620;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<16249.99 && p[i].salary>15750)
	{
		p[i].kaltas.sss=640;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
    
    else if (p[i].salary<16749.99 && p[i].salary>16250)
	{
		p[i].kaltas.sss=660;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<17249.99 && p[i].salary>16750)
	{
		p[i].kaltas.sss=680;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<17749.99 && p[i].salary>17250)
	{
		p[i].kaltas.sss=700;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<18249.99 && p[i].salary>17750)
	{
		p[i].kaltas.sss=720;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
    
    else if (p[i].salary<18749.99 && p[i].salary>18250)
	{
		p[i].kaltas.sss=740;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<19249.99 && p[i].salary>18750)
	{
		p[i].kaltas.sss=760;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary<19749.99 && p[i].salary>19250)
	{
		p[i].kaltas.sss=780;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	else if (p[i].salary>=19750)
	{
		p[i].kaltas.sss=800;
		printf("SSS Contribution: %d\n", p[i].kaltas.sss);
	}
	
	/*calculate Taxable Income*/
	p[i].kaltas.taxinc=p[i].salary-(p[i].kaltas.ph+p[i].kaltas.pag+p[i].kaltas.sss);
	
    /*Withholding Tax*/
    if (p[i].kaltas.taxinc<=20833)
	{
		p[i].kaltas.wtax=0;
		printf("Withholding Tax: %f\n", p[i].kaltas.wtax);
	}
        
    else if (p[i].kaltas.taxinc<33333 && p[i].kaltas.taxinc>20833)
	{
		p[i].kaltas.wtax=(p[i].salary-20833)*0.20;
		printf("Withholding Tax: %f\n", p[i].kaltas.wtax);
	}
    
	else if (p[i].kaltas.taxinc<66667 && p[i].kaltas.taxinc>=33333)
	{
		p[i].kaltas.wtax=(2500)+((p[i].kaltas.taxinc-33333)*0.25);
		printf("Withholding Tax: %f\n", p[i].kaltas.wtax);
	}
	
	else if (p[i].kaltas.taxinc<166667 && p[i].kaltas.taxinc>=66667)
	{
		p[i].kaltas.wtax=(10833)+((p[i].kaltas.taxinc-66667)*0.30);
		printf("Withholding Tax: %f\n", p[i].kaltas.wtax);
	}
	
	else if (p[i].kaltas.taxinc<666667 && p[i].kaltas.taxinc>=166667)
	{
		p[i].kaltas.wtax=(40833.33)+((p[i].kaltas.taxinc-166667)*0.32);
		printf("Withholding Tax: %f\n", p[i].kaltas.wtax); 
	}
	
	else if (p[i].kaltas.taxinc>=666667)
	{
		p[i].kaltas.wtax=(200833.33)+((p[i].kaltas.taxinc-666667)*0.35);
		printf("Withholding Tax: %f\n", p[i].kaltas.wtax);
	}
	
	/*calculate net salary*/
    p[i].kaltas.netsal=p[i].salary-(p[i].kaltas.ph+p[i].kaltas.pag+p[i].kaltas.sss+p[i].kaltas.wtax);
    
    
    /*print net salary*/
    printf("\nEmployee #%d Net Salary is: %f\n", (i+1),p[i].kaltas.netsal);
	}
	
    return 0;
}
