/*

15. Dadas as declarações abaixo; qual é o valor dos itens: 
int x = 10, *px = &x, **ppx = &x; 
float y = 5.9, *py = &y, **ppy = &py; 

x y px py ppx ppy


FFA0 FFB4 FFF0 FFC6 FFA6 FFD4

a) x =
b) *py =
c) px =
d) &y =
e) *px =
f) y =
g) *ppx =
h) py =
i) &x =
j) .ppy++ =
k) *px-- =
l) **ppy =
m) &ppy =
n) *&px =
o) **ppx++ =
p) .px++ =
q) &ppx =


*/

15)

a) x = 10
b) *py= 5.9
c) px = FFA0
d) &y = FFB4
e) *px = 10
f) y = 5.9
g) *ppx = 10
h) py = FFB4
i) &x = FFA0
j) py++ = lixo
k) *px-- = 9
l) **ppy = 5.9
m) &ppy = FFA6
n) *&px = FFA0
o) **ppx++ = lixo
p) px++ = lixo
q) &ppx = FFD4
