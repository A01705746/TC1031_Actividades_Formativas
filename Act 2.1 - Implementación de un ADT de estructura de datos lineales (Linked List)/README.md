# Análisis de complejidad temporal

# add
Inserta un elemento en la estructura de datos de acuerdo a la política de acceso de la estructura, su entrada es la estructura de datos y el elemento a insertar, no tiene salida. Como precondición necesita ser una estructura válida y como postcondición la estructura debe ser modificada. Se divide en dos funciones, addFirst que añade el elemento en la primera posición de la estructura, al ser un paso directo tendría complejidad O(1), y add que recorre toda la estructura hasta llegar al último lugar y seguidamente añadir el nuevo elemento, es por ello que su complejidad sería O(n).

# find
Encuentra un elemento en la estructura y devuelve su posición, su entrada es el elemento a buscar como entero y su salida es las posición en la que se encuentra o -1 en caso de que no exista en la estructura. Como precondición y postcondición la estructura tiene que ser válida. Como tiene que recorrer todos los elementos para comprobar si se encuentra el valor entonces tiene una complejidad O(n).

# update
Actualiza un elemento dentro de la estructura de datos de acuerdo a la estructura de datos específica, su entrada es la posición de elemento a actualizar y el valor nuevo, no tiene salida. Como precondición necesita ser una estructura válida y como postcondición la estructura debe ser actualizada. La función sigue recorriendo los elementos uno por uno hasta llegar al índice deseado por lo que su complejidad es O(n).

# remove
Borrar un elemento dentro de la estructura de datos segun su posición, su entrada es la posición del elemento a eliminar y su salida el valor del elemento eliminado. Como precondición necesita ser una estructura válida y como postcondición la estructura debe ser actualizada. Tiene dos partes, la primera que er removeFirst que elimina el primer elemento de la estrcutura, es una operación directa así que su complejidad es O(1), la segunda es remove que recorre toda la estructura hasta encontrar el índice deseado, se crea el nuevo enlace y se borra el elemento, su complejidad sería O(n).

# Consideraciones
Para que el programa funcione de manera correcta es necesario que se descargue de igual manera el archivo de expeciones de la misma carpeta.
