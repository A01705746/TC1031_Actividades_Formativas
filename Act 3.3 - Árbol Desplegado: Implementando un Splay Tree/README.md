# Análisis de complejidad temporal

# add
Agregua un dato al Splay Tree. Su entrada es un entero, el cual se desea agregar al Splay Tree, no tiene salida. Como preconcición n es un entero y como postcondición el Splay Tree contiene un nuevo dato y se balancea siguiedo las reglas de splay. La función compara los valores por ramas para revisar donde entra el nuevo valor, una vez llega a la posición deseada se inserta el dato y realiza las operacione de balance splay, no recorre todo el árbol por lo que su complejidad sería O(log n).

# remove
Elimina el dato del Splay Tree. La entrada es el dato entero que se desea borrar y no tienen salida. No tiene precondición y su postcondición es que el Splay Tree queda sin el dato de entrada en caso de que este exista y se balancea siguiedo las reglas de splay. La función navega por las ramas hasta llegar al valor que se desea borrar, lo elimina y lo balancea, no recorre todo el árbol por lo que su complejidad es O(log n).

# find
Regresa un valor boleano que representa si el dato qus se desea encontrar existe o no. La entrada es el entero que se busca y la salida un valor boleando que representa si el dato qus se desea encontrar existe o no. No tiene precondición y su postcondición es que el Splay Tree será modificado después de la búsqueda siguiedo las reglas de splay. Nuevamente, la función navega por las ramas entra valores mayores y menores hasta encontrar el valor deseado, exista o no exista dicho valor nunca se recorre el árbol en su totalidad por lo que la complejidad es O(log n).

# inorder
Despliega en inrorder  el contenido del Splay Tree. No tiene entrada, su salida es un string con el Splay Tree. No tiene precondición ni postcondición. Puesto que necesita meter en un string todos los elementos del Splay lo necesita recorrer en su totalidad, por lo que su complejidad sería O(n).

# size
Regresa la cantidad de datos que tiene el Splay Tree. No tiene entrada, su salida es un valor entero que represena la cantidad de datos el Splay Tree. No tiene precondición ni postcondición. La función devuelve al valor de la variable count, que es la encargada de contar cuantos valores hay en el splay, por lo tanto su complejidad sería O(1).
