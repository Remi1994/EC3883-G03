La estructura del código a implementar en micro tendrán los siquientes elementos

1 - Etapa de recepción de Sensores.
2 - Etapa de movimiento del motor.
3 - Banderas para controlar y organizar la adquisición y envio de data por medio de interrupciones de tiempo que habiliten y/o deshabiliten
    funciones de recepción de data, envio de data o movimiento del motor.
4 - Etapa de entramado de las señales obtenidas y manipuladas por los sensores, ya que se enviaran son resultados. 
5 - Variables de control a usar que nos permite saber si ya se recopiló toda la data de un sensor o que nos permita saber el número de pasos
    dados por el motor.
6 - El micro usará 7 pines para comunicarse con el motor y los sensores: 1 pin para el lidar, 2 pines para el ultrasonido (trigger y eco) y
    4 pines para manipular las bobinas del motor que controlan su movimiento.
