# cryptopic
Проект команды "Information Security Powerlifting", подготовительная программа Технопарка МГТУ по С/С++, весна 2022


### Ставим cppCMS:
* Клонируем репо: `git clone https://github.com/artyom-beilis/cppcms.git cppcms`
* Заходим в папку с фреймворком, создаем в ней папку "build" и переходим в нее: `mkdir build`, `cd build`
* запускаем Cmake: `cmake ..`
* запускаем мейк: `make`, `make test`, `sudo make install`
* фреймврок должен был установиться

### Поднимаем сервак:
из папки cryptopic:
* `make build`
* если нужно обновить шаблон: `make build_skin`
* `make run_server`
сервер откроется на порту 8080, по адресу `http://localhost:8080/index` можно получить доступ к главной (и единственной) страничке
