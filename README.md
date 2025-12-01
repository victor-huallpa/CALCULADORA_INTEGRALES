# Calculadora de Integrales Indefinidas

![License](https://img.shields.io/badge/license-GPLv3-blue.svg)
![Status](https://img.shields.io/badge/status-En_Desarrollo-orange.svg)

## 📄 Descripción del Proyecto

**Calculadora de Integrales Indefinidas** es una herramienta de software diseñada para asistir a estudiantes, educadores y profesionales en la resolución de ejercicios de cálculo integral. El objetivo principal del proyecto es proporcionar una plataforma robusta y escalable que no solo entregue resultados, sino que también sirva como un recurso educativo.

El proyecto está concebido para evolucionar desde una calculadora básica de integrales polinómicas hasta un motor matemático complejo capaz de manejar funciones trascendentes y ofrecer soluciones paso a paso.

### 🎯 Visión
Crear una herramienta accesible y potente que combine la facilidad de uso de una interfaz web moderna con la eficiencia de un motor de cálculo de bajo nivel.

## 🚀 Características

### Actuales (Fase Inicial)
- **Resolución de Integrales Básicas**: Soporte para funciones polinómicas simples.
- **Interfaz Web Intuitiva**: Diseño limpio y fácil de usar para la entrada de expresiones matemáticas.

### En Planificación (Roadmap)
- **Soporte Extendido de Funciones**: Integración de funciones trigonométricas, exponenciales y logarítmicas.
- **Soluciones Paso a Paso**: Visualización detallada del proceso de integración para fines didácticos.
- **Historial de Operaciones**: Guardado de cálculos previos.
- **Gráficas**: Visualización de la función original y su primitiva.

## 🛠️ Tecnologías Utilizadas

Este proyecto utiliza una arquitectura híbrida para maximizar el rendimiento y la usabilidad:

- **Backend**: [Python](https://www.python.org/) con [Flask](https://flask.palletsprojects.com/) - Gestiona la lógica del servidor y la API.
- **Motor de Cálculo**: [C++](https://isocpp.org/) - Encargado del procesamiento matemático intensivo y algoritmos de parsing para asegurar alta velocidad y eficiencia.
- **Frontend**: HTML5, CSS3 y JavaScript - Proporciona una experiencia de usuario interactiva y responsiva.

## ⚙️ Instalación y Uso

### Requisitos Previos
- Python 3.8 o superior.
- Compilador de C++ (GCC/Clang/MSVC).
- Git.

### Pasos para Ejecutar

1. **Clonar el repositorio**
   ```bash
   git clone https://github.com/victor-huallpa/CALCULADORA_INTEGRALES.git
   cd CALCULADORA_INTEGRALES
   ```

2. **Crear y activar un entorno virtual**
   ```bash
   python -m venv venv
   # En Windows:
   .\venv\Scripts\activate
   # En Linux/Mac:
   source venv/bin/activate
   ```

3. **Instalar dependencias**
   ```bash
   pip install -r requirements.txt
   ```

4. **Compilar módulos C++**
   > *Nota: Las instrucciones específicas de compilación para los módulos de C++ se detallarán próximamente.*

5. **Ejecutar la aplicación**
   ```bash
   python run.py
   ```

## 📄 Licencia

Este proyecto está bajo la Licencia **GNU General Public License v3.0 (GPLv3)**. Consulte el archivo [LICENSE](LICENSE) para más detalles.

## 👥 Autores

- **Victor Huallpa** - *Desarrollador Principal*

---
*Este proyecto es de código abierto y las contribuciones son bienvenidas.*
