#Ler dois números n1 e n2 e exibir todos os números entre n1 e n2.

n1 = input ("Escolha um número:")
n2 = input ("Agora escolha outro número:")
if (n1>n2):
    for i in range (n1,n2):
    print ("Os números entre",n1," e ",n2," são:",i)
else
    for i in range (n2,n1):
    print ("Os números entre",n2," e ",n1," são:",i)
