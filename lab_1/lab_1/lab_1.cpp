#include <iostream>
#include <string>


// 1.1
//Дробная часть.
//Дана сигнатура функции : double fraction(double x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//только дробную часть числа х.Подсказка: вещественное число может быть
//преобразовано к целому путем отбрасывания дробной части.
//Пример :
//    x = 5, 25
//    результат : 0, 25

double Fraction(double x) {
  int a = int(x);
  double c = x - a;
  if (c < 0) {
    return -c;
  }
  else {
    return c;
  }
}

//1.5
//Двузначное.
//Дана сигнатура функции : bool is2Digits(int x);
//Необходимо реализовать функцию таким образом, чтобы она принимала число
//x и возвращала true, если оно двузначное.
//
//Пример 1:
//x = 32
//результат : true
//
//Пример 2 :
//    x = 516
//    результат : false

bool Is2Digits(int x) {
  return (x >= 10 and x <= 99) or (x <= -10 and x >= -99);
}

// 1.7
//Диапазон.
//Дана сигнатура функции : bool isInRange(int a, int b, int num);
//Функция принимает левую и правую границу(a и b) некоторого числового
//диапазона.Необходимо реализовать функцию таким образом, чтобы она
//возвращала true, если num входит в указанный диапазон(включая границы).
//Обратите внимание, что отношение a и b заранее неизвестно(неясно кто из них
//    больше, а кто меньше)
//
//    Пример 1:
//a = 5 b = 1 num = 3
//результат : true
//
//Пример 2 :
//    a = 2 b = 15 num = 33
//    результат : false

bool IsInRange(int a, int b, int num) {
  if (a <= b) {
    return num >= a and num <= b;
  }
  else {
    return num >= b and num <= a;
  }
}

//1.9
//Равенство.
//Дана сигнатура функции : bool isEqual(int a, int b, int c);
//Необходимо реализовать функцию таким образом, чтобы она возвращала true,
//если все три полученных функцией числа равны
//
//Пример 1:
//a = 3 b = 3 с = 3
//результат : true
//
//Пример 2 :
//    a = 2 b = 15 с = 2
//    результат : false

bool IsEqual(int a, int b, int c) {
  return (a == b) and (b == c);
}

//2.1
//Модуль числа.
//Дана сигнатура функции : int abs(int x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//модуль числа х(если оно было положительным, то таким и остается, если он
//    было отрицательным – то необходимо вернуть его без знака минус).
//
//    Пример 1:
//x = 5
//результат : 5
//
//Пример 2 :
//    x = -3
//    результат : 3

int Abs(int x) {
  if (x < 0) {
      return -x;
  }
  else {
      return x;
  }
}

//2.3
//Тридцать пять.
//Дана сигнатура функции : bool is35(int x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала true,
//если число x делится нацело на 3 или 5. При этом, если оно делится и на 3, и на
//5, то вернуть надо false.Подсказка: оператор % позволяет получить остаток от
//деления.
//
//Пример 1 :
//    x = 5
//    результат : true
//
//    Пример 2 :
//    x = 8
//    результат : false
//
//    Пример 3 :
//    x = 15
//    результат : false

bool Is35(int x) {
  bool div3 = (x % 3 == 0);
  bool div5 = (x % 5 == 0);
  return (div3 or div5) and !(div3 and div5); 
}

//2.5
//Тройной максимум.
//Дана сигнатура функции : int max3(int x, int y, int z);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//максимальное из трех полученных функцией чисел.Подсказка: идеальное
//решение включает всего две инструкции if и не содержит вложенных if.
//
//Пример 1 :
//    x = 5  y = 7  z = 7
//    результат : 7
//
//    Пример 2 :
//    x = 8  y = -1  z = 4
//    результат : 8

int Max3(int x, int y, int z) {
  int max = x;
  if (y > max){
    max = y;
  }
  if (z > max){
      max = z;
  }
  return max;
}

//2.7
//Двойная сумма.
//Дана сигнатура функции : int sum2(int x, int y);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//сумму чисел x и y.Однако, если сумма попадает в диапазон от 10 до 19, то надо
//вернуть число 20.
//
//Пример 1:
//x = 5  y = 7
//результат : 20
//
//Пример 2 :
//    x = 8  y = -1
//    результат : 7



int Sum2(int x, int y){
  int c = x + y;
  if (c >= 10 and c <= 19){
    return 20;
  }
  else{
    return c;
  }
}

//2.9
//День недели.
//Дана сигнатура функции : String day(int x);
//Функция принимает число x, обозначающее день недели.Необходимо
//реализовать функцию таким образом, чтобы она возвращала строку, которая
//будет обозначать текущий день недели, где 1 — это понедельник, а 7 –
//воскресенье.Если число не от 1 до 7 то верните текст “это не день недели”.
//Вместо if в данной задаче используйте switch.
//
//Пример:
//x = 5
//результат : “пятница”

std::string Day(int x) {
  switch (x) {
  case 1: return "понедельник";
  case 2: return "вторник";
  case 3: return "среда";
  case 4: return "четверг";
  case 5: return "пятница";
  case 6: return "суббота";
  case 7: return "воскресенье";
  default: return "это не день недели";
  }
}

//3.1
//Числа подряд.
//Дана сигнатура функции : String listNums(int x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//строку, в которой будут записаны все числа от 0 до x(включительно).
//
//Пример:
//x = 5
//результат : “0 1 2 3 4 5”

std::string ListNums(int x) {
  std::string result = "";
  for (int i = 0; i <= x; i++) {
    result += std::to_string(i);
    if (i < x) {
        result += " ";
    }
  }
  return result;
}

//3.3
//Четные числа.
//Дана сигнатура функции : String chet(int x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//строку, в которой будут записаны все четные числа от 0 до x(включительно).
//Подсказа для обеспечения качества кода : инструкцию if использовать не
//следует.
//
//Пример :
//    x = 9
//    результат : “0 2 4 6 8”


std::string Chet(int x) {
  std::string result = "";
  for (int i = 0; i <= x; i += 2) {
    result += std::to_string(i);
    if (i < x - 1) {
        result += " ";
    }
  }
  return result;
}

//3.5
//Длина числа.
//Дана сигнатура функции : int numLen(long x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала
//количество знаков в числе x.
//Подсказка:
//Int у = 123 / 10; // у будет иметь значение 12 
//
//Пример:
//x = 12567
//результат : 5
int NumLen(long x) {
  if (x == 0) {
    return 1;
  }
  int count = 0;
  if (x < 0) {
    x = -x;
  }

  while (x != 0) {
    count++;
    x /= 10;
  }
  return count;
}

//3.7
//Квадрат.
//Дана сигнатура функции : void square(int x);
//Необходимо реализовать функцию таким образом, чтобы она выводила на
//экран квадрат из символов ‘* ’ размером х, у которого х символов в ряд и х
//символов в высоту.
//
//Пример 1:
//x = 2
//результат :
//    **
//    **
//
//    Пример 2 :
//    x = 4
//    результат :
//    ****
//    ****
//    ****
//    ****
void Square(int x) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
        std::cout << '*';
    }
    std::cout << "\n";
  }
}


//3.9
//Правый треугольник.
//Дана сигнатура функции : void rightTriangle(int x);
//Необходимо реализовать функцию таким образом, чтобы она выводила на
//экран треугольник из символов ‘* ’ у которого х символов в высоту, а количество
//символов в ряду совпадает с номером строки, при этом треугольник выровнен
//по правому краю.Подсказка: перед символами ‘* ’ следует выводить
//необходимое количество пробелов.
//
//Пример 1 :
//    x = 3
//    результат :
//    *
//    **
//    ***
//
//    Пример 2 :
//    x = 4
//    результат :
//    *
//    **
//    ***
void RightTriangle(int x) {
  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < x - i; j++) {
      std::cout << ' ';
    }
    for (int j = 0; j < i; j++) {
      std::cout << '*';
    }
      std::cout << '\n';
  }
}



//4.1
//Поиск первого значения.
//Дана сигнатура функции : int findFirst(int arr[], int x);
//Необходимо реализовать функцию таким образом, чтобы она возвращала индекс
//первого вхождения числа x в массив arr.Если число не входит в массив –
//возвращается - 1.
//
//Пример:
//arr = [1, 2, 3, 4, 2, 2, 5]
//x = 2
//результат : 1
int FindFirst(int arr[], int size, int x) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == x) {
      return i; 
    }
  }
  return -1; 
}


//4.7
//Возвратный реверс.
//Дана сигнатура функции : int* reverseBack(int arr[]);
//Необходимо реализовать функцию таким образом, чтобы она возвращала новый
//массив, в котором значения массива arr записаны задом наперед.
//
//Пример:
//arr = [1, 2, 3, 4, 5]
//результат : [5, 4, 3, 2, 1]
int* ReverseBack(int arr[], int size) {
  int* reversed = new int[size];
  for (int i = 0; i < size; i++) {
    reversed[i] = arr[size - 1 - i];
  }

  return reversed;
}



// Вспомогательная функция для очистки потока ввода
void ClearInput() {
  std::cin.clear();
  std::cin.ignore(10000, '\n');
}


int main() {
  setlocale(LC_ALL, "Russian");
  std::cout << std::boolalpha;

  int choice;
  while (true) {
    std::cout << "Выберите задачу по номеру \n";
    std::cout << "1 — (1.1)\n";
    std::cout << "2 — (1.5)\n";
    std::cout << "3 —  (1.7)\n";
    std::cout << "4 — (1.9)\n";
    std::cout << "5 — (2.1)\n";
    std::cout << "6 — (2.3)\n";
    std::cout << "7 — (2.5)\n";
    std::cout << "8 — 2.7)\n";
    std::cout << "9 — 2.9)\n";
    std::cout << "10 — (3.1)\n";
    std::cout << "11 — (3.3)\n";
    std::cout << "12 — (3.5)\n";
    std::cout << "13 — (3.7)\n";
    std::cout << "14 — (3.9)\n";
    std::cout << "15 — (4.1)\n";
    std::cout << "16 — (4.7)\n";
    std::cout << "0 — Выход\n";


    if (!(std::cin >> choice)) {
      std::cout << "Ошибка! Введите номер.\n";
      ClearInput();
      continue;
    }

    if (choice == 0) {
      std::cout << "Выход из программы.\n";
      break;
    }


    switch (choice) {
    case 1: {
      double x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Fraction(x) << std::endl;
      break;
    }


    case 2: {
      int x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Is2Digits(x) << std::endl;
      break;
    }


    case 3: {
      int a, b, num;
      std::cout << "Введите a, b и num: ";
      if (!(std::cin >> a >> b >> num)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
          break;
      }
      std::cout << "Результат:\n" << IsInRange(a, b, num) << std::endl;
      break;
    }


    case 4: {
      int a, b, c;
      std::cout << "Введите a, b и c: ";
      if (!(std::cin >> a >> b >> c)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << IsEqual(a, b, c) << std::endl;
      break;
    }


    case 5: {
      int x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Abs(x) << std::endl;
      break;
    }


    case 6: {
      int x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Is35(x) << std::endl;
      break;
    }


    case 7: {
      int x, y, z;
      std::cout << "Введите x, y и z: ";
      if (!(std::cin >> x >> y >> z)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Max3(x, y, z) << std::endl;
      break;
    }


    case 8: {
      int x, y;
      std::cout << "Введите x и y: ";
      if (!(std::cin >> x >> y)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Sum2(x, y) << std::endl;
      break;
    }


    case 9: {
      int x;
      std::cout << "Введите номер дня недели (1-7): ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << Day(x) << std::endl;
      break;
    }


    case 10: {
      int x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n\"" << ListNums(x) << "\"" << std::endl;
      break;
    }


    case 11: {
      int x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n\"" << Chet(x) << "\"" << std::endl;
      break;
    }


    case 12: {
      long x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n" << NumLen(x) << std::endl;
      break;
    }


    case 13: {
      int x;
      std::cout << "Введите число: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n";
      Square(x);
      break;
    }


    case 14: {
      int x;
      std::cout << "Введите высоту треугольника: ";
      if (!(std::cin >> x)) {
        std::cout << "Ошибка ввода!\n";
        ClearInput();
        break;
      }
      std::cout << "Результат:\n";
      RightTriangle(x);
      break;
    }


    case 15: {
      int n;
      std::cout << "Введите размер массива: ";
      std::cin >> n;

      int* arr = new int[n]; 

      std::cout << "Введите элементы массива: ";
      for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
      }

      int x;
      std::cout << "Введите число для поиска: ";
      std::cin >> x;

      int result = FindFirst(arr, n, x);
      std::cout << "Результат: " << result << std::endl;
    }


    case 16: {
        int n;
        std::cout << "Введите размер массива: ";
        std::cin >> n;

        // Создаём исходный массив
        int* arr = new int[n];
        std::cout << "Введите элементы массива: ";
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        // Получаем перевёрнутый массив
        int* reversed = ReverseBack(arr, n);

        // Выводим результат
        std::cout << "Результат: [";
        for (int i = 0; i < n; i++) {
            std::cout << reversed[i];
            if (i < n - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;

  
    }
   

    default:
      std::cout << "Неверный номер задачи.\n";
    }
  }

  return 0;
}