# Análisis de complejidad temporal

# Ordena Selección
Ordena en forma ascendente los datos con el método de Selcción, siendo la entrada un vector de enteros con n números. Es un algoritmo de O(n^2) en el peor de los casos, esto debido a los for anidados, va de "i" a "n" y de "j" a "i", recorriendo n^2 pasos.

# Ordena Burbuja
Ordena en forma ascendentelos datos con el método de Burbuja, siendo la entrada un vector de enteros con n números. De igual forma cuenta con for anidados, se puede entender su complejidad como (n*(n+1))/2, por lo que lo más próximo a la tabla de complejidad es O(n^2) para el peor de los casos.

# Ordena Merge
Ordena en forma ascendente los datos con el método de Merge, siendo la entrada un vector de enteros con n números. Por su naturaleza tiene que recorrer los n elementos del arreglo, pero al momento de ordenar las particiones toma una forma de log n, esto se debe a que por cada dos divisiones hay un ordenamiento, por lo que su complejidad sería O(n log n) para el peor de los casos.

# Búsqueda Secuencial
Busca con la busqueda secuencial un dato entero dentro del vector, siendo la entrada el vector de enteros y el dato que se desea buscar, devolviendo como salida el índice en el que se encuentra el dato o -1 en caso de que no se localice. Este tipo de búsqueda necesita recorrer todos y cada uno de los elementos del vector para realizar la búsqueda, es un algoritmo lineal O(n) ya que recorre n pasos.

# Búsqueda Binaria
Busca con la busqueda binaria un dato entero dentro del vector, siendo la entrada el vector de enteros y el dato que se desea buscar, devolviendo como salida el índice en el que se encuentra el dato o la posición donde debería estar  en caso de que no se localice. Ya que el algoritmo va dividiendo el arreglo y descartando las partes menores o mayores al valor recorre menos pasos que la cantidad de elementos del vector, entonces su complejidad sería O(log n).
