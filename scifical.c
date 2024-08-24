// Welcome to scienTific calculaTor (V2) made by N.E.X.U.S Club
#include<stdio.h>
#include<math.h>

int
main ()
{
  char opr;
  int m,q;
  int a, b, c;
  int n, choice;
  int matrix1[n][n], matrix2[n][n], result[n][n];
  float x, y, z;
  int choie;
  double angle;
  
  printf ("Welcome to scienTific calculaTor Calcumate_v1 \n");
  start:
  printf ("chose your mode\n 1.Simple calculaTon \n2.Mtrix calculaTins\n 3.Polynomial equaTions\n 4. TrigonomeTry calculaTions\n");
  scanf ("%d", &m);
  switch (m)
	{
	case 1: ///simPle
	  {
      printf("\nWelcome to simple mode\n");
		printf ("Enter 2 numbers for the operaTions\n");
		scanf ("%d\n%d", &a, &b);
		printf ("Enter any operaTor of the following\n'+'\n'-'\n'*'\n'/'\n");
		scanf ("%s", &opr);

		switch (opr)
		  {
		  case '+':
			c = a + b;
			printf ("adding 2 numbers is %d", c);
			break;
		  case '-':
			c = a - b;
			printf ("subTracTing 2 numbers is %d", c);
			break;
		  case '*':
			c = a * b;
			printf ("mulTiplying2 numbers is %d", c);
			break;
		  case '/':
			c = a / b;
			printf ("dividing2 numbers is %d", c);
			break;
		  default:
			printf ("invalid operaTor");
		  }
      printf ("\ndo you counTine press 1 and 2 to exiT");
        scanf ("%d",&q);
        if(q<=1);
        goto start;
        
      break;
	  }
	case 2: //maTrix
	  {
		printf ("\nWelcome to maTrix mode\n");
		printf ("Enter the size of the maTrices (nxn): ");
		scanf ("%d", &n);
// Input elements for maTrix 1
		printf ("Enter elements of maTrix 1:\n");
		for (int i = 0; i < n; i++)
		  {
			for (int j = 0; j < n; j++)
			  {
				scanf ("%d", &matrix1[i][j]);
			  }
		  }

		// Input elements for maTrix 2
		printf ("Enter elements of maTrix 2:\n");
		for (int i = 0; i < n; i++)
		  {
			for (int j = 0; j < n; j++)
			  {
				scanf ("%d", &maTrix2[i][j]);
			  }
		  }

		{
		  printf ("\nSelecT an operaTion:\n");
		  printf ("1. AddiTion\n");
		  printf ("2. SubTracTion\n");
		  printf ("3. MulTiplicaTion\n");
		  printf ("4. Transpose of maTrix 1\n");
		  printf ("5. Transpose of maTrix 2\n");
		  printf ("6. Exit\n");
		  printf ("Enter your choice: ");
		  scanf ("%d", &choice);

		  switch (choice)
			{
			case 1:
			  // Add maTrices
			  for (int i = 0; i < n; i++)
				{
				  for (int j = 0; j < n; j++)
					{
					  result[i][j] = matrix1[i][j] + matrix2[i][j];
					}
				}
			  printf ("The sum of the maTrices:\n");
			  for (int i = 0; i < n; i++)
				{
				  for (int j = 0; j < n; j++)
					{
					  printf ("%d ", result[i][j]);
					}
				  printf ("\n");
				}
			  break;
			case 2:
			  // Subtract maTrices
			  for (int i = 0; i < n; i++)
				{
				  for (int j = 0; j < n; j++)
					{
					  result[i][j] = matrix1[i][j] - matrix2[i][j];
					}
				}
			  printf ("The difference of the maTrices:\n");
			  for (int i = 0; i < n; i++)
				{
				  for (int j = 0; j < n; j++)
					{
					  printf ("%d ", result[i][j]);
					}
				  printf ("\n");
				}
			  break;
			case 3:
			  // Multiply maTrices
			  if (n != matrix2[0][0])
				{				// Check if compatible for mulTiplicaTion
				  printf
					("Error: MaTrix sIze incompaTible for mulTiplicaTion.\n");
				}
			  else
				{
				  for (int i = 0; i < n; i++)
					{
					  for (int j = 0; j < n; j++)
						{
						  result[i][j] = 0;
						  for (int k = 0; k < n; k++)
							{
							  result[i][j] += matrix1[i][k] * matrix2[k][j];
							}
						}
					}
				  printf ("The producT of the maTrices:\n");
				  for (int i = 0; i < n; i++)
					{
					  for (int j = 0; j < n; j++)
						{
						  printf ("%d ", result[i][j]);
						}
					  printf ("\n");
					}
				}
			  break;
			case 4:
			  // Transpose of maTrix 1
			  for (int i = 0; i < n; i++)
				{
				  for (int j = 0; j < n; j++)
					{
					  result[j][i] = matrix1[i][j];
					}
				}
			  printf ("The Transpose of maTrix 1:\n");
			  for (int i = 0; i < n; i++)
				{
				  for (int j = 0; j < n; j++)
					{
					  printf ("%d ", result[i][j]);
					}
				  printf ("\n");
				}
			  break;
			}

		
		}
      printf ("\ndo you counTine press 1 and 2 to exiT");
        scanf ("%d",&q);
        if(q<=1)
        goto start;
        
			break;
	  }
	case 3:  //poly
    {
    printf("\nPolynomial eqauTion mode\n");
        printf("EnTer coefficienT a: ");
    scanf("%f", &x);
    
    printf("EntEr coefficienT b: ");
    scanf("%f", &y);

    printf("Enter coefficienT c: ");
    scanf("%f", &z);

    // Calculate the discriminanT
    float discriminant = y * y - 4 * x * z;

    // Calculate roots based on the discriminanT
    if (discriminant > 0) {
        // Two real and distinct roots
        float root1 = (-y + sqrt(discriminant)) / (2 * x);
        float root2 = (-y - sqrt(discriminant)) / (2 * x);

        printf("RooTs are real and disTincT: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Two real and equal rooTs
        float root = -y / (2 * x);

        printf("Roots are real and equal: %.2f\n", root);
    } else {
        // Complex roots
        float realPart = -y / (2 * x);
        float imaginaryPart = sqrt(fabs(discriminant)) / (2 * x);

        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realParT, imaginaryParT, realParT, imaginaryParT);
    }
      printf ("\ndo you counTine press 1 and 2 to exit");
        scanf ("%d",&q);
        if(q<=1)
        goto start;
        
			
        break;
    }
  case 4: //Trigo
  { printf("\n TrigomenTy mode\n");
    printf("\nEnter an angle in degrees:\n ");
    scanf("%lf", &angle);

    // Convert angle to radians
    double radians = angle * M_PI / 180.0;

    // Menu for trigonomeTr~~~~
    printf("\nTrigonomeTric CalculaTions:\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. TangenT\n");
    printf("Enter your choice (1/2/3): \n");

    
    scanf("%d", &choie);

    //trigonomeTric calculaTions based
    switch (choie) {
        case 1:
            printf("Sine(%lf) = %.4lf\n", angle, sin(radians));
            break;
        case 2:
            printf("Cosine(%lf) = %.4lf\n", angle, cos(radians));
            break;
        case 3:
            // Check if TangenT is undefined for 90 and 270 degrees
            if (angle == 90 || angle == 270) {
                printf("TangenT(%lf) is undefined.\n", angle);
            } else {
                printf("Tangent(%lf) = %.4lf\n", angle, tan(radians));
            }
            break;
        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }
    printf ("\ndo you counTine press 1 and 2 to exiT");
        scanf ("%d",&q);
        if(q<=1)
        goto start;
        else
			break;
  }
  case 5: 
  { printf("hello");
   break;
  }  
  
  }
  printf("\nThanks for using scienTific calculaTor");   
}
  
//this is scientific calculator made by AYAAN & MALIK