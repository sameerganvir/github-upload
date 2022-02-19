int factorial(int number)
{
   
	int fact=1;
	if(number<0)	
    		return -1;
	else{
		for(int i=1;i<=number;i++)
			fact*=i;
		return fact;
	}
}
