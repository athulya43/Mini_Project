{
  system("cls");
           printf("EMPLOYEE's RECORD LIST (name, age, address, salary)");
           rewind(fp); ///this moves file cursor to start of the file
           while(fread(&e,recsize,1,fp)==1)  /// read the file and fetch the record one record per fetch
            {
            	
               printf("\n\n%s \t\t%d \t%s \t%.2f",e.name,e.age,e.address,e.bs); /// print the name, age and basic salary
            }
           getch();
}
