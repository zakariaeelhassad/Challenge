int main()
{

	int a ;
	printf ("entrez un number :");
	scanf ("%d",&a);
	int i = 1, j, s , b;
	char hexa_Number[100];

	while (a != 0) {
        
		if (a != 0){
			b = a % 2;
            a = a / 2;
           printf("%d",b);
		}
		s = a % 16;
		if (s < 10)
			s = s + 48;
		else
			s = s + 55;//ASCII code
		hexa_Number[i++] = s;
		a = a / 16;
	}
	printf("\n Hexadecimal value is: ");
	for (j = i - 1; j > 0; j--)
		printf("%c", hexa_Number[j]);

	return 0;
}