# Análisis de complejidad temporal

# visit
Desplegará cada uno de los datos almacenados en el BST en formato Preorder, Inorder, Postorder y Level by level. No tiene entrada y su salida será un string con los 4 recorridos, seperados por un salto de línea \n entre cada uno. Como precondición es necesario un BST válido, no tiene postcondición. La función estpa compuesta por otras 4, que son los formatos mencionados anteriormente, debido a que son formas distintas de imprimir los datos del árbol es necesario que recorra su totalidad en los 4 casos, por lo que su complejidad sería O(n).

# height
Regresa la altura del BST, no tiene entrada y su salida es un entero con el cual indicará la altura del BST. Como precondición es necesario un BST válido, no tiene postcondición. Ya que necesita navegar el árbol para encontrar su profundidad terminará recorriendolo todo, entonces su complejidad sería O(n).

# ancestors
Despliega los ancestros de un dato (todos los nodos arriba de n hasta llegar a la raiz), como entrada es el dato del cual se desea conocer los ancestros y como salida un string con los ancestros. Como precondición es necesario un BST válido, no tiene postcondición. Ya que se trata de una búsqueda en el árbol mientras se van guardando los valores anteriores tendría una complejidad O(log n) para el mejor de los casos y O(n) para el peor, pues no siempre recorre todo el árbol.

# whatlevelamI
Regresa un entero que indica el nivel en que se encuentra un dato, o -1 en caso de que no se encuentre en el BST. Como precondición es necesario un BST válido, no tiene postcondición. Sigue siendo un algoritmo de búsqueda pero esta vez en forma de un contador que va aumentando hasta que llega al nivel del dato, es por esto que su complejidad sería O(log n) para el mejor de los casos y O(n) para el peor.
