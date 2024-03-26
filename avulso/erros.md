# Erros de Compilação Comuns (e como resolvê-los)


## Erros de sintaxe

### Uso de operador incorreto: no exemplo abaixo, o uso operador **++** está incorreto, pois ele não requer outra variável. 

  ```
      int a,b;

      a = 1;
      b = 2;

      a++b;
  ```

  vai gerar o erro

```error: expected ‘;’ before ‘a’```

**Correção**

  ```
      int a,b;

      a = 1;
      b = 2;

      a++;
```

### Declaração repetida da variável ```a``` mas com diferentes tipos.

  ```
      int a;
      float a;
  ```
  
  vai gerar o erro:
  
  ```
  error: conflicting types for ‘a’; have ‘float’
      7 |     float a;
        |           ^
  note: previous declaration of ‘a’ with type ‘int’
      6 |     int a;
  ```

