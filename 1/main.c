#include <stdio.h>
    void main()
    {
        int i, j, a, n,number[100],search,first,last,middle;
        printf("Enter the value:");
        scanf("%d", &n);

         for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &number[i]);


     }

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The Numbers Sorted in ascending order \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);


   printf("Enter the value to find:\n");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (number[middle] < search)
         first = middle + 1;
      else if (number[middle] == search) {
         printf("%d is present at index %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;

    }


