# Análisis de complejidad temporal

# push
Agrega un dato a la fila priorizada, como entrada es un entero, el cual se desea agregar a la fila priorizada, no tiene salida. Como precondición el valor n debe ser entero y de postcondición la fila priorizada tendrá un nuevo dato. Utiliza un ciclo while para comparar los tamaños, pues el padre siempre debe ser menor al hijo, como sólo navega por una rama y no por todo el árbol su complejidad sería O(log n).

# pop
Saca de la fila priorizada el dato que tiene mayor prioridad, es decir la raíz. No tiene entrada ni salida. Como precondición la fila debe tener al menos un dato y como postcondición la fila deberá quedar sin el dato con mayor prioridad. La eliminación del dato es directa pues se borra la raíz y se reemplaza por el útlimo elemento que fue agregado, sin embargo se debe reorganizar el árbol mediante la función heapify, la cual hace los swaps necesarios para que cada padre tenga hijos mayores que él, no afecta la totalidad del árbol, por lo tanto su complejidad sería O(log n).

# top
Regresa el valor del dato que esta con mayor prioridad en la fila priorizada, es decir su raíz. No tiene entrada y su salida es el dato que tiene mayor prioridad dentro de la Fila priorizada. Como precondición la fila debe contener al menos un dato, no tiene postcondición. La raíz siempre es el primer elemento del arreglo, por lo que para obtener su valor es una operación directa, entonces su complejidad sería O(1).

# empty
Regresa un valor boleando diciendo si la fila priorizada esta vacía o tiene datos. No tiene entrada y su salida es un valor boleano que diga si la fila priorizada esta vacía o tiene datos. No tiene precondición ni postcondición. La función revisa la variable count que es la encargada de contar cuantos valores hay en el arreglo, es una operación directa que no cambia por lo que su complejidad sería O(1).

# size
Regresa la cantidad de datos que tiene la fila priorizada. No tiene entrada y su salida es un valor entero que represena la cantidad de datos de la fila priorizada. No tiene precondición ni postcondición. Nuevamente hacemos uso de la variable count, esta vez no hacemos ninguna comparación, solo se devuelve al valor de la variable, por lo tanto su complejidad sería O(1).

# Consideraciones
Es necesario descargar igualmente el archivo _exception.h_ para el correcto funcionamiento del programa.
