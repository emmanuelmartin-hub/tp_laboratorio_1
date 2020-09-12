#ifndef MENUOPERACIONES_H_INCLUDED
#define MENUOPERACIONES_H_INCLUDED
/** \brief Muestra de menú
 *
 * \param int Primer operando
 * \param int segundo operando
 * \param int ingreso de primer operando
 * \param int ingreso de segundo operando
 * \return
 *
 */
int menu(int a, int b, int flagPrimerMenu, int flagSegundoMenu);
/** \brief Suma de operandos
 *
 * \param int Primer operando
 * \param int Segundo operando
 * \return int Resultado de suma
 *
 */
int sumarNumeros(int a, int b);
/** \brief Suma de operandos
 *
 * \param int Primer operando
 * \param int Segundo operando
 * \return int Resultado de resta
 *
 */
int restarNumeros(int a, int b);
/** \brief Suma de operandos
 *
 * \param int Primer operando
 * \param int Segundo operando
 * \return float Resultado de división
 *
 */
float dividirNumeros(int a, int b);
/** \brief Suma de operandos
 *
 * \param int Primer operando
 * \param int Segundo operando
 * \return int Resultado de multiplicación
 *
 */
int multiplicarNumeros(int a, int b);
/** \brief Suma de operandos
 *
 * \param int Primer operando
 * \return long int Resultado de factorial a
 *
 */
long int factorialNumeros(int a);
/** \brief Suma de operandos
 *
 * \param int Primer operando
 * \return long int Resultado de factorial b
 *
 */
long int factorialNumeros(int b);
#endif // MENUOPERACIONES_H_INCLUDED
