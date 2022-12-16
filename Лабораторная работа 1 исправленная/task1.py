import doctest
class Rectangle:
    def __init__(self,width:float,length:float):
        """
            Создание и подготовка к работе объекта "Прямоугольник"
            :param width: Ширина прямоугольника
            :param length: Длина прямоугольника
            Пример:
        >>> rectangle = Rectangle(10,10)
        """
        self.width = None
        self.init_width(width)

        self.length = None
        self.init_length(length)
    def init_width (self,width:float):
        """
            Инициализация атрибута init_width
            :param width: Ширина прямоугольника
        """
        if not isinstance(width, float):
            raise TypeError('Ширина прямоугольника должна быть типа float')
        if width <= 0:
            raise ValueError('Ширина прямоугольника должна быть больше нуля')
    def init_length(self, length: float):
        """
            Инициализация атрибута init_length
            :param length: Длина прямоугольника
        """
        if not isinstance(length, float):
            raise TypeError('Длина прямоугольника должна быть типа float')
        if length <= 0:
            raise ValueError('Ширина прямоугольника должна быть больше нуля')
    def find_perimeter (self, width:float, length: float ):
        """
            Найти периметр прямоугольника
            Возвращает периметр нашего прямоуголника в формате float
            :param width: ширина
            :param length: длина
            Пример:
        >>> rectangle = Rectangle(10,10)
        >>> rectangle.find_perimeter(10,10)
        """
        return (width + length) * 2
    def find_area (self,width:float, length: float ):
        """
            Найти площадь прямоугольника
            Возвращает площадь нашего прямоуголника в формате float
            :param width: ширина
            :param length: длина
            Пример:
        >>> rectangle = Rectangle(10,10)
        >>> rectangle.find_area(10,10)
        """
        return width * length
class Pen:
    def __init__(self, ink_volume:int,ink_color:str):
        """
            Создание и подготовка к работе объекта "Ручка"
            :param ink_volume: Число страниц которое может прописать ручка с заданным колличеством чернил (Макс 10)
            :param ink_color: Цвет чернил
            Пример:
        >>> pen = Pen(8,'синий')
        """
        self.ink_volume  = None
        self.init_ink_volume(ink_volume)
        self.ink_color = None
        self.init_ink_color(ink_color)
   def init_ink_color(self, ink_color: str):
        """
            Инициализация атрибута ink_color
            :param ink_color: Цвет чернил
        """
        if not isinstance(ink_color, str):
            raise TypeError('Цвет ручки должен быть типа str')
        if ink_color.lower() not in ['красный', 'черный', 'зеленый', 'синий']:
            raise ValueError('Цвет ручки может быть 1 из 4: красный, черный, зеленый, синий')
        self.ink_color = ink_color
    def init_ink_volume(self, ink_volume: int):
        """
            Инициализация атрибута ink_volume
            :param ink_volume: Число страниц которое может прописать ручка с заданным колличеством чернил (Макс 10)
        """
        if not isinstance(ink_volume, int):
            raise TypeError('Количество страниц которые может исписать ручка должны быть формата int')
        if ink_volume > 10:
            raise ValueError('Ручка не вмещает в себя пасты на более чем 10 страниц')
        self.ink_color = ink_color
    def write_one_page(self):
        """
            Написать 1 страницу (это невозможно сделать если закончились чернила)
            Пример:
        >>> pen = Pen(8,'синий')
        >>> pen.write_one_page('Красный')
        """
        if ink_volume == 0 :
            raise ValueError('Пасты в ручке недостаточно')
        ...
    def change_the_color (self, colour: str):
        """
            Сменить цвет ручки на 1 из 4: красный, черный, зеленый, синий.
            :param colour: желаемый цвет ручки
            Пример:
        >>> pen = Pen(8,'синий')
        >>> pen.change_the_color('Красный')
        """
        ...
class Guitar:
    def __init__(self,number_of_strings:int,string_material:str):
        """
            Создание и подготовка к работе объекта "Ручка"
            :param number_of_strings: Колличество струн
            :param string_material: Материал струн
            Пример:
        >>> guitar = Guitar(7,'нейлон')
        """
        self.number_of_strings  = None
        self.init_number_of_strings(number_of_strings)

        self.string_material = None
        self.init_string_material(string_material)
    def init_number_of_strings(self, number_of_strings:int):
        """
            Инициализация атрибута number_of_strings
            :param number_of_strings: Колличество струн
        """
        if not isinstance(number_of_strings, int):
            raise TypeError('Количество струн которые можно установить на гитару должны быть формата int')
        if number_of_strings not in [6, 7, 12]:
            raise ValueError('Наш гитарист умеет играть только на 6, 7 и 12 струнных гитарах')
        self.number_of_strings = number_of_strings
    def init_string_material(self, string_material:str):
        """
            Инициализация атрибута string_material
            :param string_material: Материал струн
        """
        if not isinstance(string_material, str):
            raise TypeError('Название материала струн должно быть формата str')
        if string_material not in ['нейлон','шелк', 'серебро', 'бронза', 'медь']:
            raise ValueError('Ручка с максимальным запасом пасты может исписать 10 страниц')
        self.string_material = string_material
    def play_classics(self):
        """
            Играть классическое произведение
            Пример:
        >>> guitar = Guitar(7,'нейлон')
        >>> guitar.play_classics()
        """
        if self.string_material in ['серебро', 'бронза', 'медь']:
            raise ValueError('Наш гитарист играет классику только на нейлоновых или шелковых струнах!')
        ...
    def sing(self):
        """
             Спеть песню на гитаре
            Пример:
        >>> guitar = Guitar(7,'нейлон')
        >>> guitar.sing()
        """
        if self.string_material not in ['серебро', 'бронза', 'медь']:
            raise ValueError('Наш гитарист поет под гитару только когда на ней стоят металлические струны!')
        ...
if __name__ == "__main__":
    doctest.testmod()