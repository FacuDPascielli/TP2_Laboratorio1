#ifndef INPUT_H_
#define INPUT_H_

/** \brief                  SUMA DOS OPERANDOS.
 * \param numeroX float     PRIMER OPERANDO.
 * \param numeroY float     SEGUNDO OPERANDO.
 * \return float            RESULTADO DE LA SUMA.
 */
float sumar(float numeroX, float numeroY);

/** \brief                  RESTA DOS OPERANDOS.
 * \param numeroX float     PRIMER OPERANDO.
 * \param numeroY float     SEGUNDO OPERANDO.
 * \return float            RESULTADO DE LA RESTA.
 */
float restar(float numeroX, float numeroY);

/** \brief                  DIVIDE ENTRE DOS OPERANDOS, VERIFICA SI SE INGRESA 0.
 * \param numeroX float     PRIMER OPERANDO.
 * \param numeroY float     SEGUNDO OPERANDO
 * \return float            DEVUELVE RESULTADO DE DIVISION.
 */
float dividir(float numeroX, float numeroY);

/** \brief                  MULTIPLICA DOS OPERANDOS. VERIFICA QUE EL OPERANDOS B NO SEAN 0.
 * \param numeroX float     PRIMER OPERANDO.
 * \param numeroY float     SEGUNDO OPERANDO.
 * \return float            DEVUELVE RESULTADO DE MULTIPLICACION.
 */
float multiplicar(float numeroX, float numeroY);

/** \brief                  SACA FACTORIAL DEL NUMERO A QUE PEDIMOS.
 * \param numeroX int       NUMERO QUE NOS BRINDA EL USUARIO. VERIFICA SI EL NUMERO ES 0.
 * \return unsigned long    RESULTADO FACTORIAL NUMERO X. RETORNA EL RESULTADO FACTORIAL DEL NUMERO QUE NOS MANDO EL USUARIO.
 */
unsigned long factorial(int numero);

/** \brief                  PEDIR DATOS ENTEROS ANALIZARLOS VALIDARLOS Y MOSTRARLOS.
 * \param min int           DATO MINIMO A COMPARAR.
 * \param max int           DATO MAXIMO A COMPARAR.
 * \param dato int*         PUNTERO DATO.
 * \param intentos int      INTENTOS PARA REALIZAR OPERACION.
 * \param tipoDato char*    TIPO DE DATO A INGRESAR. Ejemplo: edad, numeros, letras, etc.
 * \param mensaje char*     MENSAJE A RECIBIR.
 * \param eMensaje char*    MENSAJE EN CASO DE ERROR.
 * \return int              DEVUELVE SI LA FUNCION FUNCIONO.
 */

int getInt(char* mensaje);

/** \brief                  PIDE UN FLOAT Y LO DEVUELVE
 * \param numero float      FLOAT A PEDIR.
 * \return float            DEVUELVE FLOAT.
 */
float getFloat(char* mensaje);

/** \brief                  PIDE UN CHAR Y LO DEVUELVE
 * \param texto char        CHAR A PEDIR.
 * \return char             DEVUELVE CHAR.
 */
char getChar(char* mensaje);

/** \brief                  PEDIMOS UN NUMERO VALIDAMOS QUE NO SEA O CONTENGA LETRAS.
 * \param cadena char*      PUNTERO A CADENA DONDE NOS INGRESARA LOS DATOS A ANALIZAR.
 * \return int              DEVUELVE SI FUNCIONO LA OPERACION.
 */
int esNumerico(char cadena[]);

/** \brief                  VALIDA QUE SEA UN DIA EL INGRESADO.
 * \param dia int           VALIDA SI EL DIA PASADO ES VALIDO.
 * \return int              DEVUELVE SI SE PUDO REALIZAR LA ACCION.
 */
int esDia(int dia);

/** \brief                  VALIDA QUE SEA UN MES EL NUMERO INGRESADO.
 * \param mes int           VALIDA SI EL MES PASADO ES VALIDO.
 * \return int              DEVUELVE SI SE PUDO REALIZAR LA ACCION.
 */
int esMes(int mes);

/** \brief                  VALIDA QUE SEA UN AÑO ENTRE 1900 y 2019 EL NUMERO INGRESADO.
 * \param anio int          VALIDA SI EL ANIO PASADO ES VALIDO.
 * \return int              DEVUELVE SI SE PUDO REALIZAR LA ACCION.
 */
int esAnio(int anio);

/** \brief                  VALIDA QUE LO INGRESADO SEA LETRA.
 * \param letra char        RECIBE UN DATO Y VALIDA SI ES LETRA.
 * \return int              DEVUELVE SI SE PUDO REALIZAR LA ACCION.
 */
int esSoloLetra(char letra);

/** \brief                  VALIDA QUE LO INGRESADO SOLO SEAN LETRAS
 * \param cadena[] char     RECIBE UN PUNTERO A CADENA CON LA INFO DEL USUARIO.
 * \return int              DEVUELVE SI SE PUDO REALIZAR ACCION.
 */
int esSoloLetras(char cadena[]);

/** \brief                  VALIDA SI SE INGRESA ALFA NUMERICOS.
 * \param cadena[] char     RECIBE UN PUNTERO A CADENA CON LA INFO DEL USUARIO.
 * \return int              DEVUELVE SI PUDO REALIZAR ACCION.
 */
int esAlfaNumerico(char cadena[]);

/** \brief                  VALIDA SI ES TELEFONO.
 * \param cadena[] char     RECIBE UN PUNTERO A CADENA CON LA INFO DEL USUARIO.
 * \return int              DEVUELVE SI REALIZO OPERACION.
 */
int esTelefono(char cadena[]);

/** \brief                  ORDENA UN ARRAY
 * \param cadena[] char     RECIBE UNA CADENA SEA CUAL SEA.
 * \param largoCadena int   RECIBE UN LARGO DE LA CADENA.
 * \param signo char        RECIBE UN SIGNO PARA SABER DE QUE MANERA QUEREMOS ORDENARLA, EJ.: <  menor, >  mayor.
 * \return int              DEVUELVE ENTERO PARA SABER SI SE PUDO REALIZAR ACCION.
 */
int burbujeo(char cadena[],int largoCadena,char signo);

/** \brief                  VALIDA SI LO INGRESADO ES DATO PERSONAL O NO.
 * \param dato char*        PUNTERO A CHAR, DATO A VALIDAR.
 * \param texto char*       PUNTERO A CHAR, DESCRIPCION DEL DATO A VALIDAR.
 * \return int              DEVUELVE QUE SE PUDO REALIZAR LA ACCION.
 */
int esDatoPersonal(char* dato, char* texto);

#endif // INPUT_H_
