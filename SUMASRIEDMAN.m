clc,clear
syms x;
f=input('ingrese la funcion ');
a=input('ingrese el inicio del intervalo ');
b=input('ingrese el fin del intervalo ');
n=input('ingrse la cantidad de intervalo ');
dx=(b-a)/n;
resultado=zeros(1,n); 
i=0;
fs=subs(f,x,(a+i*dx));
fr=fs*dx;
resultado(1)=fr;
for i=1:n;
    fs=subs(f,x,(a+i*dx));
    fr=fs*dx;
    resultado(i+1)=resultado(i)+fr;
end
fprintf('el area bajo la curva es = %d \n',double(resultado));
x=a:dx:b;
bar(x,resultado)
