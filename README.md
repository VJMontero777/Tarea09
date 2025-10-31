# 🚨 TinyML – Sistema de Alarma de Temperatura  
**Autor:** Victor Junior Montero Mandujano  
**Curso:** PIAD-528 – Taller de Desarrollo de Aplicaciones con Machine Learning  
**Institución:** SENATI  
**Versión:** Octubre 2025  

---

## 🎯 Objetivo  
Desarrollar un sistema de monitoreo inteligente que predice y alerta si la temperatura supera un umbral de **25 °C**, activando una alarma visual y sonora mediante **TinyML**.  

---

## 🧩 Etapas del Proyecto  

| Etapa | Archivo | Herramienta | Descripción |
|-------|----------|-------------|--------------|
| Entrenamiento | `modelo_temperatura.keras` | Google Colab | Modelo original entrenado con TensorFlow (°C → °F) |
| Conversión | `modelo_temperatura.tflite` | Google Colab | Modelo optimizado con TensorFlow Lite |
| TinyML (versión C) | `model.h` | Google Colab → Arduino | Modelo convertido a formato C para microcontroladores |
| Implementación | `Tarea09.ino` / `Tarea09.sim1` | SimulIDE | Simulación del sistema con DHT11, LED y buzzer |

---

## 🧠 Tecnologías usadas  
- **Python** (Google Colab)  
- **TensorFlow / TensorFlow Lite**  
- **Arduino IDE / SimulIDE**  
- **DHT11**, **LED**, **Buzzer**  

---

## ⚙️ Funcionamiento  

1️⃣ El modelo de IA aprende la relación entre **°C y °F** usando TensorFlow.  
2️⃣ Luego se convierte a formato **.tflite** y finalmente a **TinyML (`model.h`)**.  
3️⃣ En SimulIDE, el sistema lee la temperatura desde el sensor DHT11.  
4️⃣ Si la temperatura es mayor a 25 °C, el buzzer suena y el LED se enciende.  
5️⃣ El monitor serie muestra el estado actual (OK ✅ o ALERTA 🔔).  

---

## 🔍 Evidencias  

- 📊 **Gráfico de pérdida del entrenamiento** (Colab).  
- ⚙️ **Conversión exitosa a `.tflite` y `model.h`**.  
- 💡 **Simulación en SimulIDE** con alerta visual y sonora.  

---

## 🧾 Créditos  
Proyecto desarrollado por **Victor Junior Montero Mandujano (SENATI)**  
para el curso **PIAD-528 – Taller de Desarrollo de Aplicaciones con Machine Learning**.  

> Supervisado por el instructor Anthony Heli Barra Espinoza […], Octubre 2025.
