What output do the following calls of printf produce?

```c
(a) printf("%d, %4d", 86, 1040);
(b) printf("%12.5e", 30.253);
(c) printf("%.4f", 83.162);
(d) printf("%-6.2g", .0000009979);
```

What it does:
a = Both are in decimal format one has the width of 4.
b = Expands to 5 digits behind the dot (.) with an exponent.
c = Has 4 floating point digits behind the dot (.).
d = Writes down exponent in scientific format.

Output when printed:
a = 86, 1040
b = 3.02530e+01
c = 83.1620
d = 1e-06