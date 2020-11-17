Чтение из файла:

```C++
// Нужен #include <fstream>
std::ifstream i("file.json");
json j;
i >> j;
```

Сохранение в файл:


```C++
// Нужен #include <fstream>
std::ofstream o("pretty.json");
o << std::setw(4) << j << std::endl;
```

Преобразование JSON в строку:

```C++
std::string s = j.dump();    // {"happy":true,"pi":3.141}

// если нужны отствупы
std::string s = j.dump(4);
// {
//     "happy": true,
//     "pi": 3.141
// }
```

Из строки в JSON:

```C++
auto j3 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
```

Если есть JSON в файле

```json
{
  "pi": 3.141,
  "happy": true,
  "name": "Niels",
  "nothing": null,
  "answer": {
    "everything": 42
  },
  "list": [1, 0, 2],
  "object": {
    "currency": "USD",
    "value": 42.99
  }
}
```

и нужно получить доступ к элементу просто пишешь:

```C++
std::ifstream i("file.json");
json j;
i >> j;

j["answer"]["everything"]; // 42
j["list"][0]; // 1
j["object"]["currency"]; // "USD"
```

Если нужно создать ключи:

```C++
json j;
j["int"] = 10;
j["array"] = json::array();
j["array"].push_back(1);
```

