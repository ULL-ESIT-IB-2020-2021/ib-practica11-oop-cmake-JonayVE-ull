/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>

const std::string kHelpText = "El programa imprime en el fichero de salida (tercer parámetro) las \
N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro) con una separación \
de un día entre  fechas sucesivas";

void Usage(int argc, char *argv[]);
