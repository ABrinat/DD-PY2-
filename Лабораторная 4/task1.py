class Scooter:
    """
    Базовый класс для самоката.
    """

    def __init__(self, brand: str, weight: int, max_speed: int):
        """
        :param brand: Марка самоката
        :type brand: str
        :param weight: Вес самоката
        :type weight: int
        :param max_speed: Максимальная скорость самоката
        :type max_speed: int
        """
        self._brand = brand
        self._weight = weight
        self._max_speed = max_speed

    @property
    def brand(self) -> str:
        """
        :return: Марка самоката
        :rtype: str
        """
        return self._brand

    @property
    def weight(self) -> int:
        """
        :return: Вес самоката
        :rtype: int
        """
        return self._weight

    @property
    def max_speed(self) -> int:
        """
        :return: Максимальная скорость самоката
        :rtype: int
        """
        return self._max_speed

    def ride(self) -> None:
        """
        Метод для езды на самокате.
        """
        print(f'Riding on {self.brand} scooter at speed {self.max_speed} km/h')

    def stop(self) -> None:
        """
        Метод для оcтановки на самокате.
        """
        print(f'Stop on a {self.brand} scooter')

    def __str__(self) -> str:
        """
        :return: Строковое представление самоката
        :rtype: str
        """
        return f'{self.brand} scooter, weight: {self.weight} kg, max speed: {self.max_speed} km/h'

    def __repr__(self) -> str:
        """
        :return: Представление самоката
        :rtype: str
        """
        return f'{self.__class__.__name__}({self.brand!r}, {self.weight!r}, {self.max_speed!r})'


class ElectricScooter(Scooter):
    """
    Дочерний класс электросамоката.
    """

    def __init__(self, brand: str, weight: int, max_speed: int, battery_life: float):
        """
        :param brand: Марка самоката
        :type brand: str
        :param weight: Вес самоката
        :type weight: int
        :param max_speed: Максимальная скорость самоката
        :type max_speed: int
        :param battery_life: Время жизни батареи
        :type max_speed: float
        """
        super().__init__(brand, weight, max_speed)
        self._battery_life = battery_life

    @property
    def battery_life(self) -> float:
        """
        :return: Время жизни батареи
        :rtype: float
        """
        return self._battery_life

    def charge(self) -> None:
        """
        Метод для зарядки электросамоката.
        """
        print(f'{self.brand} electric scooter is charging')

    def ride(self) -> None:
        """
        Перегруженный метод для езды на электросамокате.
        Причина перегрузки - необходимость добавления информации о времени жизни батареи.
        """
        print(
            f'Riding on {self.brand} electric scooter at speed {self.max_speed} km/h, battery life: {self.battery_life} hours')

    def __str__(self) -> str:
        """
        :return: Возвращает строковое представление объекта
        :rtype: str
        """
        return f'{self.brand} scooter, weight: {self.weight} kg, max speed: {self.max_speed} km/h, battery life: {self.battery_life} с'

    def __repr__(self) -> str:
        """
        :return: Возвращает внутреннее представление объекта
        :rtype: str
        """
        return f'{self.__class__.__name__}({self.brand!r}, {self.weight!r}, {self.max_speed!r}, {self.battery_life!r})'