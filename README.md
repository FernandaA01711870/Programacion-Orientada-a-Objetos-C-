# Programacion-Orientada-a-Objetos-C-
# Sistema de Gestión de Biblioteca

**Contexto de la problemática**
La biblioteca local de la comunidad se enfrenta a un problema con su sistema de gestión, que es bastante antiguo y con el tiempo ha resultado ineficiente y poco practico para la gestión actual. Por esta razón, han decidido desarrollar un nuevo programa que les permita gestionar de manera eficiente el registro de clientes, el acceso al material de la biblioteca y la realización de préstamos.

El programa contara con tres clases:
1) ***Clase ElementoBibliografico:***
Servirá para almacenar los elementos bibliográficos con los que cuenta la biblioteca y de esta forma tener un registro para posteriormente revisar el estado de los elementos y determinar si son aptos para préstamos a los usuarios. Los atributos de esta clase son:
 - Tipo  de material (libros, revistas, artículos, periódicos, etc).    
 - Un código de identificación
 - Autor
 - Titulo
 - Año de publicación
 - Status (activo o inactivo)
 Un punto importante es esta clase contara con herencias para dividir a los diferentes elementos de la clase en su genero y de esta forma se tendrá un mejor control y los elementos se podrán dividir en categorías lo que también agilizara el sistema de prestamos.
 2) ***Clase Usuario***
Esta clase permitirá tener un registro de todos los usuarios registrados en la biblioteca, de esta forma los usuarios podrán acceder al material de la biblioteca. Sus elementos son:
 - Nombre
 - Apellido
 - Edad
 - Correo electrónico
 - Teléfono
 - Sanción (por si el usuario no devuelve el materia prestado)
 3) ***Clase Préstamo***
 Con esta clase los usuarios podrán acceder al material de la biblioteca y tomarlo prestado. Sus elementos son:
 - Código del material
 - Id para identificar el número préstamo
 - La fecha en que se realizo el préstamo
 - La fecha en que el elemento fue regresado
 
Con estas clases, se busca mejorar la eficiencia del sistema de gestión de la biblioteca y brindar a los usuarios una experiencia más organizada y accesible.
