#include<stdio.h>
main()
{
	int rows,cols,i,j;
	
	printf("Enter the array's row size : ");
	scanf("%d",&rows);
	
	printf("Enter the array's column size : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	printf("\nEnter array's elements : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	 
    for (i = 0; i < rows; i++) {
      int row_sum=0;
        for (j = 0; j < cols; j++) {
            row_sum += arr[i][j];
        }
        printf("\nSum of elements in row %d: %d\n", i, row_sum);
    }
       for (j = 0; j < cols; j++) {
       int col_sum=0;
        for (i = 0; i < rows; i++) {
            col_sum += arr[i][j];
        }
        printf("\nSum of elements in col %d: %d\n", j, col_sum);
    }
}

