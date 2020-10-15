# Análisis de complejidad temporal

# add
Inserta un elemento en la estructura de datos de acuerdo a la política de acceso de la estructura, su entrada es la estructura de datos y el elemento a insertar, como salida es la structura de datos valida mostrando la inserción del elemento . Como precondición necesita ser una estructura válida y como postcondición la estructura debe ser modificada. Tiene la función add que recorre toda la estructura hasta llegar al último lugar y seguidamente añadir el nuevo elemento, es por ello que su complejidad sería O(n).

# find
Encuentra un elemento en la estructura y devuelve su posición, su entrada es el la estructura de datos e información adicional sobre el elemento a recuperar (dependiendo de la estructura de datos) y su salida es las posición en la que se encuentra o -1 en caso de que no exista un elemento con esas características. Como precondición la estructura tiene que ser válida. Como tiene que recorrer todos los elementos para comprobar si se encuentra el valor entonces tiene una complejidad O(n).

# update
Actualiza un elemento dentro de la estructura de datos de acuerdo a la estructura de datos específica, su entrada es la estructura de datos, el elemento a actualizar y los valores a modificar, como salida es la estructura de datos debidamente actualizada. Como precondición necesita ser una estructura válida y como postcondición la estructura debe ser actualizada. La función sigue recorriendo los elementos uno por uno hasta llegar al índice deseado por lo que su complejidad es O(n).

# remove
Borra un elemento dentro de la estructura de datos de acuerdo a la estructura de datos específica, su entrada es la estructura de datos y criterios que determinan el elemento a borrar, su salida es la estructura de datos actualizada. Como precondición necesita ser una estructura válida y como postcondición la estructura debe ser actualizada. Tiene dos partes, la primera que er removeFirst que elimina el primer elemento de la estrcutura, es una operación directa así que su complejidad es O(1), la segunda es remove que recorre toda la estructura hasta encontrar el índice deseado, se crea el nuevo enlace y se borra el elemento, su complejidad sería O(n).
