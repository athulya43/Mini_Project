 {
   
            system("cls");
            fseek(fp,0,SEEK_END); /// search the file and move cursor to end of the file
            /// here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')  /// if user want to add another record
            {
                printf("\nEnter name: ");
                scanf("%s",e.name);
                printf("\nEnter age: ");
                scanf("%d", &e.age);
                printf("\nEnter Address:");
                scanf("%s",e.address);
                printf("\nEnter basic salary: ");
                scanf("%f", &e.bs);

                fwrite(&e,recsize,1,fp); /// write the record in the file

                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
