![PROJECT_PHOTO](https://github.com/negativ72rus/tracer_unit/blob/master/photo5309820360004317227.jpg)
# tracer_unit
Трассерная насадка для страйкбола на Attiny85
___
* [Описание проекта](#chapter-0)
* [Материалы и компоненты](#chapter-1)
___

<a id="chapter-0"></a>
## Описание проекта
В результате попыток починить сломанную трассерную насадку родился этот проект. Если у Вас есть сломанное/работающее не стабильно устройство похожее на мою старую трассерную насадку и вы хотите вернуть ее к жизни, достаточно изготовить новую плату по моему проекту и просто заменить ее.

![PROJECT_PHOTO](https://github.com/negativ72rus/tracer_unit/blob/master/photo5309820360004317213.jpg)

Принцип работы крайне прост:
Фото датчик регистрирует пролет шара и контроллер открывает мосфет зажигающий светодиодную сборку. Время засветки настраивается в прошивке.
```
void loop() {
 if (digitalRead(INT_PIN) == LOW) {
 digitalWrite(LED_PIN, HIGH);
 delay(250); //Время засветки в миллисекундах 250 миллисекунд = 1/4 секунды
 digitalWrite(LED_PIN, LOW);
 f = 0;
  }
}
```
<a id="chapter-1"></a>
## Материалы и компоненты
1. [Плата](https://easyeda.com/negativ72rus/tracer-unit)
