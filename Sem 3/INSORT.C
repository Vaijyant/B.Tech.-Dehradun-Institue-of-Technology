 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int arr[10], i, j, temp;
	clrscr();
	printf("Enter Array Elements\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=0; i<10; i++)
	{
		temp = arr[i];
		j  = i - 1;
		while(j>=0 && temp<arr[j])
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = temp;
	}
	printf("\nSorted array is\n\n");
	for(i=0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}
	getch();
 }