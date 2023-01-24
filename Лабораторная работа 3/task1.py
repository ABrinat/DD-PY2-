class Book:
    """ Базовый класс книги. """

    def __init__(self, name: str, author: str):
        """
            Инициализация книги с именем и автором.

            :param name: Название книги (str)
            :param author: Автор книги (str)
        """
        self._name = name
        self._author = author

    @property
    def name(self):
        """
            Возвращает название книги
            :return: Название книги (str)
        """
        return self._name

    @property
    def author(self):
        """
            Возвращает автора книги
            :return: Автор книги (str)
        """
        return self._author

    def __str__(self):
        """
            Возвращает строковое представление книги
            :return: Строковое представление книги понятное пользователю (str)
        """
        return f'Book: {self.name} by {self.author}'

    def __repr__(self) -> str:
        """
            Возвращает строковое представление книги
            :return: Строковое представление книги понятное программисту (str)
        """
        return f'{self.__class__.__name__}({self.name!r}, {self.author!r})'


class PaperBook(Book):
    def __init__(self, name: str, author: str, pages: int):
        """
            Инициализирует объект PaperBook.
            :param name: Название книги (str)
            :param author: Автор книги (str)
            :param pages: Количество страниц книги (int)
        """
        super().__init__(name, author)
        self.pages = pages

    @property
    def pages(self):
        """
            Возвращает количество страниц книги (int).
        """
        return self._pages

    @pages.setter
    def pages(self, value):
        """
            Устанавливает количество страниц книги.
            :param value: Количество страниц книги (int)
            :raises ValueError: Если value не является положительным целым числом
        """
        if not isinstance(value, int) or value <= 0:
            raise ValueError('pages should be a positive integer')
        self._pages = value

    def __str__(self):
        """
            Возвращает строковое представление объекта PaperBook.
        """
        return f'PaperBook: {self.name} by {self.author}, pages: {self.pages}'

    def __repr__(self) -> str:
        """
            Возвращает внутреннее представление объекта PaperBook.
        """
        return f'{self.__class__.__name__}({self.name!r}, {self.author!r},{self.pages!r})'


class AudioBook(Book):
    def __init__(self, name: str, author: str, duration: float):
        """
           Инициализация аудио книги.

           :param name: Название книги
           :type name: str
           :param author: Автор книги
           :type author: str
           :param duration: Продолжительность аудио книги в часах
           :type duration: float
        """
        super().__init__(name, author)
        self.duration = duration

    @property
    def duration(self):
        """
            Продолжительность аудио книги в часах

            :return: Продолжительность аудио книги в часах
            :rtype: float
        """
        return self._duration

    @duration.setter
    def duration(self, value: float):
        """
            Установка продолжительности аудио книги

            :param value: Продолжительность аудио книги в часах
            :type value: float
            :raise ValueError: Если продолжительность не является положительным числом
        """
        if not isinstance(value, (float, int)):
            raise ValueError("Duration must be a float or integer")
        if value <= 0:
            raise ValueError("Duration must be a positive float or integer")
        self._duration = value

    def __str__(self):
        """
            Возвращает строковое представление объекта AudioBook.
        """
        return f'PaperBook: {self.name} by {self.author}, duration: {self.duration}'

    def __repr__(self) -> str:
        """
            Возвращает внутреннее представление объекта PaperBook.
        """
        return f'{self.__class__.__name__}({self.name!r}, {self.author!r},{self.duration!r})'

