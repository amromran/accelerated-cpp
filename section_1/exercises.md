1.
```c++
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";
```
2.
```c++
    const std::string exclam = "!";
    const std::string message = "Hello" + ", world" + exclam; // Wrong
```
3. Works. Different scopes.
```c++
    { const std::string s = "a string";
    std::cout << s << std::endl; }
    { const std::string s = "another string";
    std::cout << s << std::endl; }
    return 0;
```
4. Works. With or without `;`.
    - Hides local declaration.
```c++
{ const std::string s = "a string";
        std::cout << s << std::endl;
        { const std::string s = "another string";
        std::cout << s << std::endl; }};
    return 0;
```
5.
```c++
    std::string s = "a string";
        { std::string x = s + ", really";
        std::cout << s << std::endl;
        std::cout << x << std::endl;
    }
    return 0;
```
6. Works. The trick is that you can chain strings after `endl`
```c++
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
    return 0;
```