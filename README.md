[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Punto 2
a) Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?
Incluya en su repositorio una regla de cómo ignorar un archivo ignorado.txt
b) Utilice el archivo readme.md para escribir las respuestas.

El archivo **.gitignore** sirve para indicar a Git qué archivos y carpetas ignorar, de manera que no se rastreen ni se incluyan en las confirmaciones. 

Es util pues:
- Evita que se incluyan archivos que no necesitan ser confirmados, como archivos temporales, archivos generados por el sistema operativo, o archivos binarios
- Permite mantener el repositorio ligero y facilitar el mantenimiento del sistema de control de versiones

Se debe usar:
- Cuando se quiere evitar que se incluyan archivos y carpetas innecesarios o confidenciales en un repositorio. 
- Cuando se quiere evitar subir cambios de algunos archivos a los repositorios. 
- Cuando se quiere evitar el control de archivos que podrían causar problemas al ser compartidos con otros miembros del equipo.

Para configurar .gitignore, se debe crear un archivo de texto plano llamado .gitignore en el directorio raíz del proyecto. En este archivo, se especifica qué archivos y carpetas quiero que Git ignore. 

## Regla de cómo ignorar un archivo ignorado.txt:
1. Crear un archivo de texto y llamarlo .gitignore
2. Abrir el archivo y escribir "*.txt"
3. Guardar el archivo

# Punto 3
c) Revise los archivos subidos en su repositorio de github. ¿Qué archivos
vé?¿Cuál cree que no hace falta que esté?

Veo los archivos .vscode , README.md , tp1_1.c y tp1_1.exe 
Considero que no hace falta que esté el archivo .vscode y el .exe
