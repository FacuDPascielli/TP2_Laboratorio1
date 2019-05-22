#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <string.h>
#include "input.h"

int menuPrincipal()
{
    int opcion;
    printf("Bienvenido al abm empleados.\n\n");
    printf("1- Dar alta de empleado.\n");
    printf("2- Modificar empleado.\n");
    printf("3- Dar de baja empleado.\n");
    printf("4- Listar empleados.\n");
    printf("5- Mostrar total de salarios y promedio.\n");
    printf("6- Ordenar empleados.\n");
    printf("7- Salir.\n");
    printf("\nIngrese una opcion: ");
    scanf("%d",&opcion);
    return opcion;
}

int  menuModificar()
{
    int opcion;
    printf("Elija la opcion a modificar: ");
    printf("1- Nombre");
    printf("2- Apellido");
    printf("3- Salario");
    printf("4- Sector");
    printf("5- Salir");
    scanf("%d", &opcion);
    return opcion;
}

void initEmployees(eEmployee empleado[], int tam)
{
    for(int i = 0; i<tam; i++)
    {
        empleado[i].isEmpty = 1;
    }
}

int searchFree(eEmployee empleoyee[], int cantEmp)
{
    int indice = -1;
    for(int i = 0; i < cantEmp; i++)
        {
            if(empleoyee[i].isEmpty == 1)
                {
                    indice = i;
                }
        }
    return indice;
}

int findEmployeeById(eEmployee emp[], int cantEmp, int id)
{
    int indice = -1;
    for(int i = 0; i < cantEmp;  i++)
        {
            if(emp[i].isEmpty == 0 && emp[i].id == id)
                {
                    indice = id;
                    break;
                }
        }
    return indice;
}


void printEmployee(eEmployee emp)
{
    printf("Id: %d | Name: %s | Last Name: %s | Salary: %d | Sector: %s", emp.id, emp.name, emp.lastName, emp.salary, emp.sector);
}

void printEmployees(eEmployee emp[], int cantEmp)
{
    int contador = 0;
    for(int i = 0; i < cantEmp; i++)
        {
            if(emp[i].isEmpty == 0)
                {
                    printEmployee(emp[i]);
                    contador++;
                }
        }
    if(contador = 0)
        {
            printf("No hay nada que mostrar");
        }
}

void addEmployee(eEmployee emp[], int cantEmp)
{
    int indice;

    indice = searchFree(emp, cantEmp);

    if(indice == -1)
        {
            printf("No hay espacio en el sistema");
        }else
        {
            emp[indice].id = indice + 1;

            esDatoPersonal(emp[indice].name, "NOMBRE");

            esDatoPersonal(emp[indice].lastName, "APELLIDO");

            while(getFloat("INGRESE SALARIO") == 1)
                {
                    printf("RE");
                }
            esDatoPersonal(emp[indice].sector, "SECTOR");

            emp[indice].isEmpty = 1;
        }

}

void modifyEmployee(eEmployee emp[], int cantEmp)
{
    int indice;
    int id;
    char confirma;
    char salirModif;
    char confirma1;

    printf("Ingrese el id del empleado a modificar: ");
    scanf("%d", id);
    indice = findEmployeeById(emp, cantEmp, id);

    if(indice == -1)
        {
            printf("No existe ningun empleado con ese legajo");
        }else
        {
            printEmployee(emp[indice]);
            printf("Este es su empleado? s/n");
            fflush(stdin);
            scanf("%c", confirma);
            confirma = tolower(confirma);
            while(confirma != 'n' && confirma != 's')
            {
                printf("Error, ingrese una opcion valida.");
                fflush(stdin);
                scanf("%c", &confirma);
            }
            if(confirma == 'n')
                {
                    salirModif = 's';
                }else
                {
                    do
                        {
                            system("cls");

                            switch(menuModificar())
                            {
                                case 1:
                                    esDatoPersonal(emp[indice].name, "NOMBRE");
                                    printf("Cambio exitoso\n");
                                    system("pause");
                                    system("cls");
                                    break;
                                case 2:
                                    esDatoPersonal(emp[indice].lastName, "APELLIDO");
                                    printf("Cambio exitoso\n");
                                    system("pause");
                                    system("cls");
                                    break;
                                case 3:
                                    while(getFloat("INGRESE SALARIO") == 1)
                                        {
                                            printf("RE");
                                        }
                                    printf("Cambio exitoso\n");
                                    system("pause");
                                    system("cls");
                                    break;
                                case 4:
                                    esDatoPersonal(emp[indice].name, "SECTOR");
                                    printf("Cambio exitoso\n");
                                    system("pause");
                                    system("cls");
                                    break;
                                case 5:
                                    printf("\nConfirma salida s/n?: ");
                                    fflush(stdin);
                                    confirma1 = getche();

                                            if( tolower(confirma1) == 's')
                                            {
                                                salirModif = 'n';
                                            }
                                    break;
                                default:
                                    printf("Opcion invalida");
                                    system("break");


                            }
                        }while(salirModif == 'n');

                }


        }

}

int removeEmployee(eEmployee emp[], int cantEmp)
{
    int indice;
    int id;

    id = getInt("Ingrese el id del empleado a modificar: ");

    while(esNumerico(id) == 1)
        {
            id = getInt("Reingrese el id dele empleado a modificar");
        }

    indice = findEmployeeById(emp, cantEmp, id);

}

