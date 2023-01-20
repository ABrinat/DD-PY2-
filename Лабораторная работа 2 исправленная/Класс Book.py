BOOKS_DATABASE = [
    {
        "id": 1,
        "name": "test_name_1",
        "pages": 200,
    },
    {
        "id": 2,
        "name": "test_name_2",
        "pages": 400,
    }
]
# TODO написать класс Book
class Book:
    def __init__(self, id_: int, name: str, pages: int):
        """"
        Это метод конструктора для класса Book. Он вызывается при создании нового экземпляра класса. Он инициализирует атрибуты id, name и pages объекта Book со значениями, переданными в качестве аргументов.
        - Аргумент id_ представляет собой целое число, представляющее идентификатор книги.
        -Аргумент name — это строка, представляющая название книги.
        - Аргумент pages представляет собой целое число, представляющее количество страниц в книге.
        """
        self.id = id_
        self.name = name
        self.pages = pages

    def __str__(self):
        """
        Этот метод используется для определения строкового представления объекта Book. Возвращает строку в формате '"Книга "name"', где name — название книги.
        """
        return f'Книга "{self.name}"'

    def __repr__(self):
        """
        Этот метод используется для определения однозначного представления объекта Book. Он возвращает строку в формате «Book(id_=id, name=name, pages=pages)», где id, name и pages — это атрибуты id, name и pages объекта Book соответственно.
        """
        return f'Book(id_={self.id!r}, name={self.name!r}, pages={self.pages!r})'
if __name__ == '__main__':
    list_books = [
        Book(id_=book_dict["id"], name=book_dict["name"], pages=book_dict["pages"]) for book_dict in BOOKS_DATABASE
    ]
    for book in list_books:
        print(book)
    print(list_books)