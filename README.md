![PROJECT_PHOTO](https://github.com/negativ72rus/tracer_unit/blob/master/photo5309820360004317227.jpg)
# tracer_unit
Трассерная насадка для страйкбола на Attiny85
___
* [Описание проекта](#chapter-0)
* [Материалы и компоненты](#chapter-1)
* [Фото готового устройства](#chapter-2)
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
1. [Mini Boost Module](https://aliexpress.ru/item/32994827604.html?spm=a2g0s.9042311.0.0.264d33eddTmJei&_ga=2.168215457.1886892361.1597377289-1299276638.1577246849)
1. [UF Светодиоды 3Вт](https://aliexpress.ru/item/33035497543.html?spm=a2g0s.9042311.0.0.264d33edCXwvoy&_ga=2.4059056.1886892361.1597377289-1299276638.1577246849) (10 шт.)
1. [Кнопка питания](https://aliexpress.ru/item/32902836328.html?spm=a2g0s.9042311.0.0.264d33edCXwvoy&_ga=2.4059056.1886892361.1597377289-1299276638.1577246849) (но подойдет и с родной платы)
1. Резистор на 240 Om
1. Резистор на 	1k
1. Резистор на 100Om
1. Резистор на 10kOm
1. [ATtiny85 в DIP корпусе](https://www.chipdip.ru/product/attiny85-20pu)
1. [Мосфет](https://www.chipdip.ru/product/irf3205?from=suggest_product)
1. ИК светодиод L-34F3C
1. Фототранзистор L-3DP3C
1. Разъем для подключения батарейного блока берем со старой платы.

<a id="chapter-2"></a>
## Фото готового устройства
![PROJECT_PHOTO](https://github.com/negativ72rus/tracer_unit/blob/master/IMG_8334.MOV)
