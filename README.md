# Piscine – 42 Madrid

Este repositorio contiene todos los proyectos que completé durante la **Piscine del campus 42 Madrid Fundación Telefónica**.

La Piscine es un bootcamp intensivo de programación donde se aprende C, comandos de shell y resolución de problemas en un entorno colaborativo y de aprendizaje entre pares, sin clases tradicionales. :contentReference[oaicite:1]{index=1}

---

## Estructura del repositorio

- **shell00** – Ejercicios básicos de Shell
- **shell01** – Ejercicios intermedios de Shell
- **c00 → c07** – Módulos de programación en C
- **rush00** – Primer proyecto colaborativo (Rush)

---

## Shell Projects

### **shell00**

Este módulo introduce el uso de comandos básicos de Unix en shell scripts (shell00). Los ejercicios cubren:

- Navegar por el sistema de archivos
- Uso de comandos como `ls`, `echo`, `cat`, etc.
- Automatización básica con scripts

Objetivo: familiarizarse con la terminal y automatizar tareas comunes.

---

### **shell01**

Ejercicios más avanzados de shell para reforzar:

- Manipulación de archivos y directorios
- Búsqueda y filtrado de texto
- Enlaces entre comandos con tuberías y redirecciones

Objetivo: dominar la línea de comandos como herramienta productiva.

---

## C Projects

Los ejercicios en C están divididos en módulos progresivos que desarrollan habilidades fundamentales en el lenguaje:

---

### **C00 – Introducción a C**

- Primeros programas en C
- Sintaxis básica
- Compilación con gcc

Objetivo: entender el ciclo básico de edición → compilación → ejecución en C.

---

### **C01 – Punteros y Memoria**

- Uso de punteros
- Acceso y manipulación de memoria
- Relaciones entre arrays y punteros

Objetivo: comprender cómo C gestiona la memoria y las referencias. :contentReference[oaicite:2]{index=2}

---

### **C02 – Cadenas de Caracteres**

- Manipulación de strings
- Uso de funciones de la librería estándar
- Implementación de comportamientos comunes

Objetivo: dominar el trabajo con cadenas en C. :contentReference[oaicite:3]{index=3}

---

### **C03 – Funciones de Manipulación de Strings**

- Búsqueda y comparación
- Operaciones avanzadas en textos
- Reimplementación de funciones de string

Objetivo: reforzar lógica de algoritmos simples sobre textos. :contentReference[oaicite:4]{index=4}

---

### **C04 – Números y Conversión**

- Conversión de strings a números
- Impresión de valores y bases
- Funciones matemáticas básicas

Objetivo: entender la conversión entre tipos y bases numéricas. :contentReference[oaicite:5]{index=5}

---

### **C05 – Recursión y Matemáticas**

- Funciones recursivas
- Secuencias numéricas
- Búsqueda de valores

Objetivo: aprender recursión y algoritmos matemáticos básicos. :contentReference[oaicite:6]{index=6}

---

### **C06 – Argumentos de Línea de Comandos**

- Uso de `argc` y `argv`
- Procesar parámetros de entrada
- Ordenar y mostrar argumentos

Objetivo: gestionar datos recibidos desde la línea de comandos. :contentReference[oaicite:7]{index=7}

---

### **C07 – Memoria Dinámica y Strings**

- Duplicar cadenas
- Manipulación avanzada de arrays dinámicos
- Reutilización de memoria

Objetivo: dominar la asignación y gestión dinámica de memoria en C. :contentReference[oaicite:8]{index=8}

---

## Rush00

Rush00 es el **primer proyecto colaborativo** dentro de la Piscine:

- Desarrollo en equipo con otros compañeros
- Resolución de un desafío estructurado en C
- Integración de conceptos de los módulos anteriores

Objetivo: aplicar lo aprendido en una entrega conjunta en tiempo limitado.

---

## Metodología de Aprendizaje

Durante la Piscine:

- El **trabajo entre pares** (peer-to-peer) fue fundamental: compartir soluciones, revisar código de otros y explicar conceptos refuerza el aprendizaje real.
- Cada ejercicio se valida contra test de 42 y se enfrenta a casos límite.
- La persistencia y colaboración con compañeros fue clave para superar retos diarios.

---

## Cómo Compilar y Ejecutar

Cada proyecto tiene sus propias instrucciones, pero en general:

```sh
make            # Compila código (cuando aplica)
gcc *.c         # Compila archivos C con flags por defecto
./a.out         # Ejecuta binario compilado
