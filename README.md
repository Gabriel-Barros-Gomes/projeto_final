# Projeto Final (AED)
## Descrição do Projeto
```
• Programa que apoia um restaurante em seus atendimentos visando
proteger a saúde de seus clientes e funcionários em virtude da pandemia
vivida atualmente.

• Esse apoio vem na realização dos pedidos por meio de um dispositivo,
para evitar o contato de clientes com funcionários. Há uma tela inicial
para escolha de usuário e 3 usuários que têm acessos distintos. Sendo
eles: Gerente, Chef e Cliente.
```

### Funcionalidade
```
• GERENTE: Este usuário é o único autorizado a fazer alterações no
cardápio, ele visualiza todos os pedidos realizados, e é o responsável por
“fechar a conta” do cliente. Além da funcionalidade no horário de
funcionamento do restaurante, ele tem acesso a todos os itens vendidos
naquele dia, através de um relatório gerado pelo programa no menu
Faturamento.

• CHEF: Consegue ter acesso aos pedidos que ele ainda há de realizar,
aqueles que estão em andamento e os já entregues. Quando ele finaliza
um pedido em andamento, ele comunica ao programa, que
consequentemente comunica aos outros usuários que aquele pedido
está pronto.

• CLIENTE: Tem acesso ao cardápio do restaurante, consegue fazer o seu
pedido, colocar alguma observação caso necessário e finalizá-lo. Após a
conclusão, ele consegue verificar o status de seu pedido até este ficar
pronto.
```
### Uso
```
Requisitos:
git para windows -> https://git-scm.com/
MinGw -> gcc e g++ compilers https://sourceforge.net/projects/mingw/

Instalação:
  -> Abrir cmd
  -> mkdir application [enter]
  -> cd application [enter]
  -> git clone https://github.com/Gabriel-Barros-Gomes/projeto_final [enter]
  -> Execute o seguinte arquivo "../application/projeto_final/src/bin/main.exe"
 
Instruções de Uso: 

Na tela inicial escolha o seu tipo de usuário, digitando:
1 caso seja o gerente do restaurante;
2 caso seja o cheff do restaurante;
3 caso seja um cliente do restaurante.

GERENTE
Primeira coisa a fazer é entrar com seu login e senha cadastrados pelo ADM.
Após isso, você poderá escolher a opção da ação que deseja realizar, no seu menu há as seguintes opções:

1 ALTERAÇÃO DE CARDAPIO
	-> Nesta opção você poderá fazer mudanças no cardápio do seu restaurante, modificando preços, inserindo e removendo itens.

2 CAIXA 
	-> Esta será uma opção bastante utilizada, você indicará o número da mesa que deseja visualizar e o programa listará os pedidos
	desta mesa e o valor da conta.
	-> Você deve escrever a forma de pagamento do cliente, para uma questão de melhor organização do restaurante no momento do FATURAMENTO.
	Esta opção é apenas para informar dados ao programa.

3 FATURAMENTO 
	-> Através desta opção você consegue ter controle do seu restaurante. 
	-> Você entra com a data desejada e o programa mostra os pedidos realizados naquela data no restaurante.

CHEFF
Primeira coisa a fazer é entrar com seu login e senha cadastrados pelo ADM.
Após isso, você poderá escolher a opção da ação que deseja realizar, no seu menu há as seguintes opções:

1 ABRIR PEDIDO
	-> Nesta opção você terá acesso a uma fila de pedidos que há para fazer, após a realização de determinado pedido você deve ir
	para opção 2 que informa ao programa que aquele pedido está concluído.
2 PEDIDO CONCLUIDO
	-> Esta opção é utilizada para informar ao programa que determinado pedido está pronto, nela você também indica se deseja ir 
	para o próximo pedido.

CLIENTE
Seja muito bem-vindo ao nosso restaurante!
Qualquer dúvida contate um de nossos funcionários. 
A sua tela inicial já lhe apresenta o cardápio. Antes de cada item há um número de identificação, logo depois vem sua descrição e valor.
No seu menu há as seguintes opções:

1 REALIZAR PEDIDO
	-> Esta opção é a mais importante! Através dela você fará seu pedido e dará todas as informações necessárias para o Cheff que o prepara.
	-> Siga as instruções de cada pergunta e vá montando seu pedido.
	-> Ao final, informe o número da mesa em que se encontra e envie o seu pedido.

2 STATUS DO PEDIDO
	-> Esta opção é somente para visualização, o programa lhe informará como anda o seu pedido. 
	-> Quando ele estiver concluído, retire o pedido no local determinado.

3 FECHAR MESA
	-> Aqui você informa que deseja fechar sua conta, esta informação chegará ao caixa e você pode se dirigir a ele após ativar esta opção.
	-> Este será o único contato que você terá com pessoas, mas sempre seguindo as normas de segurança do momento atual de Pandemia que vivemos.

```
