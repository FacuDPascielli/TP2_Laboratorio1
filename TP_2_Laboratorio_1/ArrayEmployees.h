#ifndef ARRAY_EMPLEOYEE_H_
#define ARRAY_EMPLEOYEE_H_

typedef struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}eEmployee;

void initEmployees(eEmployee empleado[], int tam);

int searchFree(eEmployee empleoyee[], int cantEmp);

int findEmployeeById(eEmployee emp[], int cantEmp, int id);

void printEmployee(eEmployee emp);

void printEmployees(eEmployee emp[], int cantEmp);




#endif // ARRAY_EMPLEOYEE_H_

