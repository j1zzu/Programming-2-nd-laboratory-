using System;

struct MARSH
{
    public int RouteNumber;
    public string StartPoint;
    public string EndPoint;
}

class Program
{
    static void Main(string[] args)
    {
        const int size = 3;
        MARSH[] routes = new MARSH[size];

        // Ввод данных
        for (int i = 0; i < size; i++)
        {
            Console.WriteLine($"Введите данные для маршрута {i + 1}:");
            Console.Write("Номер маршрута: ");
            routes[i].RouteNumber = int.Parse(Console.ReadLine());
            Console.Write("Название начального пункта: ");
            routes[i].StartPoint = Console.ReadLine();
            Console.Write("Название конечного пункта: ");
            routes[i].EndPoint = Console.ReadLine();
        }

        // Сортировка массива по номерам маршрутов
        Array.Sort(routes, (x, y) = > x.RouteNumber.CompareTo(y.RouteNumber));

        // Ввод номера маршрута для поиска
        Console.Write("Введите номер маршрута для поиска: ");
        int searchNumber = int.Parse(Console.ReadLine());

        // Поиск маршрута
        bool found = false;
        foreach(var route in routes)
        {
            if (route.RouteNumber == searchNumber)
            {
                Console.WriteLine($"Маршрут найден: Номер маршрута: {route.RouteNumber}, Начальный пункт: {route.StartPoint}, Конечный пункт: {route.EndPoint}");
                found = true;
                break;
            }
        }

        if (!found)
        {
            Console.WriteLine("Маршрут с таким номером не найден.");
        }
    }
}
